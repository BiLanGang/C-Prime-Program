#include<iostream>
#include<vector>
#include<initializer_list>
#include<memory>
#include<string>
#include <stdexcept> 
using namespace std;
class StrBlob
{
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

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il))
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
#ifndef DEBUG
// 主函数测试代码
int main()
{
	StrBlob p1;
	try {		
		StrBlob p2 = { "I","am","Student" };
		p1 = p2;
		cout << p1.front() << endl;
		cout << p2.front() << endl;
		p1.push_back("university");
		cout << p2.back() << endl;	
		cout << p1.Getcount() << endl;
		cout << p2.Getcount() << endl;
	}// p2 对象销毁
	catch(out_of_range err)
	{
		cerr << err.what() << endl;
	}
	cout << p1.Getcount() << endl;
	StrBlob p3 = p1;
	cout << p1.Getcount() << endl;
	cout << p3.Getcount() << endl;
	cout << p3.back() << endl;
	system("pause");
	return 0;
}
#endif // !DEBUG


