#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*使用一系列if语句统计从cin中读入的文本中有多少元音字母*/
int main()
{
	int aCn=0,eCn=0,iCn=0,oCn=0,uCn=0;
	int space = 0, LF = 0, TorV_H = 0;//依次为：空格、换行、制表符,5.11改进
	char input;
	while (cin >> input)
	{
		if (input == 'a'||input=='A')//5.10改进，同时统计大写元音
			++aCn;
		if (input == 'e'||input=='E')
			++eCn;
		if (input == 'i'||input=='I')
			++iCn;
		if (input == 'o'||input=='O')
			++oCn;
		if (input == 'u'||input=='U')
			++uCn;
		if (input == '\40')
			++space;
		if (input == '\12' )
			++LF;
		if (input =='\t'||input=='\v' )//制表符包括横向制表符以及纵向制表符
			++TorV_H;
	}
	cout << "Number of vowel a:" << aCn << endl;
	cout << "Number of vowel e:" << eCn << endl;
	cout << "Number of vowel i:" << iCn << endl;
	cout << "Number of vowel o:" << oCn << endl;
	cout << "Number of vowel u:" << uCn << endl;
	cout << "Number of space:" << uCn << endl;
	cout << "Number of LF:" << uCn << endl;
	cout << "Number of TH or VH:" << uCn << endl;
	system("pause");
	return 0;
}