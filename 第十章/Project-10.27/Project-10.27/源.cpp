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
	// back_inserter �����������������һ������������һ������������ʵ����������������Ԫ��
	unique_copy(iv.begin(), iv.end(), back_inserter(il));
	for (auto i : il)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}