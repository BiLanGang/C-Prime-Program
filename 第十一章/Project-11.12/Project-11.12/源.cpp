#include<utility>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	//ʹ���������� pair ��������
	vector<pair<string, int>> vec;
	string s; int i;
	while (cin >> s >> i)
	{
		//vec.push_back({ s,i });   ��һ��
		vec.emplace_back( s,i );  //�ڶ���,�ٶ����
		//vec.push_back(make_pair(s, i)); ������
	}
	for (const auto v : vec)
	{
		cout << v.first << " " << v.second << endl;
	}
	system("pause");
	return 0;
	
}