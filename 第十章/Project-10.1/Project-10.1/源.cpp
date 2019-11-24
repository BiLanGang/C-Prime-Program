#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<numeric>
using namespace std;
//统计特定元素在vector出现了几次，使用 count 函数
int main()
{
	//统计 int 元素 10.1
	int ia[] = { 1,2,5,4,6,2,1,4,5,9,9,8,24,5,5,1 };
	vector<int> ivec(ia,end(ia));
	int Cou = count(begin(ivec), end(ivec), 1);
	cout << "1 appears " << Cou << " times" << endl;
	cout << endl;
	//统计 string 对象 10.2
	string word;
	vector<string> svec;
	while (cin >> word)
		svec.push_back(word);
	int sCou = count(begin(svec), end(svec), "the");
	cout << "the appears " << sCou << " time" << endl;
	cout << endl;
	//accumulate 求和函数  10.3
	int sum = accumulate(ivec.cbegin(), cend(ivec), 0);
	cout << sum << endl;
 
	system("pause");
	return 0;
}