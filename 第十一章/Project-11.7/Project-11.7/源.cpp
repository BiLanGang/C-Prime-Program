#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//map Ӧ��
	map<string, vector<string>> family;
	string first_name, last_name;
	cout << "�������գ�";
	cin >> last_name;
	cout << "������ü�ͥ��Ա���֣�";
	while (cin >> first_name)
		family[last_name].push_back(first_name);
	for (const auto &f : family)
	{
		cout << "�� " << f.first << " �����³�Ա��" << endl;
		for (const auto &p : f.second)
			cout << p << endl;
	}
	system("pause");
	return 0;
}