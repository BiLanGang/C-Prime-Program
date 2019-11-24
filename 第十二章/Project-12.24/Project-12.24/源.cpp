#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	char *p = new char[s.size() + 1];
	strcpy(p, s.c_str());
	cout << p << endl;
	delete[]p;
	system("pause");
	return 0;
}