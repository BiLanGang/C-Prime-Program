#include<iostream>
#include"Sales_data.h"
using namespace std;
int main()
{
	Sales_data first,second;
	cout << "�������һ�ʽ��׼�¼��" << endl;
	cin >> first.bookNo >> first.units_sold >> first.price;
	first.revenue = first.price*first.units_sold;
	cout << endl;
	cout << "������ڶ��ʽ��׼�¼��" << endl;
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