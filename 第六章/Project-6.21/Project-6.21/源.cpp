#include<iostream>
using namespace std;
/*6.21������һ��int ��һ��intָ�룬�Ƚ�int��ֵ��ָ����ָ���ֵ�����ؽϴ��*/
int Max(int a, int *p)
{
	return a > *p ? a : *p;
}
/*6.22,����ָ��,ʹ��ָ�������*/
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
	cout << "a��b�нϴ����Ϊ��" << Max(a, q) << endl;
	cout << "*p= " << *p << endl;
	cout << "*q= " << *q << endl;
	swap(p, q);
	cout << "*p= " << *p << endl;
	cout << "*q= " << *q << endl;
	system("pause");
	return 0;
}