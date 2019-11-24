#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*使用if else 语句将成绩转化为等级*/
int main()
{
	const vector<string> scores = { "F","E","E","D","C","B","A","A++" };
	double grade; string gradelevel;
	cout << "请输入成绩：";
	cin >> grade;
	if (grade < 60)
		gradelevel = scores[0];
	else
		gradelevel = scores[(grade - 50) / 10];
	cout << "成绩等级为：" << gradelevel << endl;
	system("pause");
	return 0;

}