#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//multimap 应用：统计家庭人数
	multimap<string, vector<string>> family;
	vector<string> sv;
	string first_name, last_name;
	int num, k = 1;
	cout << "请输入共有几个姓：";
	cin >> num;
	while (num--)
	{
		cout << "请输入第 " << k << " 个姓：";
		cin >> last_name;
		cout << "请输入姓 " << last_name << " 的家庭成员（以 end 结束）：";
		while (cin>>first_name)
		{
			if (first_name != "end")
			{
				sv.push_back(first_name);
			}
			else
			{ 				
				break;				
			}
		}
		family.emplace(last_name, sv);
		sv.clear();
		++k;
		cout << endl;
	}
	for (const auto &f : family)
	{
		cout << "姓 " << f.first << " 有如下成员：" << endl;
		for (const auto &p : f.second)
			cout << p << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}