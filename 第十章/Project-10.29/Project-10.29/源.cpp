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
		// eof ����Ϊ�յ� istream_iterator���Ӷ����Ե���β�������ʹ��
		istream_iterator<string> input(in), eof;
		ostream_iterator<string> output(cout, " ");
		vector<string> svec(input, eof);
		for (auto s : svec)
			*output++ = s;
		cout << endl;
	}
	else
		cerr << "��ʧ��" << endl;
	system("pause");
	return 0;
}