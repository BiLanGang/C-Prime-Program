#include<iostream>
#include<vector>
#include<cassert>
using namespace std;
/*µİ¹éÊä³övectorÄÚÈİ*/
void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg != end)
	{
		cout << *beg << " ";
		print(++beg, end);
	}
}
int main()
{
	vector<int> ivec = { 0,1,2,3,4,5,6,7,8,9 };
	print(ivec.begin(), ivec.end());
	system("pause");
	return 0;
}