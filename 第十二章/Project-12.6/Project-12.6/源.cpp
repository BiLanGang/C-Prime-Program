#include<vector>
#include<iostream>
#include<memory>
using namespace std;
#ifdef DEBUG
vector<int>* Getptr()
{
	return new vector<int>;
}
void input(vector<int> *p)
{
	int i;
	while (cin >> i)
		p->push_back(i);
}
void print(vector<int> *p)
{
	for (const auto i : *p)
	{
		cout << i << " ";
	}
	cout << endl;
}

#endif // DEBUG

#ifndef debug
//12.7
shared_ptr<vector<int>> Getptr()
{
	return make_shared<vector<int>>();
}
void input(shared_ptr<vector<int>> p)
{
	int i;
	while (cin >> i)
	{
		p->push_back(i);
	}
}
void print(shared_ptr<vector<int>> p)
{
	for (const auto i : (*p))
	{
		cout << i << " ";
	}
	cout << endl;
}
#endif // !debug



int main()
{
	auto p = Getptr();
	input(p);
	print(p);
	//delete(p);
	system("pause");
	return 0;
}