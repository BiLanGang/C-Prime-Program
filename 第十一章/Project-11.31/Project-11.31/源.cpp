#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	// multimap ɾ��Ԫ��
	multimap<string, string> author;
	author.emplace("libai", "wanglushanpubu");
	author.emplace("wangwei", "jbdfs");
	author.emplace("libai", "jadshsa");
	author.emplace("dufu", "kjjdk");
	author.emplace("wangwei", "ksjdfksj");
	size_t count = author.count("libai");
	string key;
	cout << "������ؼ��֣�";
	cin >> key;
	auto num = author.count(key);
	if (num)
	{
		author.erase(key);
		cout << "ɾ���ɹ���" << endl;
		for (const auto a : author)
			cout << a.first << " " << a.second << endl;
	}
	else
		cerr << "�ùؼ��ֲ��������У�" << endl;
	system("pause");
	return 0;
}