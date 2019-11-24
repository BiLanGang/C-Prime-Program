#include<iostream>
#include<vector>
using namespace std;
/*数组初始化 vector 对象*/
int main()
{
	int array[] = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> ivec1(begin(array),end(array));
	for (auto i : ivec1)
		cout << i << " ";
	cout << endl;
	vector<int> ivec2(array, array + 4);
	for (auto i : ivec2)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}