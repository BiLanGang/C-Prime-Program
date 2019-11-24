#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<initializer_list>
using namespace std;
template<typename T>
class Blob
{
public:
	typedef T value_type;
	typedef typename std::vector<T>::size_type size_type;
	Blob():data(make_shared<vector<T>>()) {}
	Blob(initializer_list<T> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const T &t) { data->push_back(t); }
	void push_back(T &&t) { data->push_back(std::move(t)); }
	void pop_back();
	T &back();
	T& operator[](size_type i);
private:
	shared_ptr<vector<T>> data;
	void check(size_type i, const string msg) const
	{
		if (i >= data->size())
			throw out_of_range(msg);
	}
};

template<typename T>
Blob<T>::Blob(initializer_list<T> il):data(make_shared<vector<T>>(il))
{}

template<typename T>
void Blob<T>::pop_back()
{
	check(0, "pop_back on empty Blob");
	data->pop_back();
}

template<typename T>
T & Blob<T>::back()
{
	check(0, "back on empty Blob");
	return data->back();
	// TODO: 在此处插入 return 语句
}

template<typename T>
T & Blob<T>::operator[](size_type i)
{
	check(i, "Index Out of Bounds");
	return (*data)[i];
	// TODO: 在此处插入 return 语句
}

template<typename T>
class  BlobPtr
{
public:
	 BlobPtr():curr(0) {}
	 BlobPtr(Blob<T> &a,size_t sz=0):wptr(a.data),curr(sz) {}
	 T& operator*() const
	 {
		 auto p=check(curr,"derefereence past end");
		 return (*p)[cerr];
	 }
	 BlobPtr& operator++(int);
	 BlobPtr& operator--(int);

private:
	shared_ptr<vector<T>> check(size_t, const string&) const;
	weak_ptr<vector<T>> wptr;
	size_t curr;
};

template<typename T>
BlobPtr<T> & BlobPtr<T>::operator++(int)
{
	BlobPtr ret = *this;
	++*this;
	return ret;
	// TODO: 在此处插入 return 语句
}

template<typename T>
BlobPtr<T> & BlobPtr<T>::operator--(int)
{
	BlobPtr ret = *this;
	++*this;
	return ret;
	// TODO: 在此处插入 return 语句
}

template<typename T>
shared_ptr<vector<T>> BlobPtr<T>::check(size_t n, const string &msg) const
{
	if (n >= wptr->size())
		throw out_of_range(msg);
	else
		return wptr;
}

int main()
{
	Blob<int> ia;
	Blob<int> ia2 = { 0,1,2,3,4 };
	try 
	{
		ia.push_back(5);
	}
	catch (out_of_range err)
	{
		cerr << err.what() << endl;
	}
	system("pause");
	return 0;
}