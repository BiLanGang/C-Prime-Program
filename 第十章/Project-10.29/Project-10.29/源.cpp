#include<algorithm>
#include<vector>
#include<fstream>
#include<iostream>
#include<iterator>
#include<string>
using namespace std;
int main()
{
	ifstream in("text.txt");
	if (in)
	{
		// eof 定义为空的 istream_iterator，从而可以当做尾后迭代器使用
		istream_iterator<string> input(in), eof;
		ostream_iterator<string> output(cout, " ");
		vector<string> svec(input, eof);
		for (auto s : svec)
			*output++ = s;
		cout << endl;
	}
	else
		cerr << "打开失败" << endl;
	system("pause");
	return 0;
}