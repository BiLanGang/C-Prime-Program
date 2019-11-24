#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> iv = { 0,1,2,3,0,4,5,0,5,8,5,2,6,2,7,2,8,4 };
	list<int> il;
	sort(iv.begin(), iv.end());
	// back_inserter 插入迭代器，它接受一个容器，生成一个迭代器，能实现向给定容器中添加元素
	unique_copy(iv.begin(), iv.end(), back_inserter(il));
	for (auto i : il)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}