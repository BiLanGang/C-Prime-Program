#include<iostream>
using namespace std;
void f()
{
	cout << "The function f has no arguments" << endl;
}
void f(int)
{
	cout << "The function f has an intger arguments" << endl;
}
void f(int, int)
{
	cout << "The function f has two intger arguments" << endl;
}
void f(double, double = 3.14)
{
	cout << "The function f has two double arguments,and one arguments is default" << endl;
}
int main()
{
	//f(2.56, 42);//有二义性
	f(2.56);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	system("pause");
	return 0;

}