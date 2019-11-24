#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
/*
使用vector保存不重复的元素值。
相比 vector，set可以自动合并重复的元素。并且 set 支持高效的关键字检索，但不支持随机访问，且
他是一个无序容器 
*/
int main()
{
	vector<int> v = { 0,1,2,5,4,1,5,2,3,4,5,6,9,8,5,9 };
	sort(v.begin(), v.end());
	auto iter = unique(v.begin(), v.end());
	v.erase(iter, v.end());
	for (auto i : v) {
		cout << i << " ";
	}
	system("pause");
	return 0;
}