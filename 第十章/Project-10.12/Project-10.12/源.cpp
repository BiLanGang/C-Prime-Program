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
		//排序 Sales_item 对象
		//sort(begin(vec), end(vec), CompareIsbn);
		//10.17 使用lambda表达式代替 comareIsbn
		sort(begin(vec), end(vec),
			[](const Sales_item &item1, const Sales_item &item2)
		{return item1.isbn() < item2.isbn(); });
		for (const auto &item : vec)
			cout << item << endl;
	}
	else
		cerr << "打开失败！" << endl;
	system("pause");
	return 0;
}