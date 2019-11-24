#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	// multimap 删除元素
	multimap<string, string> author;
	author.emplace("libai", "wanglushanpubu");
	author.emplace("wangwei", "jbdfs");
	author.emplace("libai", "jadshsa");
	author.emplace("dufu", "kjjdk");
	author.emplace("wangwei", "ksjdfksj");
	size_t count = author.count("libai");
	string key;
	cout << "请输入关键字：";
	cin >> key;
	auto num = author.count(key);
	if (num)
	{
		author.erase(key);
		cout << "删除成功！" << endl;
		for (const auto a : author)
			cout << a.first << " " << a.second << endl;
	}
	else
		cerr << "该关键字不在容器中！" << endl;
	system("pause");
	return 0;
}