#include<vector>
#include<list>
#include<iostream>
using namespace std;
int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> ivec(ia, end(ia));
	list<int> ilst(ia, end(ia));
	for (auto it = ivec.begin(); it != ivec.end();)//�� vector ��ɾ��ż��Ԫ��
	{
		if (*it % 2)
			++it ;
		else
			it = ivec.erase(it);
	}
	for (auto it = ilst.begin(); it != ilst.end();)//�� list ��ɾ������Ԫ��
	{
		if (*it % 2)
			it = ilst.erase(it);
		else
			++it;
	}
	for (const auto iv : ivec)
		cout << iv << " ";
	cout << endl;
	for (const auto il : ilst)
		cout << il << " ";
	cout << endl;
	system("pause");
	return 0;
}