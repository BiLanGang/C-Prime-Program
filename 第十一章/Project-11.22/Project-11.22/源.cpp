#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	map<string, vector<int>> mp;
	/* ����ֵ it Ϊһ�� pair<mp<string,vector<int>>::iterator,bool> 
	   ��һ��������ָ������ؼ���Ԫ�أ��ڶ�������ֵָ�����β����Ƿ�ɹ�*/
	auto it = mp.insert({ "wangben",{22} });
	if (it.second)
	{
		cout << it.first->first << " ";
		for (auto v : it.first->second)
			cout << v << " ";
	}
	system("pause");
	return 0;
}