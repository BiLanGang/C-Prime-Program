#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<iterator>
using namespace std;
int main()
{
	vector<int> iv = { 1,2,3,4,5,6,7,8,9 };
	vector<int> iv1, iv2;
	list<int> il;
	
	//back_inserter ����push_back
	copy(begin(iv), end(iv), back_inserter(iv1));
	//front_inserter ����push_front
	copy(begin(iv), end(iv), front_inserter(il));
	//inserter ����inserter
	copy(begin(iv), end(iv), inserter(iv2, iv2.end()));
	for (auto i : iv1)
		cout << i << " ";
	cout << endl;
	for (auto i : iv2)
		cout << i << " ";
	cout << endl;
	for (auto i : il)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
	
}