#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main()
{
	try
	{
		
		regex r("([[:alnum:]]+)\\.(cpp|cxx|cc)$", regex::icase);
		/* 表达式中括号括起来的部分为正则表达式的子表达式
		$ 表示匹配输入行尾，在上述的正则表达式的模式中共包含
		两个子表达式，即由括号括起来的两部分，分别表示文件名以及文件扩展名
		模式匹配位置代表不同的含义：
		0：代表正则表达式整体的匹配
		以下均为子表达式的匹配
		1：代表正则表达式模式中第一个子表达式（文件名）
		2：代表正则表达式模式中第二个子表达式（文件扩展名）

		...? 表示组件可选的符号，当出现在子表达式中时，可出现在括号里也可出现在
		括号外
		.........*/
		smatch results;
		string filename;
		while (cin >> filename)
			if (regex_search(filename, results, r))
			{
#ifndef DEBUG
				//输出匹配的表达式
				cout << results.str() << endl;
#endif // DEBUG

#ifdef test
				//输出文件名，即只输出第一个子表达式
				cout << results.str(1) << endl;
#endif // !test

			
			}
			
	}
	catch (regex_error err)
	{
		cout << err.what() << "\ncode:" << err.code() << endl;
	}
	system("pause");
	return 0;
}