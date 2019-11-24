#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
#ifdef DEBUG
	bool bool_val = false;
	//将 true 和 false 输出为字符串
	cout << boolalpha << bool_val << noboolalpha;
	cout << endl;
	cout << false << endl;
	//输出整形数的进制前缀
	cout << showbase;
	cout << "dec: " << dec << 1024 << endl;//十进制，默认
	cout << "oct: " << oct << 1024 << endl;//八进制，前缀为 0
	cout << "hex: " << hex << 1024 << endl;//十六进制，前缀为 0x 或者 0X
	cout << noshowbase;
	//十六进制大写
	cout << "hex: " << uppercase << hex << 25536 << endl;
	cout << nouppercase;

	//打印默认精度：6位
	cout << "Precision: " << cout.precision() << ", Value: " << sqrt(2.0) << endl;
	cout.precision(12);//设置精度：12位，使用 IO 对象的成员
	cout << "Precision: " << cout.precision() << ", Value: " << sqrt(2.0) << endl;
	cout << setprecision(3);//设置精度：3位，使用流操纵符
	cout << "Precision: " << cout.precision() << ", Value: " << sqrt(2.0) << endl;

	//对非负数显示前导 +
	cout <<dec<< showpos << 12 << endl;

	//指定浮点数计数法
	cout << "default format: " << 100 * sqrt(2.0) << "\n"//默认
		<< "scentific: " << scientific << 100 * sqrt(2.0) << "\n"//科学计数法
		<< "fixed decimal: " << fixed << 100 * sqrt(2.0) << "\n"//定点十进制
		<< "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << "\n"//将浮点数输出为十六进制
		<< "use defaults: " << defaultfloat << 100 * sqrt(2.0) << "\n";//回复浮点数的十进制打印

	//强制打印小数点
	cout << 10.00 << endl;
	cout << showpoint << 10.0 << noshowpoint << endl;
#endif // DEBUG

	

	//输出补白
	int i = -16;
	double d = 3.14159;
	std::cout << "i: " << std::setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n";
	cout << left
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n"
	    << right;
	cout << right
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n";
	cout << internal
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n";
	cout << setfill('#')
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n"
		<< setfill(' ');

	//控制输入格式，使之能够读取空白符
	char ch;
	cin >> noskipws;
	while (cin >> ch)
	{
		cout << ch;
	}
	cin >> skipws;

	system("pause");
	return 0;
}