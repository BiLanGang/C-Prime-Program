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
	cout << sv.size() << endl;
	sv.erase(it, end(sv));
	cout << "erase 后文本序列：" << endl;
	for (auto s : sv)
		cout << s << " ";
	cout << endl;
	cout << sv.size() << endl;

}
int main()
{
	vector<string> text = { "abc","abc","abc","bcd","efg","bcd","eqd" };
	elimDups(text);
	system("pause");
	return 0;
}