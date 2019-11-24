#include<iostream>
#include<string>
using namespace std;
/*指针交换两整数值*/
void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
/*6.12改动，引用交换*/
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
	cout << "a，b交换之后：" << "a= " << a << ";" << "b= " << b << endl;
	swap(a, b);
	cout << "a，b交换之后：" << "a= " << a << ";" << "b= " << b << endl;
	system("pause");
	return 0;
}