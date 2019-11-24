#include<iostream>
#include<string>
#include<set>
#include <memory>
#include<iterator>
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
double print_total(ostream &os, const Quote &item, size_t n)
{
	auto ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
	return ret;
}
class Basket//购物车
{
public:
	void add_item(const shared_ptr<Quote> &sales)
	{
		items.insert(sales);
	}
	void total_receipt(std::ostream&) const;     // 打印每本书的总价和购物篮中所有书的总价
private:
	static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
	{
		return lhs->isbn() < rhs->isbn();
	}
	// multiset保存多个报价，按照compare成员排序
	std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{ compare };
};

void Basket::total_receipt(std::ostream &os) const
{
	double sum = 0.0;

	for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
	{
		sum += print_total(os, **iter, items.count(*iter));
	}
	os << "Total Sale: " << sum << endl;
}

int main()
{
	shared_ptr<Quote> sq1(make_shared<Quote>("0-102-11X", 25.3)),
		sq2(make_shared<Quote>("0-102-12X", 53.6)),
		sq3(make_shared<Quote>("0-102-11X", 25.3));
	Basket item;
	item.add_item(sq1);
	item.add_item(sq2);
	item.add_item(sq3);
	item.total_receipt(cout);
	system("pause");
	return 0;
}