#include<iostream>
#include<regex>
#include<string>
using namespace std;
int  main()
{
	/* 找出输入序列中所有违反“ei”语法规则的单词。
	“ei”语法规则：i 必须在 e 之前，除非在 c 之后。*/

	string file("receipt freind theif receive");
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern, regex::icase);//构造对应匹配的正则表达式，并指明在匹配时忽略大小写
	// 使用迭代器适配器查找所有匹配的单词
	for (sregex_iterator it(file.begin(), file.end(), r), end_it; it != end_it; ++it)
	{
		cout << it->str() << endl;
	}
	system("pause");
	return 0;

}