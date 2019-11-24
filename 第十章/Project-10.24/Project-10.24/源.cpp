#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<functional>
using namespace std;
bool check_size(string &s, int i)
{
	return s.size() < i;
}
int main()
{
	vector<int> ivec = { 5,9,6,8,5,3,2,4 };
	string s("hello");
	// ²ÎÊý°ó¶¨ 
	auto it = find_if(begin(ivec), end(ivec), bind(check_size, s,placeholders::_1));
	cout << *it << endl;
	system("pause");
	return 0;
}