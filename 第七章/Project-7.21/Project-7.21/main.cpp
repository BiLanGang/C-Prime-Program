#include<iostream>
#include"Sales_data.h"
using namespace std;
int main()
{
	Sales_data total;
	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				total.print(cout);
				total = trans;
			}
		}
		total.print(cout);
	}
	else
		cerr << "No Data?��" << endl;
	system("pause");
	return 0;
}