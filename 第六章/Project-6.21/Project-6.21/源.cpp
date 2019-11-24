#include<iostream>
using namespace std;
/*6.21，接受一个int 和一个int指针，比较int的值和指针所指向的值，返回较大的*/
int Max(int a, int *p)
{
	return a > *p ? a : *p;
}
/*6.22,交换指针,使用指针的引用*/
void swap(int *&p, int *&q)
{
	int *t;
	t = p;
	p = q;
	q = t;
}
int main()
{
	int a = 1, b = 2;
	int *p = &a, *q = &b;
	cout << "a，b中较大的数为：" << Max(a, q) << endl;
	cout << "*p= " << *p << endl;
	cout << "*q= " << *q << endl;
	swap(p, q);
	cout << "*p= " << *p << endl;
	cout << "*q= " << *q << endl;
	system("pause");
	return 0;
}