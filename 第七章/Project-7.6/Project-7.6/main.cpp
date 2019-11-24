#include"Sales_data.h"
int main()
{
#ifdef DEBUG
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
				total.print();
				total = trans;
			}
		}
		total.print();
	}
	else
		cerr << "No Data?£¡" << endl;

#endif // DEBUG

#ifdef debug
	/*
	7.11 ²âÊÔ
	*/
	Sales_data item("0-123-123456X"), item1("0-123-123456X", 5, 36.4);
	item.print();
	item1.print();
#endif // debug

#ifndef debug1
/*
7.13 ²âÊÔ
*/
	Sales_data item2;
	item2.read(cin);
	item2.print();
#endif // debug1

	system("pause");
	return 0;
}