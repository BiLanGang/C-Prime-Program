#pragma once
#include<string>
struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
	std::string isbn() { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	void print();
};

