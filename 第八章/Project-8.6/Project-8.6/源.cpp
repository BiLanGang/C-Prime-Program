#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Sales_data {
public:
	Sales_data() {}
	Sales_data(std::string bN, unsigned sold, double reven) :bookNo(bN), units_sold(sold), revenue(reven) {}
	std::string isbn() const { return this->bookNo; }
	Sales_data& combine(const Sales_data &rhs) {
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}
	double avg_price() const {
		if (units_sold) {
			return revenue / units_sold;
		}
		else return 0;
	}
	Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
		Sales_data sum = lhs;
		sum.combine(rhs);
		return sum;
	}
public:
	std::string bookNo; //ÊéºÅ
	unsigned units_sold;
	double revenue;
};

istream &read(istream &is, Sales_data &item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

ostream &print(ostream &os, const Sales_data &item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price() << "\n";
	return os;
}


int main(int argc, char **argv)
{
	cout << argv[0] << endl;
	ifstream input(argv[1]);
	ofstream output(argv[2]);
	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;

		while (read(input, trans))
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(output, total);
				cout << endl;
				total = trans;
			}
		}
		print(output, total);
		cout << endl;
		return 0;
	}
	else
	{
		cerr << "No data?!" << std::endl;
		return -1;  // indicate failure
	}
	
}