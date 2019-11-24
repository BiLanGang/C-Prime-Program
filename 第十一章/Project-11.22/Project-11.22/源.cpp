#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	map<string, vector<int>> mp;
	/* 返回值 it 为一个 pair<mp<string,vector<int>>::iterator,bool> 
	   第一个迭代器指向给定关键字元素，第二个布尔值指出本次插入是否成功*/
	auto it = mp.insert({ "wangben",{22} });
	if (it.second)
	{
		cout << it.first->first << " ";
		for (auto v : it.first->second)
			cout << v << " ";
	}
	system("pause");
	return 0;
}