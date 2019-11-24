#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	ifstream in("text.txt");//打开对应的单词文件
	if (!in)
	{
		cerr << "打开失败！" << endl;
		system("pause");
		return -1;
	}
	else
	{
		string up("bdfhklt"), down("gjpqy");//up 上出头字符；down 下出头字符
		vector<string> svec;
		string word;
		string::size_type pos = 0;
		while (in >> word)
		{
			if ((pos = word.find_first_of(up)) == string::npos)
				if ((pos = word.find_first_of(down)) == string::npos)
					svec.push_back(word);
		}
		//输出长度最长的单词
		auto Max = svec[0];
		for (auto s : svec)
			if (s.size() > Max.size())
				Max = s;
		cout << Max << endl;
		in.close();
		system("pause");
		return 0;
	}

}