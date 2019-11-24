#include<iostream>
#include<string>
using namespace std;
/*去除字符串中的标点符号输出*/
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