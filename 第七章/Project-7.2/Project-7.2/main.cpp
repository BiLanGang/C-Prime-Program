#include<iostream>
#include"Sales_data.h"
using namespace std;
int main()
{
	Sales_data first,second;
	cout << "请输入第一笔交易记录：" << endl;
	cin >> first.bookNo >> first.units_sold >> first.price;
	first.revenue = first.price*first.units_sold;
	cout << endl;
	cout << "请输入第二笔交易记录：" << endl;
	cin >> second.bookNo >> second.units_sold >> second.price;
	second.revenue = second.price*second.units_sold;
	cout << endl;
	if (first.isbn() == second.isbn())
	{
		first.combine(second);
		first.print();
		system("pause");
		return 0;
	}
	else
	{
		cerr << "Data must refer to same ISBN" << endl;
		system("pause");
		return -1;
	}
}