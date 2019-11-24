#include "Sales_data.h"

Sales_data::Sales_data(std::istream & is)
{
	/*double price = 0.0;
	is >> bookNo >> units_sold >> price;
	revenue = units_sold * price;*/
	read(is, *this);
}

Sales_data & Sales_data::combine(const Sales_data &item)
{
	units_sold += item.units_sold;
	revenue += item.revenue;
	return *this;
	// TODO: 在此处插入 return 语句
}

void Sales_data::print(std::ostream & os)
{
	os << bookNo << " " << units_sold << " " << revenue << " " << avg_price();
}
std::istream& read(std::istream &is, Sales_data &item)
{
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

