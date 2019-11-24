#include<algorithm>
#include<numeric>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void elimDups(vector<string> &sv)
{
	cout << "原文本序列：" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;
	sort(begin(sv), end(sv));
	cout << "sort 后文本序列：" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;
	auto it = unique(begin(sv), end(sv));
	cout << "unique 后文本序列：" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;
	sv.erase(it, end(sv));
	cout << "erase 后文本序列：" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;

}
//输出容器中元素长度大于指定长度的元素
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	cout << endl;
	stable_sort(begin(words), end(words),
		[](const string &str1, const string &str2)
	     {return str1.size() < str2.size(); });

	// 使用 find_if 函数
	/*auto it = find_if(begin(words), end(words),
		[sz](const string &a)
	{return a.size() >= sz; });
	auto count = cend(words) - it;
	cout << endl;
	cout << count << endl;
	for (auto itt = it; itt != cend(words); ++itt)
		cout << *itt << " ";
	cout << endl;*/

	//使用 partition 函数，容器划分 10.18
	/*auto it = partition(begin(words), end(words),
		[sz](const string &a)
	{return a.size() >= sz; });*/
	//10.19
	auto it = stable_partition(begin(words), end(words),
		[sz](const string &a)
	{return a.size() >= sz; });
	auto count = it - begin(words);
	cout << endl;
	cout << count << endl;
	for (auto itt = begin(words); itt != it; ++itt)
		cout << *itt << " ";
	cout << endl;
}
int main()
{
	vector<string> text = { "abcfgfd","abdfg","abffc","bfcd","effg","bcddfgbdd","eqd" };
	biggies(text, 5);
	system("pause");
	return 0;
}