#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
bool islength(string &str)
{
	return str.size() >= 5;
}
int main()
{
	vector<string> words = { "abcasd","abc","abcasd","bcddd","efg","bcd","eqd" };
	/*
	partition 划分容器类的元素，接受一个谓词，谓词为真的元素排在容器前部分；反之,
	排在容器后部分。函数返回一个指向最后一个使谓词为真的元素之后的位置 
	*/
	auto it = partition(begin(words), end(words), islength);
	for (auto itt = begin(words); itt != it; ++itt)
		cout << *itt << " ";
	cout << endl;
	system("pause");
	return 0;
}