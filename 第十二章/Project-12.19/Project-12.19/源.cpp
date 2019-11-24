#include<iostream>
#include<vector>
#include<initializer_list>
#include<memory>
#include<string>
#include <stdexcept> 
//#define DEBUG
using namespace std;
class StrBlobptr;
class StrBlob
{
	friend class StrBlobptr;
	StrBlobptr begin();
	StrBlobptr end(); 
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string& front();// 返回引用
	string& back();// 返回引用
	size_type Getcount() { return data.use_count(); }
	const string& front() const;
	const string& back() const;
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

class StrBlobptr
{
public:
	StrBlobptr() :curr(0) {}
	StrBlobptr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz) {}
	//检查使用 vector 是否安全以及 curr 是否在合法范围内
	string& deref() const;
	//前缀递增：返回递增后对象的引用
	StrBlobptr& incr(); 
private:
	//检查 curr 是否合法
	shared_ptr<vector<string>> check(size_t, const string &) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il))
{}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

string & StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
	// TODO: 在此处插入 return 语句
}

string & StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
	// TODO: 在此处插入 return 语句
}

const string & StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
	// TODO: 在此处插入 return 语句
}

const string & StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
	// TODO: 在此处插入 return 语句
}

void StrBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}

string & StrBlobptr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
	// TODO: 在此处插入 return 语句
}

StrBlobptr & StrBlobptr::incr()
{
	check(curr, "increment past end of StrBlobptr");
	++curr;
	return *this;
	// TODO: 在此处插入 return 语句
}

shared_ptr<vector<string>> StrBlobptr::check(size_t i, const string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlobptr");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}

StrBlobptr StrBlob::begin()
{
	 return StrBlobptr(*this); 
}

StrBlobptr StrBlob::end()
{
	auto ret = StrBlobptr(*this, data->size()); 
	return ret;
}

#ifndef DEBUG
// 主函数测试代码  12.20
int main()
{
	string line;
	StrBlob item; 
	while (getline(cin, line))
	{
		item.push_back(line);
	}
	StrBlobptr item2(item);
	try {
		while (1)
		{		
			cout << item2.deref() << endl;
			item2.incr();
	   }
	}
	catch (runtime_error err)
	{
		cerr << err.what() << endl;
		system("pause");
		return -1;
	}
	catch (out_of_range err)
	{
		cerr << err.what() << endl;
		system("pause");
		return -1;
	}
	system("pause");
	return 0;
}
#endif // !DEBUG