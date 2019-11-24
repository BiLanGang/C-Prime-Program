#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int v = 5;
	//lambda 递减捕获的变量
	auto f = [&v]()->bool {
		if (v <= 0)
			return false;
		else
		{
			--v;
			return true;
		}
	};
	while (f());
	cout << v << endl;
	system("pause");
	return 0;
}