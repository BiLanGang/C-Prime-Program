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

class Bulk_quote:public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book,double price,size_t n,double disc):
		Quote(book,price),min_qty(n),discount(disc){}
	double net_price(size_t n) const override;
private:
	size_t min_qty = 0;//享受折扣的最低购买量
	double discount = 0.0;//折扣
};

class New_disc:public Quote
{
public:
	New_disc() = default;
	New_disc(const string&book,double price,size_t n,double disc):
		Quote(book,price),max_qty(n),discount(disc){}
	double net_price(size_t n) const override;
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

double New_disc::net_price(size_t n) const
{
	
	if (n <= max_qty)
		return n * discount*price;
	else
		return (discount*max_qty*price) + ((n - max_qty)*price);
}

//主函数测试
int main()
{
	Quote book("Jane.eyre", 25.2);
	print_total(cout, book, 5);
	//15.6
	Bulk_quote item("Jane.eyre", 25.2, 5, 0.8);
	print_total(cout, item, 5);
	//15.7
	New_disc new_item("Jane.eyer", 25.2, 5, 0.8);
	print_total(cout, new_item, 7);
	system("pause");
	return 0;
}
