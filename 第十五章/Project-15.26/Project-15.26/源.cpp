#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
class Quote
{
public:
	Quote() = default;//默认构造函数
	Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}//带参数构造函数
	std::string isbn() const { return bookNo; }
	Quote(Quote& q) : bookNo(q.bookNo), price(q.price)//拷贝构造函数
	{
		std::cout << "Quote copy construction." << std::endl;
	}

	Quote& operator=(Quote& rhs) noexcept//重载赋值运算符
	{
		this->bookNo = rhs.bookNo;
		this->price = rhs.price;
		std::cout << "Quote assignment construction." << std::endl;
		return *this;
	}

	Quote(Quote&& q) noexcept : bookNo(std::move(q.bookNo)), price(std::move(q.price))//移动赋值构造函数
	{
		std::cout << "Quote move construction." << std::endl;
	}

	Quote& operator=(Quote&& q) //移动赋值运算符
	{
		std::cout << "Quote move assignment." << std::endl;
		*this=q;
		return *this;
	}
	// return the total sales of given number books.
	// the derived class need overwrite the method of calculate the discount.
	virtual double net_price(std::size_t n) const { return n * price; }
	virtual ~Quote() = default;
private:
	std::string bookNo;     // isbn number
protected:
	double price = 0.0;     // origin price
};

class Disc_quote : public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const std::string& book, double sales_price, std::size_t qty, double disc) : Quote(book, sales_price), quantity(qty), discount(disc) {}
	Disc_quote(Disc_quote& dq) : Quote(dq)
	{
		quantity = dq.quantity;
		discount = dq.discount;
		std::cout << "Disc_quote copy construction." << std::endl;
	}
	Disc_quote& operator=(Disc_quote& dq)
	{
		Quote::operator=(dq);
		quantity = dq.quantity;
		discount = dq.discount;
		std::cout << "Disc_quote assignment construction." << std::endl;
		return *this;
	}
	Disc_quote(Disc_quote&& dq) : Quote(dq), quantity(std::move(dq.quantity)), discount(std::move(dq.discount))
	{
		std::cout << "Disc_quote move construction." << std::endl;
	}
	Disc_quote& operator=(Disc_quote&& d)
	{
		cout << "Disc_quote move assignment." << endl;
		*this = d;
		return *this;
	}
	virtual double net_price(std::size_t n) const override { return 0.0; }
protected:
	std::size_t quantity;
	double discount;
};
/* 15.27*/
class Bulk_quote : public Disc_quote
{
public:
	Bulk_quote()
	{
		cout << "Bulk_quote default construction." << endl;
	}
	using Disc_quote::Disc_quote;
	Bulk_quote(const std::string& b, double p, std::size_t q, double disc) :
		Disc_quote(b, p, q, disc) { }
	Bulk_quote(Bulk_quote& bq) : Disc_quote(bq)
	{
		cout << "Bulk_quote copy construction." << endl;
	}
	Bulk_quote& operator=(Bulk_quote& rhs)
	{
		Disc_quote::operator=(rhs);
		cout << "Bulk_quote assigned construction." << endl;
		return *this;
	}
	Bulk_quote(Bulk_quote&& bq) : Disc_quote(std::move(bq))
	{
		cout << "Bulk_quote move construction." << endl;
	}
	Bulk_quote& operator=(Bulk_quote &&b)
	{
		cout << "Bulk_quote move assigned." << endl;
		*this = b;
		return *this;
	}
	double net_price(std::size_t n) const override 
	{
		if (n <= quantity)
			return n * discount*price;
		else
			return quantity * discount*price + (n - quantity)*price;
	}
};

int main()
{
#ifdef DEBUG
	/* 15.26-15.27 测试代码 */
	Quote item1("Jane.eyer", 25.2);
	Quote item2(item1);//拷贝构造
	Quote item3;
	item3 = item2;//赋值
	cout << item3.isbn() << endl;
	Quote item4;
	item4 = Quote("wind", 56.3);//移动赋值，首先调用移动赋值运算符，然后调用移动构造函数
#endif // DEBUG

#ifdef DEBUG
/* 15.28*/
	vector<Quote> qvec;
	qvec.push_back(Bulk_quote("wind", 25.3, 5, 0.8));
	qvec.push_back(Bulk_quote("Jane.eyer", 36.6, 5, 0.85));
	double total = 0.0;
	for (const auto &q : qvec)
	{
		total += q.net_price(8);
	}
	cout << total << endl;
#endif // DEBUG

#ifndef test
	/*15.29*/
	vector<shared_ptr<Quote>> vec;
	vec.push_back(make_shared<Bulk_quote>("wind", 25.3, 5, 0.8));
	vec.push_back(make_shared<Bulk_quote>("Jane.eyer", 36.6, 5, 0.85));
	double total = 0.0;
	for (const auto &v : vec)
	{
		total += v->net_price(8);
	}
	cout << total << endl;
	/*
使用 vector<Quote> 和使用 vector<shared_ptr<Quote>> 结果不同。
因为当传入 Bulk_quote 对象后（后者传入智能指针），在调用 net_price 函数时，前者调用的是
基类 Quote 的 net_price 函数；而后者调用的是 Bulk_quote 重写之后的函数。
*/
#endif // !test

	system("pause");
	return 0;

}

