#pragma once
#include<string>
class Sales_data
{
public:
	Sales_data() = default;
	Sales_data(const std::string &no) :bookNo(no) {}
	Sales_data(const std::string &no, unsigned num, double p) :bookNo(no), units_sold(num),
		 revenue(p*num) {}
	Sales_data(std::istream &is);
	std::string isbn() { return bookNo; }
	Sales_data& combine(const Sales_data&);
	void print(std::ostream &os);
	friend std::istream& read(std::istream &is, Sales_data &item);
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue = 0.0;
	double avg_price() const {
		return revenue ? revenue / units_sold : 0;
	}
};

