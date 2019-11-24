#include<utility>
#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	map<string, vector<pair<string, string>>> family;
	string first_name, last_name, birthday;
	cout << "请输入该家庭的姓氏：";
	cin >> last_name;
	while (cin >> first_name >> birthday)
	{
		family[last_name].emplace_back(first_name, birthday);
	}
	for (const auto &f : family)
	{
		cout << "姓：" << f.first << "有如下成员" << endl;
		for (const auto &v : f.second)
			cout << v.first << " " << v.second << endl;
	}
	system("pause");
	return 0;
}