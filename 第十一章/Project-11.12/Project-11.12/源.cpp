#include<utility>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//使用容器保存 pair 数据类型
	vector<pair<string, int>> vec;
	string s; int i;
	while (cin >> s >> i)
	{
		//vec.push_back({ s,i });   第一种
		vec.emplace_back( s,i );  //第二种,速度最快
		//vec.push_back(make_pair(s, i)); 第三种
	}
	for (const auto v : vec)
	{
		cout << v.first << " " << v.second << endl;
	}
	system("pause");
	return 0;
	
}