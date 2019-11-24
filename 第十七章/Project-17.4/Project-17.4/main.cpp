#include"Sales_data.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<numeric>
#include<fstream>
using namespace std;
/* �����е���������в�ѯһ������������ */
using matches = tuple<vector<Sales_data>::size_type, vector<Sales_data>::const_iterator,
	vector<Sales_data>::const_iterator>;
vector<matches> findbook(const vector<vector<Sales_data>> &files, const string &book)
{
	vector<matches> ret;
	for (auto it = files.cbegin(); it != files.cend(); ++it)
	{
		auto found = equal_range(it->cbegin(), it->cend(), book, compareIsbn);
		/* equal_range ʱ��׼���һ�ֶ��ֲ����㷨����ͼ���������[first,last)��Ѱ��value��
		������һ�Ե�����i��j��������һ�� pair��������i���ڲ��ƻ������ǰ���£�
		value�ɲ���ĵ�һ��λ�ã��༴lower_bound����
		j�����ڲ��ƻ������ǰ���£�value�ɲ�������һ��λ�ã��༴upper_bound����
		��ˣ�[i,j)�ڵ�ÿ��Ԫ�ض���ͬ��value������[i,j)��[first,last)֮�з��ϴ�һ���ʵ���������� */
		if (found.first != found.second)
			ret.push_back(make_tuple(it - files.cbegin(), found.first, found.second));
	}
	return ret;
}

void ReportResults(istream &in, ostream &os, const vector<vector<Sales_data>> &files)
{
	cout << "���������ѯ�鼮��ţ�ISBN����";
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
	string book;//����ѯ�鼮
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
