#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	/*��������*/
	/*vector<int> ivec;
	int temp;
	while (cin>>temp)
	{
		ivec.push_back(temp);
	}
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;*/

	/*�����ַ���*/
	vector<string> svec;
	string str;
	while (cin>>str)
	{
		svec.push_back(str);
	}
	for (auto s : svec)
		cout << s << " ";
	cout << endl;
	system("pause");
	return 0;
}