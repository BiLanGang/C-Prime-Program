#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*ʹ��if else ��佫�ɼ�ת��Ϊ�ȼ�*/
int main()
{
	const vector<string> scores = { "F","E","E","D","C","B","A","A++" };
	double grade; string gradelevel;
	cout << "������ɼ���";
	cin >> grade;
	if (grade < 60)
		gradelevel = scores[0];
	else
		gradelevel = scores[(grade - 50) / 10];
	cout << "�ɼ��ȼ�Ϊ��" << gradelevel << endl;
	system("pause");
	return 0;

}