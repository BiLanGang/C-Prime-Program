#include<vector>
#include<list>
#include<iostream>
using namespace std;
//�Ƚ��� vector<int> �Ƿ���� 9.15
bool isEqual(vector<int> &ivec1, vector<int> &ivec2)
{
	if (ivec1 == ivec2)
		return true;
	else
		return false;
}
//�Ƚ�һ�� list<int> �е�Ԫ�غ�һ�� vector<int> �е�Ԫ�� 9.16
bool isEqual(vector<int> &ivec1, list<int> &ilst)
{
	vector<int> ivec(ilst.begin(), ilst.end());
	if (ivec1 == ivec)
		return true;
	else
		return false;
}
int main()
{
	vector<int> ivec1(10, 5);
	vector<int> ivec2(10, 5);
	list<int> ilst = { 1,2,3,4,5,6 };
	if (isEqual(ivec1, ivec2))
		cout << "ivec1 and ivec2 are equal" << endl;
	else
		cerr << "ivec1 and ivec2 are not equal" << endl;
	if (isEqual(ivec1, ilst))
		cout << "ivec1 and ilst are equal" << endl;
	else
		cerr << "ivec1 and ilst are not equal" << endl;
	system("pause");
	return 0;
}