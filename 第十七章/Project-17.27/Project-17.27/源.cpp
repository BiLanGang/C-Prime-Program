#include<iostream>
#include<regex>
#include<string>

using namespace std;
 /* 将九位数字的邮政编码转换为 ddddd-dddd 格式 */
int main()
{
	try {
		/* 匹配九位数字邮政编码正则表达式 */
		string postcode("(\\d{5})([-])?(\\d{4})?");
		regex r(postcode);
		string PostCode;
		//输出格式
		string fmt("$1-$3");
		cin >> PostCode;
		cout << regex_replace(PostCode, r, fmt) << endl;
		system("pause");
		return 0;
	}
	catch (regex_error e)
	{
		cerr << e.what() << "\ncode: " << e.code() << endl;
		system("pause");
		return -1;
	}
	
}