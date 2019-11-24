#include<forward_list>
#include<string>
#include<iostream>
using namespace std;
void func(forward_list<string> &flst, string str1, string str2)
{
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end())
	{
		if (*curr == str1)
		{
			curr = flst.insert_after(curr, str2);
			return;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	flst.insert_after(prev, str2);
}
int main()
{
	forward_list<string> flst = { "abc","bcd","eee" };
	string a = "bcd", b = "fff";
	func(flst, a, b);
	for (auto i : flst) {
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;

}