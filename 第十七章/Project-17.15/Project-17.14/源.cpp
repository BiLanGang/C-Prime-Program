#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main()
{
	try
	{
		string pattern("ie");
		string pattern1("cei");
#pragma region
		//17.16
		string pattern2("[^c]ei");
#pragma endregion

		//我们要包含的 pattern 的整个单词
		pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";//i 在 e 之前
		pattern1 = "[[:alpha:]]*" + pattern1 + "[[:alpha:]]*";//除非在 c 之后
#ifdef DEBUG
		//17.16 测试 
		pattern1 = "[[:alpha:] ]*" + pattern2 + "[[:alpha:]]*";//除非在 c 之后
#endif // DEBUG

		string check = pattern + "|" + pattern1;
		regex r(check);    //构造一个用于查找模式的 regex 
		smatch results;      //定义一个对象用于保存搜索结果
		string test_str;//定义一个 string 保存与模式匹配不匹配的文本
		cout << "请输入一个单词：" << endl;
		while (cin >> test_str)
		{
			if (regex_search(test_str, results, r))   //用 r 在 test_str 中查找与 pattern 匹配的子串
				cout << "匹配成功" << endl;
			else
				cout << "匹配失败" << endl;
		}
	}
	catch (regex_error e)
	{
		cerr << e.what() << "\ncode:" << e.code() << endl;
	}
	system("pause");
	return 0;
}