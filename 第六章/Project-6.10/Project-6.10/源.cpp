#include<iostream>
#include<string>
using namespace std;
/*ָ�뽻��������ֵ*/
void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
/*6.12�Ķ������ý���*/
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{

	int a = 2, b = 3;
	int *p = &a, *q = &b;
	swap(p, q);
	cout << "a��b����֮��" << "a= " << a << ";" << "b= " << b << endl;
	swap(a, b);
	cout << "a��b����֮��" << "a= " << a << ";" << "b= " << b << endl;
	system("pause");
	return 0;
}