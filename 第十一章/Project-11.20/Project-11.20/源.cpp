#include<map>
#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;
void process(string &s)
{
	for (int i = 0; i < s.size(); ++i)
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
		else if (ispunct(s[i]))
			s.erase(i, 1);
}
int main()
{
	ifstream in("text.txt");
	if (in)
	{
		map<string, size_t> count;
		string word;
		while (in >> word)
		{
			process(word);
			//函数返回一个 pair，first 为一个迭代器，指向指定关键字的元素；second 为一个指示插入是否成功的布尔值
			auto it = count.insert({ word,1 });
			if (!it.second)
				++it.first->second;
		}
		for (const auto&w : count)
			cout << w.first << " occurs " << w.second << ((w.second > 1 ? " times" : " time")) << endl;
	}
	else
		cerr << "文件打开失败" << endl;
	system("pause");
	return 0;
}
/*
对比可得，下标运算更加简单易懂。
*/