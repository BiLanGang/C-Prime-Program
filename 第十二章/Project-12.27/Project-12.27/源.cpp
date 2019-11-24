/*文本查询程序*/
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<string>
#include<sstream>
#include<memory>
#include<fstream>
#include<algorithm>
using namespace std;
void process(string &s)//单词处理。忽略大小写以及标点
{
	for (int i = 0; i < s.size(); ++i)
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
		else if (ispunct(s[i]))
			s.erase(i, 1);
}
string make_plural(size_t ctr, const string &word,
	const string &ending)//输出函数
{
	return (ctr == 1) ? word : word + ending;

}

class QueryResult;
class TextQuery
{
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream &);
	QueryResult query(const string&) const;
private:	
	shared_ptr<vector<string>> file;
	map<string, shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &is) :file(new vector<string>)
{
	string text;
	while (getline(is, text))
	{
		file->push_back(text);
		int n = file->size() - 1;
		istringstream in(text);
		string word;
		while (in >> word)
		{
			process(word);
			auto &lines = wm[word];
			if (!lines)
				lines.reset(new set<line_no>);
			lines->insert(n);
		}
	}
}


class QueryResult
{
	using line_no = vector<string>::size_type;
	friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f):
		sought(s),lines(p),file(f){}
private:
	string sought;
	shared_ptr<set<line_no>> lines;
	shared_ptr<vector<string>> file;
};

QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if (loc == wm.end())
	{
		return QueryResult(sought, nodata, file);
	}
	else
		return QueryResult(sought, loc->second, file);
}

ostream & print(ostream & os, const QueryResult &qr)
{
	os << qr.sought << " occurs " << qr.lines->size() << " " << make_plural(qr.lines->size(), "time", "s") << endl;
	for (auto num : *qr.lines)
		os << "\t(line" << num + 1 << ")" << *(qr.file->begin() + num) << endl;
	return os;
	// TODO: 在此处插入 return 语句
}

void runQueries(ifstream& infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for, or q to quit:";
		string s;
		if (!(cin >> s) || s == "q")
			break;
		print(cout, tq.query(s)) << endl;
	}
}

// 测试主程序
int main()
{
	ifstream in("text.txt");
	if (!in)
	{
		cerr << "文件打开失败" << endl;
		system("pause");
		return -1;
	}
	else
	{
		runQueries(in);
		system("pause");
		return 0;
	}
}