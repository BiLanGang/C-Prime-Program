#include<iostream>
#include<string>
using namespace std;
class Y;
class X {
public:
	X() = default;
	X(Y *y):point(y){}
	void display() { point->display(); }
private:
	Y *point=nullptr;
};
class Y {
public:
	Y() = default;
	Y(X x):item(x){}
	void display() { cout << "This is class Y" << endl; }
private:
	X item;
	
};
int main()
{
	X x;
	Y y(x);
	y.display();
	x.display();
	system("pause");
	return 0;
}