#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//map 应用
	map<string, vector<string>> family;
	string first_name, last_name;
	cout << "请输入姓：";
	cin >> last_name;
	cout << "请输入该家庭成员名字：";
	while (cin >> first_name)
		family[last_name].push_back(first_name);
	for (const auto &f : family)
	{
		cout << "姓 " << f.first << " 有如下成员：" << endl;
		for (const auto &p : f.second)
			cout << p << endl;
	}
	system("pause");
	return 0;
}