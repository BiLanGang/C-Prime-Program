#include<iostream>
#include<string>
#include<regex>
#include<algorithm>

using namespace std;
//���ŵ绰�����ʽ
int main()
{
	string phone("(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})");
	regex r(phone);
	string s;
	string fmt("$2.$5.$7");
	/*������һ�� $ ����ӱ��ʽ��������
					����ʾһ���ض����ӱ��ʽ��
					string fmt="$2.$5.$7";  
					�������ʽ��Ϊ ddd.ddd.dddd*/
	while (getline(cin, s))
	{
		cout << regex_replace(s, r, fmt) << endl;
		/*s������������
		  r������ƥ���������ʽ
		  fmt�������ʽ*/
	}
	system("pause");
	return 0;
}