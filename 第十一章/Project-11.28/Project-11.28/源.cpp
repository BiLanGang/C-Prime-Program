#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//在 map 上调用 find函数N
	map<string, vector<int>> mp = { {"wang",{1,2,3}},
								 {"li",{1,2,3}},
								 {"huang",{6,5,4}}};
	auto it=mp.find("wang");
	cout << it->first << " ";
	for (auto i : it->second)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}