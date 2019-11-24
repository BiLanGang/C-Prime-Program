#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	// 流迭代器
	istream_iterator<int> in(cin),eof;
	ostream_iterator<int> out(cout," ");
	vector<int> ivec(in, eof);
	sort(ivec.begin(), ivec.end());
	copy(ivec.begin(), ivec.end(), out);
	cout << endl;
	//10.31 只打印不重复元素
	unique_copy(ivec.begin(), ivec.end(), out);
	cout << endl;
	system("pause");
	return 0;
}