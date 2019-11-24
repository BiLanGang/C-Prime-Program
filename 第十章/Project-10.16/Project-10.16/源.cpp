#include<algorithm>
#include<numeric>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void elimDups(vector<string> &sv)
{
	cout << "ԭ�ı����У�" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;
	sort(begin(sv), end(sv));
	cout << "sort ���ı����У�" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;
	auto it = unique(begin(sv), end(sv));
	cout << "unique ���ı����У�" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;
	sv.erase(it, end(sv));
	cout << "erase ���ı����У�" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;

}
//���������Ԫ�س��ȴ���ָ�����ȵ�Ԫ��
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	cout << endl;
	stable_sort(begin(words), end(words),
		[](const string &str1, const string &str2)
	     {return str1.size() < str2.size(); });

	// ʹ�� find_if ����
	/*auto it = find_if(begin(words), end(words),
		[sz](const string &a)
	{return a.size() >= sz; });
	auto count = cend(words) - it;
	cout << endl;
	cout << count << endl;
	for (auto itt = it; itt != cend(words); ++itt)
		cout << *itt << " ";
	cout << endl;*/

	//ʹ�� partition �������������� 10.18
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