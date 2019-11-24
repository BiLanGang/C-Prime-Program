#include"Sales_data.h"
#include<iostream>
Sales_data& Sales_data::combine(const Sales_data&rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
void Sales_data::print()
{
	std::cout << "ISBN��" << bookNo << std::endl;
	std::cout << "������" << units_sold << std::endl;
	std::cout << "ƽ�����ۣ�" << avg_price() << std::endl;
	std::cout << "�����۶" << revenue << std::endl;
}