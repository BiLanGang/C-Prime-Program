#include<iostream>
#include<string>
using namespace std;
class Quote
{
public:
	Quote() = default;
	Quote(const string &book, double sales_price) :
		bookNo(book), price(sales_price) {}
	string isbn() const { return bookNo; }
	virtual double net_price(size_t n) const
	{
		return n * price;
	}
	virtual ~Quote() = default;
	virtual void debug() const;
private:
	string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote :public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double price, size_t n, double disc) :
		Quote(book, price), min_qty(n), discount(disc) {}
	double net_price(size_t n) const override;
	void debug() const override;
private:
	size_t min_qty = 0;//享受折扣的最低购买量
	double discount = 0.0;//折扣
};

class New_disc :public Quote
{
public:
	New_disc() = default;
	New_disc(const string&book, double price, size_t n, double disc) :
		Quote(book, price), max_qty(n), discount(disc) {}
	double net_price(size_t n) const override;
	void debug() const override;
private:
	size_t max_qty = 0;//限时折扣购买上限
	double discount = 0.0;//折扣
};

double print_total(ostream &os, const Quote &item, size_t n)
{
	auto ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
	return ret;
}

double Bulk_quote::net_price(size_t n) const
{
	if (n >= min_qty)
		return n * discount*price;
	else
		return n * price;
}

void Bulk_quote::debug() const
{
	cout << "This is class Bulk_quote." << endl;
	cout << "price: " << price << endl;
	cout << "min_qty: " << min_qty << " " << "discount: " << discount << endl;
}

double New_disc::net_price(size_t n) const
{

	if (n <= max_qty)
		return n * discount*price;
	else
		return (discount*max_qty*price) + ((n - max_qty)*price);
}

void New_disc::debug() const
{
	cout << "This is class New_disc." << endl;
	cout << "price: " << price << endl;
	cout << "Max_qty: " << max_qty << " " << "discount: " << discount << endl;
}

void Quote::debug() const
{
	cout << "This is class Quote." << endl;
	cout << "ISBN: " << bookNo << " " << "price: " << price << endl;
}

int main()
{
	Quote item1("Jane.eyer", 25.2);
	Bulk_quote item2("Jane.eyer", 25.2, 5,0.8);
	New_disc item3("Jane.eyer", 25.2, 5,0.8);
	item1.debug();
	item2.debug();
	item3.debug();
	system("pause");
	return 0;
	
}