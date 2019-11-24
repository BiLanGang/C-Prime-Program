#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	const char* a = "aaa";
	const char* b = "bbb";
	char* ans = new char[strlen(a) + strlen(b) + 1];
	strcpy(ans, a);
	strcat(ans, b);
	cout << string(ans) << endl;
	const string s1 = "jfsd";
	const string s2 = "jsdfsd";
	string res = s1 + s2;
	cout << res << endl;
	delete[] ans;
	system("pause");
	return 0;
}