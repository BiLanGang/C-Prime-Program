#include<iostream>
#include<regex>
#include<string>

using namespace std;
 /* ����λ���ֵ���������ת��Ϊ ddddd-dddd ��ʽ */
int main()
{
	try {
		/* ƥ���λ������������������ʽ */
		string postcode("(\\d{5})([-])?(\\d{4})?");
		regex r(postcode);
		string PostCode;
		//�����ʽ
		string fmt("$1-$3");
		cin >> PostCode;
		cout << regex_replace(PostCode, r, fmt) << endl;
		system("pause");
		return 0;
	}
	catch (regex_error e)
	{
		cerr << e.what() << "\ncode: " << e.code() << endl;
		system("pause");
		return -1;
	}
	
}