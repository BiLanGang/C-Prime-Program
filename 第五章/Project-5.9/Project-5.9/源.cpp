#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*ʹ��һϵ��if���ͳ�ƴ�cin�ж�����ı����ж���Ԫ����ĸ*/
int main()
{
	int aCn=0,eCn=0,iCn=0,oCn=0,uCn=0;
	int space = 0, LF = 0, TorV_H = 0;//����Ϊ���ո񡢻��С��Ʊ��,5.11�Ľ�
	char input;
	while (cin >> input)
	{
		if (input == 'a'||input=='A')//5.10�Ľ���ͬʱͳ�ƴ�дԪ��
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
		if (input =='\t'||input=='\v' )//�Ʊ�����������Ʊ���Լ������Ʊ��
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