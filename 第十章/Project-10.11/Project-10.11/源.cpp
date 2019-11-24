#include<string>
#include<algorithm>
#include<numeric>
#include<vector>
#include<iostream>
using namespace std;
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
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
int main()
{
	vector<string> text = { "the"," quick"," fox"," jumps"," over"," red"," slow"," the"," turtle" };
	elimDups(text);
	stable_sort(begin(text), end(text), isShorter);
	for (const auto &word : text)
		cout << word << " ";
	cout << endl;
	system("pause");
	return 0;

}