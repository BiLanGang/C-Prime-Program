#include<vector>
#include<list>
#include<string>
#include<iostream>
using namespace std;
template<typename I,typename V>
I Find(I begin, I end, const V &val)
{
	while (begin != end)
	{
		if (val == (*begin))//找到对应元素，返回指向该元素的迭代器
		{
			cout << "查找成功" << endl;
			return begin;
		}
		else
			++begin;//迭代器递增
	}
	return end;//找不到，返回尾后迭代器
 }
int main()
{
	vector<int> ivec = { 0,1,2,3,4,5,6 };
	list<string> sli = { "a","an","the","and" };
	auto iret = Find(ivec.begin(), ivec.end(), 3);
	if (iret != ivec.end())
		cout << *iret << endl;
	else
		cout << "查找失败" << endl;
	auto sret = Find(sli.begin(), sli.end(), "the");	
	if (sret != sli.end())
		cout << *sret << endl;
	else
		cout << "查找失败" << endl;
	system("pause");
	return 0;

}