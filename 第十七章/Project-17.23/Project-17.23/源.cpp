#include<iostream>
#include<string>
#include<regex>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace  std;
//匹配邮政编码，邮政编码可以由五位数字或者九位数字构成，前五位和后四位之间有一个短横线
bool valid(const smatch &item)
{
	if (item[1].matched)
		return (!item[2].matched && !item[3].matched)
		|| (item[2].matched && item[3].matched);
	else
		return false;
}

int main()
{
	ifstream in("text.txt");
	if (in)
	{//号码匹配正则表达式
		try
		{
			//验证邮政编码正则表达式
			regex rr("(\\d{5})([-])?(\\d{4})?");
			/* (\\d{5})  邮政编码前五位（必选）
			   ([-])?      中间间隔符（可选）
			   (\\d{4})? 邮编后四位（可选）*/ 
			smatch results;
			string s;
			while (getline(in, s))
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