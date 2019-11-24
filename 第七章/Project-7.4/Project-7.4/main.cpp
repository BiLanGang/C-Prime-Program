#include"Person.h"
#include<string>
int main()
{
	Person p("Tom","China");
	cout << "Name:" << p.GetName() << endl << "Address:" << p.GetAddr() << endl;
	system("pause");
	return 0;
}