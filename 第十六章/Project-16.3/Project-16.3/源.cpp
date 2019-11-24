#include"Sales_data.h"
using namespace std;
int main()
{
	Sales_data item1, item2;
	cin >> item1;
	cin >> item2;
	if (compareIsbn(item1, item2))
		cout << "The min is item1" << endl;
	else
		cout << "The min is item2" << endl;
	system("pause");
	return 0;
}