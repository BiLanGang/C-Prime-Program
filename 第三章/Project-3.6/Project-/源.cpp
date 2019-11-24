#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "Hello";
	cout << "原字符串：" << str << endl;
	//3.6
	for (auto &c : str)
		c = 'X';
	cout <<"修改后的字符串："<< str << endl;
	//3.7
	for (char &c : str)
		c = 'X';
	cout << "修改后的字符串：" << str << endl;
	//3.8
	for (decltype(str.size()) i = 0; i < str.size(); i++)
		str[i] = 'X';
	cout << "修改后的字符串：" << str << endl;
	decltype(str.size()) j = 0;
	while (str[j] != '\0')
	{
		str[j] = 'X';
		j++;
	}
	cout << "修改后的字符串：" << str << endl;
	system("pause");
	return 0;
}