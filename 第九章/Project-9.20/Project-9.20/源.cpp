#include<deque>
#include<list>
#include<iostream>
using namespace std;
int main()
{
	list<int> il = { 0,1,2,3,4,5,6,7,8,9 };
	deque<int> odd, even;
	for (auto i : il)
		if (i % 2)
			even.push_back(i);
		else
			odd.push_back(i);
	for (auto o : odd)
		cout << o << " ";
	cout << endl;
	for (auto e : even)
		cout << e << " ";
	cout << endl;
	system("pause");
	return 0;

}