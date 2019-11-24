#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	//统计容器中长度超过指定值的元素，使用count_if函数
	vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	string::size_type sz = 6;
	auto wc = count_if(words.begin(), words.end(),
		[sz](const string &a)
	{ return a.size() >= sz; });
	cout << wc << endl;
	system("pause");
	return 0;
}