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
	cout << sv.size() << endl;
	sv.erase(it, end(sv));
	cout << "erase ���ı����У�" << endl;
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