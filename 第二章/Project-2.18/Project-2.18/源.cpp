#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 9;
	int *p;
	p = &a;//ָ��ָ��a
	cout << *p << endl;
	p = &b;//ָ��ָ��b
	cout << *p << endl;
	*p = 6;//�޸�ָ����ָ���ֵ
	cout << *p << endl;
	system("pause");
	return 0;
}