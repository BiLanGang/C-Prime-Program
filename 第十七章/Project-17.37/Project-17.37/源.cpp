#include<iostream>
#include<string>

using namespace std;

int main()
{
#ifdef DEBUG
	/* Ê¹ÓÃ peek º¯Êý */
	char ch;
	char temp;
	while (cin >> ch)
	{
		temp = cin.peek();
		cout << temp;
	}
#endif // DEBUG

#ifndef test
	int ch;
	while ((ch=cin.get())!=EOF )
	{
		cout.put(ch);
	}
#endif // !test

	
	system("pause");
	return 0;
}