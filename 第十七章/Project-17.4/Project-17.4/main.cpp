#include"Sales_data.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<numeric>
#include<fstream>
using namespace std;
/* 在所有的连锁书店中查询一本书的销售情况 */
using matches = tuple<vector<Sales_data>::size_type, vector<Sales_data>::const_iterator,
	vector<Sales_data>::const_iterator>;
vector<matches> findbook(const vector<vector<Sales_data>> &files, const string &book)
{
	vector<matches> ret;
	for (auto it = files.cbegin(); it != files.cend(); ++it)
	{
		auto found = equal_range(it->cbegin(), it->cend(), book, compareIsbn);
		/* equal_range 时标准库的一种二分查找算法，试图在已排序的[first,last)中寻找value，
		它返回一对迭代器i和j（即返回一个 pair），其中i是在不破坏次序的前提下，
		value可插入的第一个位置（亦即lower_bound），
		j则是在不破坏次序的前提下，value可插入的最后一个位置（亦即upper_bound），
		因此，[i,j)内的每个元素都等同于value，而且[i,j)是[first,last)之中符合此一性质的最大子区间 */
		if (found.first != found.second)
			ret.push_back(make_tuple(it - files.cbegin(), found.first, found.second));
	}
	return ret;
}

void ReportResults(istream &in, ostream &os, const vector<vector<Sales_data>> &files)
{
	cout << "请输入待查询书籍书号（ISBN）：";
	string s;
	while (in>>s)
	{
		auto trans = findbook(files, s);
		if (trans.empty())
		{
			cout << s << " not found in any stores" << endl;
			continue;
		}
		for (const auto &store : trans)
		{
			os << "store " << get<0>(store) << " sales:"
				<< accumulate(get<1>(store), get<2>(store), Sales_data(s)) << endl;
		}
	}
}

int main()
{
	string book;//待查询书籍
	vector<vector<Sales_data>> item = {
		{{"0-123-X",5,25.3},{"0-124-X",6,30.2},{"0-125-X",10,50}},
	{{"0-123-X",5,25.3},{"0-124-X",6,30.2},{"0-125-X",10,50}},
	{{"0-123-X",5,25.3},{"0-124-X",6,30.2},{"0-125-X",10,50}},
	{{"0-123-X",5,25.3},{"0-124-X",6,30.2},{"0-125-X",10,50}}
	};
	ReportResults(cin, cout, item);
	system("pause");
	return 0;
}
