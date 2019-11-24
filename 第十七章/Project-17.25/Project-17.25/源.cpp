#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<regex>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
	ifstream in("text.txt");
	if (in)
	{
		try
		{
			string phone("(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})");
			regex r(phone);
			string fmt("$2.$5.$7");
			string s;
#ifdef DEBUG
			/* 只输出每个用户的第一个电话号码 */
			string str;
			while (getline(in, s))
			{
				//将替换的结果绑定到 string 流
				istringstream istr(regex_replace(s, r, fmt));
				//读入用户名以及第一个电话号码并输出
				for (size_t i = 0; i < 2; ++i)
				{
					istr >> str;
					cout << str << " ";
				}
				cout << endl;
			}
#endif // DEBUG

#ifndef test
			//17.26
			/* 对于多于一个电话号码的用户来说从第二个号码开始输出 */
			vector<string> phones;
			string str;
			while (getline(in, s))
			{
				//将替换的结果绑定到 string 流
				istringstream istr(regex_replace(s, r, fmt));
				//将结果中的用户名以及电话号码存入一个 vector
				while (istr >> str)
				{
					phones.push_back(str);
				}
				//判断 vector 的长度是否超过 2，即用户是否具有两个以上的电话号码
				if (phones.size() > 2)
				{
					/*具有两个以上的电话号码，则从第二个号码开始输出*/
					for (size_t i = 0; i < phones.size(); ++i)
					{
						if (i == 1)
							continue;
						cout << phones[i] << " ";
				    }
					cout << endl;
				}
				else
				{
					/* 反之，输出全部结果*/
					for (const auto &p : phones)
					{
						cout << p << " ";
					}
					cout << endl;
				}
				phones.clear();
			}
#endif // test

			
		
        }
		catch (regex_error e)
		{
			cerr << e.what() << "\ncode: " << e.code() << endl;
			return -1;
		}
	}
	else
		cout << "File open faild" << endl;
	system("pause");
	return 0;
}