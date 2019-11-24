#pragma once
#include <iostream>
#include <string>
class Sales_item
{
	friend std::istream& operator>>(std::istream&, Sales_item&);
	friend std::ostream& operator<<(std::ostream&, const Sales_item&);
public:
	std::string isbn() const { return bookNo; }
	double avg_price() const;
private:
	std::string bookNo;      // implicitly initialized to the empty string
	unsigned units_sold = 0; // explicitly initialized
	double revenue = 0.0;
	
};
std::istream&
operator>>(std::istream& in, Sales_item& s)
{
	double price;
	in >> s.bookNo >> s.units_sold >> price;
	// check that the inputs succeeded
	if (in)
		s.revenue = s.units_sold * price;
	else
		s = Sales_item();  // input failed: reset object to default state
	return in;
}

std::ostream&
operator<<(std::ostream& out, const Sales_item& s)
{
	out << s.isbn() << " " << s.units_sold << " "
		<< s.revenue << " " << s.avg_price();
	return out;
}
double Sales_item::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}