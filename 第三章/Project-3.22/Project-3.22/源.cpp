#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*将第一段变成大写*/
int main()
{
	//3.22
	string line;
	vector<string> text;
	cout << "按下 Ctrl+Z 结束" << endl;
	while (getline(cin,line))
		text.push_back(line);
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
		for (auto &c : *it)
			c = toupper(c);
	for (auto t : text)
		cout << t << endl;

	//3.23
	vector<int> ivec(10, 5);
	for (auto it = ivec.begin(); it != ivec.end(); it++)
		*it *= 2;
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}