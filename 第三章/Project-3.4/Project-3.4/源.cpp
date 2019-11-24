#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*ÅĞ¶Ï×Ö·û´®´óĞ¡*/
	string line1, line2;
	cin >> line1 >> line2;
	/*if (line1 == line2)
		cout << "line1 and line2 are equal!" << endl;
	else
		cout <<"Max= "<< (line1 > line2 ? line1 : line2) << endl;*/
	/*ÅĞ¶Ï×Ö·û´®ÊÇ·ñµÈ³¤*/
	auto line1_size = line1.size();
	auto line2_size = line2.size();
	if (line1_size == line2_size)
		cout << "line1 and line2 are the same length!" << endl;
	else
	{
		if (line1_size > line2_size)
			cout << line1 << endl;
		else
			cout << line2 << endl;
	}
	system("pause");
	return 0;
}