#include"Sales_data.h"
#include<iostream>
using namespace std;
int main()
{
	Sales_data data1, data2;
	cout << "�������һ�ʽ��ף�" << endl;
	cin >> data1.bookNo >> data1.units_sold >> data1.price;//������Ϣ
	data1.revenue = data1.units_sold*data1.price;//����������
	cout << endl;
	cout << "������ڶ��ʽ��ף�" << endl;
	cin >> data2.bookNo >> data2.units_sold >> data2.price;
	data2.revenue = data2.units_sold*data2.price;
	cout << endl;
	if (data1.bookNo == data2.bookNo)
	{
		cout << "ISBN��" << data1.bookNo << endl;
		cout << "��������" << data1.units_sold+data2.units_sold << endl;		
		cout << "���۶" << data1.revenue+data2.revenue << endl;
		cout << "ƽ�����ۣ�" << (data1.revenue + data2.revenue)/(data1.units_sold + data2.units_sold) << endl;
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