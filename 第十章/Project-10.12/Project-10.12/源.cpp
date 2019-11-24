#include"Sales_item.h"
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;
bool CompareIsbn(const Sales_item &item1, const Sales_item &item2)
{
	return item1.isbn() < item2.isbn();
}
int main()
{
	vector<Sales_item> vec;
	ifstream in("text.txt");
	if (in)
	{
		Sales_item item;
		while (in>>item)
			vec.push_back(item);
		//���� Sales_item ����
		//sort(begin(vec), end(vec), CompareIsbn);
		//10.17 ʹ��lambda���ʽ���� comareIsbn
		sort(begin(vec), end(vec),
			[](const Sales_item &item1, const Sales_item &item2)
		{return item1.isbn() < item2.isbn(); });
		for (const auto &item : vec)
			cout << item << endl;
	}
	else
		cerr << "��ʧ�ܣ�" << endl;
	system("pause");
	return 0;
}