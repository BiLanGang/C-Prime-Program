#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//multimap Ӧ�ã�ͳ�Ƽ�ͥ����
	multimap<string, vector<string>> family;
	vector<string> sv;
	string first_name, last_name;
	int num, k = 1;
	cout << "�����빲�м����գ�";
	cin >> num;
	while (num--)
	{
		cout << "������� " << k << " ���գ�";
		cin >> last_name;
		cout << "�������� " << last_name << " �ļ�ͥ��Ա���� end ��������";
		while (cin>>first_name)
		{
			if (first_name != "end")
			{
				sv.push_back(first_name);
			}
			else
			{ 				
				break;				
			}
		}
		family.emplace(last_name, sv);
		sv.clear();
		++k;
		cout << endl;
	}
	for (const auto &f : family)
	{
		cout << "�� " << f.first << " �����³�Ա��" << endl;
		for (const auto &p : f.second)
			cout << p << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}