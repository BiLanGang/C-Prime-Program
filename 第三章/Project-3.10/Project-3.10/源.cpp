#include<iostream>
#include<string>
using namespace std;
/*ȥ���ַ����еı��������*/
int main()
{
	string temp;
	cin >> temp;
	for (auto c : temp)
		if (!ispunct(c))
			cout << c;
	cout << endl;
	system("pause");
	return 0;
}