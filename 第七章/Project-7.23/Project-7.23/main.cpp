#include"Screen.h"
#include<iostream>
using namespace std;
int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
	system("pause");
	return 0;
}