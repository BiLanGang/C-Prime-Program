#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "Hello";
	cout << "ԭ�ַ�����" << str << endl;
	//3.6
	for (auto &c : str)
		c = 'X';
	cout <<"�޸ĺ���ַ�����"<< str << endl;
	//3.7
	for (char &c : str)
		c = 'X';
	cout << "�޸ĺ���ַ�����" << str << endl;
	//3.8
	for (decltype(str.size()) i = 0; i < str.size(); i++)
		str[i] = 'X';
	cout << "�޸ĺ���ַ�����" << str << endl;
	decltype(str.size()) j = 0;
	while (str[j] != '\0')
	{
		str[j] = 'X';
		j++;
	}
	cout << "�޸ĺ���ַ�����" << str << endl;
	system("pause");
	return 0;
}