#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> ivec;
	cout << "����F������" << endl;
	int i;
	while (cin >> i)
		ivec.push_back(i);
	auto len = ivec.size();
	cout << "�����������֮�ͣ�" << endl;
	for (int k = 0; k < len; k = k + 2)
	{
		if (k + 1 >= len)
			cout << ivec[k] << " ";
		else
			cout << ivec[k] + ivec[k + 1] << " ";
	}
	cout << endl;
	cout << "�����β��Ӧ����֮�ͣ�" << endl;
	for (decltype(len) j = 0; j < len / 2; j++)
		cout << ivec[j] + ivec[len - 1 - j] << " ";
	if (len % 2 != 0)
		cout << ivec[len / 2] << endl;
	cout << endl;

	system("pause");
	return 0;
}