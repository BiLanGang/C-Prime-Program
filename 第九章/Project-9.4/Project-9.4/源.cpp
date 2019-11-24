#include<vector>
#include<iostream>
using namespace std;
#ifdef DEBUG
/*
9.3 返回布尔值
*/
bool FindInt(vector<int> &ivec, int i)
{
	for (const auto x : ivec)
		if (x == i)
			return true;
	return false;
}
#endif // DEBUG

#ifndef debug
/*
9.4 返回一个迭代器
*/
vector<int>::iterator FindInt(vector<int> &ivec, int i)
{
	for (auto it=ivec.begin();it!=ivec.end();++it)
		if (*it == i)
			return it;
	return ivec.begin();
}
#endif // !debug


int main()
{
	vector<int> ivec = { 0,1,2,3,4,5,6,7,8,90 };
	int item = 6;
	if (FindInt(ivec, item)!=ivec.begin())
		cout << "Yes" << endl;
	else
		cerr << "No Find" << endl;
	system("pause");
	return 0;
}