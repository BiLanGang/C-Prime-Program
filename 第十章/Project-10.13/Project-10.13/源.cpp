#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
bool islength(string &str)
{
	return str.size() >= 5;
}
int main()
{
	vector<string> words = { "abcasd","abc","abcasd","bcddd","efg","bcd","eqd" };
	/*
	partition �����������Ԫ�أ�����һ��ν�ʣ�ν��Ϊ���Ԫ����������ǰ���֣���֮,
	���������󲿷֡���������һ��ָ�����һ��ʹν��Ϊ���Ԫ��֮���λ�� 
	*/
	auto it = partition(begin(words), end(words), islength);
	for (auto itt = begin(words); itt != it; ++itt)
		cout << *itt << " ";
	cout << endl;
	system("pause");
	return 0;
}