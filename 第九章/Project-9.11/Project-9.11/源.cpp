#include<array>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	/*
	vector 的六种初始化方式
	*/
	vector<int> ivec = { 0,1,2 };
	vector<int> ivec1(10, 10);
	vector<int> ivec2(ivec);
	vector<int> ivec3 = ivec1;
	vector<int> ivec4(ivec2.begin(), ivec2.end());
	vector<int> ivec5(10);
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	for (auto i : ivec1)
		cout << i << " ";
	cout << endl;
	for (auto i : ivec2)
		cout << i << " ";
	cout << endl;
	for (auto i : ivec3)
		cout << i << " ";
	cout << endl;
	for (auto i : ivec4)
		cout << i << " ";
	cout << endl;
	for (auto i : ivec5)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}