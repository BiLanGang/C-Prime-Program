#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 9;
	int *p;
	p = &a;//指针指向a
	cout << *p << endl;
	p = &b;//指针指向b
	cout << *p << endl;
	*p = 6;//修改指针所指向的值
	cout << *p << endl;
	system("pause");
	return 0;
}