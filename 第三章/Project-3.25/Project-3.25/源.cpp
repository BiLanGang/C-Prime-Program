#include<iostream>
#include<vector>
using namespace std;
/*统计分数段人数*/
int main()
{
	vector<int> score(11, 0); 
	unsigned grade;
	auto beg = score.begin();
	while (cin >> grade)
		if (grade <= 100)
		{
			auto cou = grade / 10;
			*(beg + cou)+=1;
		}
	for (auto sc : score)
		cout << sc << " ";
	cout << endl;
	system("pause");
	return 0;
}