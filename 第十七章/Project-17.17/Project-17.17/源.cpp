#include<iostream>
#include<regex>
#include<string>
using namespace std;
int  main()
{
	/* �ҳ���������������Υ����ei���﷨����ĵ��ʡ�
	��ei���﷨����i ������ e ֮ǰ�������� c ֮��*/

	string file("receipt freind theif receive");
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern, regex::icase);//�����Ӧƥ���������ʽ����ָ����ƥ��ʱ���Դ�Сд
	// ʹ�õ�������������������ƥ��ĵ���
	for (sregex_iterator it(file.begin(), file.end(), r), end_it; it != end_it; ++it)
	{
		cout << it->str() << endl;
	}
	system("pause");
	return 0;

}