#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//计算整数和
	vector<string> ivec = { "1","12","23","45" };
	int sum = 0;
	for (auto s : ivec)
	{
		sum += stoi(s);
	}
	cout << "sum= " << sum << endl;
	//计算浮点数和 
	vector<string> dvec = { "12.6","45.6","85.5","69.5" };
	double dsum = 0.0;
	for (auto d : dvec)
		dsum += stod(d);
	cout << "dsum= " << dsum << endl;
	system("pause");
		return 0;
}