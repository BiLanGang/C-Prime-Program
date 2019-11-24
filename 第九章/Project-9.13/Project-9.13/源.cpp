#include<list>
#include<vector>
#include<iostream>
using namespace std;
int main()
{/*
使用 list<int> 初始化一个 vector<double>
*/
#pragma region

	list<int> il = { 0,1,2,3,4,5,6,7,8,9 };
	vector<double> dv(il.begin(),il.end());
	for (auto d : dv)
		cout << d << " ";
	cout << endl;
#pragma endregion
	/*
	使用 vector<int> 初始化一个 vector<double>
	*/
#pragma region

	vector<int> iv = { 1,2,3,4,5,6 };
	vector<double> dvec(iv.begin(),iv.end());
	for (auto d : dvec)
		cout << d << " ";
	cout << endl;
#pragma endregion
	system("pause");
	return 0;
}