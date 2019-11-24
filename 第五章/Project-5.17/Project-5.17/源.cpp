#include<iostream>
#include<vector>
using namespace std;
/*ÅÐ¶ÏÇ°×º*/
int main()
{
	vector<int> ivec1 = {0,1,2,5,6,9,8,7,8};
	vector<int> ivec2 = {1,4,5,6,8,9};
	auto len1 = ivec1.size();
	auto len2 = ivec2.size();
	unsigned count = 1;
	if (len1 < len2)
	{
		for (decltype(len1) i=0;i<len1;++i)
			if (ivec1[i] == ivec2[i])
				;
			else
			{
				cerr << "ivec1 is not a prefix of ivec2" << endl;
				system("pause");
				return -1;
			}
		cout << "ivec1 is a prefix of ivec2" << endl;
		system("pause");
		return 0;
	}
	else
	{
		for (decltype(len2) i=0;i<len2;++i)
			if (ivec2[i] == ivec1[i])
				;
			else
			{
				cerr << "ivec2 is not a prefix of ivec1" << endl;
				system("pause");
				return -1;
			}
		cout << "ivec2 is a prefix of ivec1" << endl;
		system("pause");
		return 0;
	}
}