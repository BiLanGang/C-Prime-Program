#include<vector>
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
	//ÖØÖÃ vector ÄÚÈİ
	vector<int> iv = { 0,1,2,3,4,5,6,7 };
	fill_n(begin(iv), iv.size(), 0);
	for (auto i : iv)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}