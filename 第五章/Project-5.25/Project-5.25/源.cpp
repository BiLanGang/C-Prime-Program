#include<iostream>
using namespace std;
int main()
{
	int lhs, rhs;
	cin >> lhs >> rhs;
	try
	{
		if (rhs == 0)
			throw - 1;//�׳�һ�������쳣
		else
			cout << lhs / rhs << endl;
	}
	catch (int i)//�����쳣
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