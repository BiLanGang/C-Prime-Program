#include<iostream>
#include<utility>
#include<string>
#include<algorithm>
#define PI 3.1415926
using namespace std;
class shape
{
public:
	shape() = default;
	virtual double area() const=0;
	virtual double perimeter() const=0;
	virtual ~shape() = default;
};

class circle:public shape
{
public:
	circle() = default;
	circle(double r):radius(r){}
	double area() const override { return PI * radius*radius; }
	double perimeter() const override final{ return PI * 2 * radius; }
protected:
	double radius;
};

class boll :public circle
{
public:
	boll() = default;
	boll(double r):circle(r){}
	double area() const override { return 4 * PI*radius*radius; }
	double volume() const { return (4 / 3)*PI*radius*radius*radius; }
};
int main()
{
	circle shap1(3);
	cout << shap1.area() << endl;
	cout << shap1.perimeter() << endl;
	boll shap2(4);
	cout << shap2.area() << endl;
	cout << shap2.volume() << endl;
	system("pause");
	return 0;
}