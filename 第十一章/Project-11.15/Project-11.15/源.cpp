#include<map>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//���������������޸�ֵ
	map<string, int> mp = { { "djgf",2} };
	auto it = mp.begin();
	it->second++;
	cout << it->first << " " << it->second << endl;
	system("pause");
	return 0;
}