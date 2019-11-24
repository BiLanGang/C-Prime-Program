#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*统计连续出现次数最大的单词*/
int main()
{
	vector<string> text;
	string first, second;
	unsigned Count=1, Max=1;
	string strMax;
	if (cin >> first)
	{		
		while (cin >> second)
		{
			if (first == second)
				++Count;
			else
			{
				Count = 1;
				if (Count > Max)
				{
					strMax = first;
					Max = Count;
				}
				first = second;
			}
		}
		if (Count > Max)
		{
			strMax = first;
			Max = Count;
		}
	}
	if (Max > 1)
		cout << "The word " << strMax << " appears " << Max << " times" << endl;
	else
		cerr << "There are no consecutive words" << endl;
	system("pause");
	return 0;
}