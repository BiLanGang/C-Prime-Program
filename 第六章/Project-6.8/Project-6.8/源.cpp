#include<iostream>
#include"Chapter6.h"
using namespace std;
/*函数调用以及分离式编译*/
int main()
{
	int a = 3, b = -9;
	cout << a << " 的阶乘为：" << fact(a) << endl;
	cout << b << " 的绝对值为：" << abs(b) << endl;
	system("pause");
	return 0;
}