#include<iostream>
using namespace std;
int main()
{
	int lhs, rhs;
	cin >> lhs >> rhs;
	try
	{
		if (rhs == 0)
			throw - 1;//抛出一个整形异常
		else
			cout << lhs / rhs << endl;
	}
	catch (int i)//捕获异常
	{
		cout << "The divisor cannot be 0!" << endl;
		cout << "Whether to reenter the divisor?(Y/N)" << endl;
		char flag;
		cin >> flag;
		if (flag == 'Y')
		{
			cin >> rhs;
			cout << lhs / rhs << endl;
		}
	}
	system("pause");
	return 0;
}