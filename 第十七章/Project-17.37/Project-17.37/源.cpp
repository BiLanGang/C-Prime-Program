#include<iostream>
#include<string>

using namespace std;

int main()
{
#ifdef DEBUG
	/* ʹ�� peek ���� */
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