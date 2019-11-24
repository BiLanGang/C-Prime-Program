#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> svec;
	string str;
	while (cin >> str)
	{
		for (auto &c : str)
			c = toupper(c);
		svec.push_back(str);
	}
	for (auto s : svec)
		cout << s << endl;
	system("pause");
	return 0;
}