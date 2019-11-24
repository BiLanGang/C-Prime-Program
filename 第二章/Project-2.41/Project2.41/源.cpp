#include"Sales_data.h"
#include<iostream>
using namespace std;
int main()
{
	Sales_data data1, data2;
	cout << "请输入第一笔交易：" << endl;
	cin >> data1.bookNo >> data1.units_sold >> data1.price;//输入信息
	data1.revenue = data1.units_sold*data1.price;//计算总收入
	cout << endl;
	cout << "请输入第二笔交易：" << endl;
	cin >> data2.bookNo >> data2.units_sold >> data2.price;
	data2.revenue = data2.units_sold*data2.price;
	cout << endl;
	if (data1.bookNo == data2.bookNo)
	{
		cout << "ISBN：" << data1.bookNo << endl;
		cout << "销售量：" << data1.units_sold+data2.units_sold << endl;		
		cout << "销售额：" << data1.revenue+data2.revenue << endl;
		cout << "平均单价：" << (data1.revenue + data2.revenue)/(data1.units_sold + data2.units_sold) << endl;
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