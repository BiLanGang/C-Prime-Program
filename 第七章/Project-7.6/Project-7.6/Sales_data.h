#pragma once
#include<iostream>
using namespace std;
struct Sales_data
{ 
#pragma region
	/*
	7.11   构造函数
	*/
	Sales_data() = default;
	Sales_data(const string &no):bookNo(no){}
	Sales_data(const string &no,unsigned num,double p):bookNo(no),units_sold(num),
		price(p),revenue(p*num){}
#pragma endregion

#pragma region
	/*
	7.13  带一个参数的read函数
	*/
	istream &read(istream &is);
#pragma endregion
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
	string isbn() { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	void print();	
};
Sales_data Add(const Sales_data& lhs, const Sales_data& rhs);
istream& read(istream &is, Sales_data &item);
