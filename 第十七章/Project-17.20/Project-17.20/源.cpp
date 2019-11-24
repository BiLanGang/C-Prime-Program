#include<iostream>
#include<string>
#include<regex>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace  std;

#ifndef DEBUG
//17.20
bool valid(const smatch &item)
{
	if (item[1].matched)
	{
		//如果有左括号，则必须有对应的右括号以及其他部分匹配以及两个分隔符保持格式一致
		return item[3].matched&&item[4].str() == item[6].str()
			&& item[5].matched&&item[7].matched;
	}
	else
		//如果没有左括号，则也必须没有右括号
		return !item[3].matched&&item[4].str() == item[6].str()
		&& item[5].matched&&item[7].matched;

}
#endif // DEBUG




int main()
{
	ifstream in("text.txt");
	if (in)
	{//号码匹配正则表达式
		try
		{
#ifdef DEBUG
			/*17.22 修改，允许在号码的三部分之间放置任意多个分隔符（但必须保持格式一致）
			即第一部分使用几个分隔符，第二部分就必须使用数量以及形式都相同的分隔符。
			例如：012   123   1234*/
			regex rr("(\\()?(\\d{3})(\\))?([-. ]+)?(\\d{3})([-. ]+)?(\\d{4})");
#endif // DEBUG

#ifndef test
			regex rr("(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})");
#endif // !test

			smatch results;
			string s;
			while (getline(in,s))
			{
				for (sregex_iterator it(s.begin(), s.end(), rr), end_it; it != end_it; ++it)
				{
					if (valid(*it))
						cout << "valid:" << it->str() << endl;
					else
						cout << "not valid:" << it->str() << endl;
				}
			}
		}
		catch (regex_error e)
		{
			cerr << e.what() << "\ncode:" << e.code() << endl;
		}
		system("pause");
		return 0;
	}
	else
	{
		cerr << "文件打开失败！" << endl;
		system("pause");
		return -1;
	}
}