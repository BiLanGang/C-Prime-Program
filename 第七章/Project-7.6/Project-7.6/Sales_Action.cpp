#include"Sales_data.h"
#include<iostream>
#include<string>
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
	std::cout << "ISBN：" << bookNo << std::endl;
	std::cout << "数量：" << units_sold << std::endl;
	std::cout << "平均单价：" << avg_price() << std::endl;
	std::cout << "总销售额：" << revenue << std::endl;
}
istream& Sales_data::read(istream &is)
{
	is >> this->bookNo >> this->units_sold >> price;
	revenue = units_sold * price;
	return is;
}
std::istream& read(std::istream &is, Sales_data &item)
{
	is >> item.bookNo >> item.units_sold >> item.price;
	item.revenue = item.price*item.units_sold;
	return is;
}
Sales_data Add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}