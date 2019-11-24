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
#include<iterator>
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
	QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f) :
		sought(s), lines(p), file(f) {}
	set<line_no>::iterator begin()
	{
		return lines->begin();
	}
	set<line_no>::iterator end()
	{
		return lines->end();
	}
	shared_ptr<vector<string>> get_file()
	{
		return make_shared<vector<string>>(file);
	}

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
class Query_base
{
	friend class Query;
protected:
	using line_no = TextQuery::line_no;     // for eval function
	virtual ~Query_base() = default;
private:
	// eval return the QueryResult matches with the Query.
	virtual QueryResult eval(const TextQuery&) const = 0;
	// rep mean the query object is string.
	virtual std::string rep() const = 0;
};

class WordQuery : public Query_base
{
	friend class Query;
private:
	WordQuery(const std::string& s) : query_word(s)
	{
		std::cout << "WordQuery constructor. s = " << s << std::endl;
	}
	QueryResult eval(const TextQuery& t) const
	{
		return t.query(query_word);
	}
	std::string rep() const
	{
		std::cout << "WordQuery::rep()" << std::endl;
		return query_word;
	}
	std::string query_word;
};

class Query
{
	friend Query operator~ (const Query &);
	friend Query operator| (const Query&, const Query&);
	friend Query operator& (const Query&, const Query&);
public:
	//    Query (const std::string&);
	Query(const std::string& s) : q(new WordQuery(s))
	{
		std::cout << "Query constructor. s = " << s << std::endl;
	}
	QueryResult eval(const TextQuery &t) const
	{
		return q->eval(t);
	}
	std::string rep() const
	{
		std::cout << "Query::rep()" << std::endl;
		return q->rep();
	}
private:
	Query(std::shared_ptr<Query_base> query) : q(query) {}
	std::shared_ptr<Query_base> q;
};

std::ostream& operator<< (std::ostream& os, Query& query)
{
	std::cout << "operator<<::rep()" << std::endl;
	return os << query.rep();
}

class NotQuery : public Query_base
{
	friend Query operator~(const Query&);
	NotQuery(const Query& q) : query(q)
	{
		std::cout << "NotQuery constructor." << std::endl;
	}
	// virtual function inherit by Query_base.
	QueryResult eval(const TextQuery&) const;
	std::string rep() const override
	{
		std::cout << "NotQuery::rep()" << std::endl;
		return "~(" + query.rep() + ")";
	}
	Query query;
};

inline Query operator~(const Query& operand)
{
	return std::shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery :public Query_base
{
protected:
	BinaryQuery(const Query &l, const Query& r, std::string s) :
		lhs(l), rhs(r), opSym(s)
	{
		std::cout << "BinaryQuery constructor." << std::endl;
	}
	std::string rep() const
	{
		std::cout << "BinaryQuery::rep()" << std::endl;
		return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")";
	}
	Query lhs, rhs;
	std::string opSym; // operator name
};

class AndQuery : public BinaryQuery
{
	friend Query operator& (const Query&, const Query&);
	AndQuery(const Query& left, const Query& right) : BinaryQuery(left, right, "&")
	{
		std::cout << "AndQuery constructor." << std::endl;
	}
	QueryResult eval(const TextQuery&) const;
};

inline Query operator& (const Query& lhs, const Query& rhs)
{
	return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery : public BinaryQuery
{
	friend Query operator| (const Query&, const Query&);
	OrQuery(const Query& left, const Query& right) : BinaryQuery(left, right, "|")
	{
		std::cout << "OrQuery constructor." << std::endl;
	}
	QueryResult eval(const TextQuery&) const;
};

inline Query operator| (const Query& lhs, const Query& rhs)
{
	return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

QueryResult OrQuery::eval(const TextQuery& text) const
{
	// call Query::eval() --> Query_base::eval() --> QueryResult::eval()
	QueryResult right = rhs.eval(text), left = lhs.eval(text);
	auto ret_line = make_shared<set<line_no>>(left.begin(), left.end());
	ret_line->insert(right.begin(), right.end());
	return QueryResult(rep(), ret_line, left.get_file());
}

QueryResult AndQuery::eval(const TextQuery& text) const
{
	QueryResult right = rhs.eval(text), left = lhs.eval(text);
	//   auto ret_line = make_shared<set<line_no>> (left.begin(), left.end());
	shared_ptr<std::set<line_no>> ret_lines =
		std::make_shared<std::set<line_no>>(left.begin(), left.end());
	set_intersection(left.begin(), left.end(), right.begin(), right.end(), inserter(*ret_lines, ret_lines->begin()));
	return QueryResult(rep(), ret_lines, left.get_file());
}

QueryResult NotQuery::eval(const TextQuery& text) const
{
	auto result = query.eval(text);
	auto ret_lines = make_shared<set<line_no>>();
	auto beg = result.begin(), end = result.end();
	auto sz = result.get_file()->size();
	for (size_t i = 0; i < sz; ++i)
	{
		if (beg == end || *beg != i)
		{
			ret_lines->insert(i);
		}
		else if (beg != end)
		{
			++beg;
		}
	}
	return QueryResult(rep(), ret_lines, result.get_file());
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
		TextQuery input(in);
		cout << "请输入要查询的单词：";
		string word;
		cin >> word;
		auto result = input.query(word);
		print(cout, result);
		system("pause");
		return 0;
	}
}