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
private:
	string bookNo;
protected:
	double price = 0.0;
};

class Disc_quote :public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const string & book, double price, size_t n, double disc) :
		Quote(book, price),quantity(n),discount(disc){}
	double net_price(size_t n) const = 0;//纯虚函数，含有次函数的类为抽象类，不能创建对象，只能用作基类继承
protected:
	size_t quantity = 0;
	double discount = 0.0;
};

class Bulk_quote :public Disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double price, size_t n, double disc) :
		Disc_quote(book,price,n,disc) {}
	double net_price(size_t n) const override;
};

double print_total(ostream &os, const Quote &item, size_t n)
{
	auto ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
	return ret;
}

double Bulk_quote::net_price(size_t n) const
{
	if (n >= quantity)
		return n * discount*price;
	else
		return n * price;
}

int main()
{
	//Disc_quote item; 抽象基类，只能用作基类，不能创建对象
	Bulk_quote item("Jane.eyer", 25.2, 5, 0.5);
	cout<<item.net_price(8)<<endl;
	system("pause");
	return 0;
}

