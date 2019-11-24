#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

template<typename T>
auto Sum(T beg, T end) ->decltype(*beg)
{
	auto sum = *beg;
	++beg;
	while (beg != end)
	{
		sum += *beg;
		++beg;
	}
	return sum;
}
int main()
{
	int a[] = { 0,1,2,3,4,5,6 };
	double d[] = { 2.5,36.6,56.8,96.4 };
	string s[] = { "a","an","the","hhh" };
	vector<int> iv(a, end(a));
    vector<double> dv(d, end(d));
	list<string> sl(s, end(s));
	auto iret = Sum(iv.begin(), iv.end());
	auto dret = Sum(dv.begin(), dv.end());

#error return value error
	auto sret = Sum(sl.begin(), sl.end());

	cout << iret << endl;
	cout << dret << endl;
	cout << sret << endl;
	system("pause");
	return 0;
}