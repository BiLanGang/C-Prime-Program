#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
/*
ʹ��vector���治�ظ���Ԫ��ֵ��
��� vector��set�����Զ��ϲ��ظ���Ԫ�ء����� set ֧�ָ�Ч�Ĺؼ��ּ���������֧��������ʣ���
����һ���������� 
*/
int main()
{
	vector<int> v = { 0,1,2,5,4,1,5,2,3,4,5,6,9,8,5,9 };
	sort(v.begin(), v.end());
	auto iter = unique(v.begin(), v.end());
	v.erase(iter, v.end());
	for (auto i : v) {
		cout << i << " ";
	}
	system("pause");
	return 0;
}