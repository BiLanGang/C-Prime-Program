#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main()
{
	try
	{
		
		regex r("([[:alnum:]]+)\\.(cpp|cxx|cc)$", regex::icase);
		/* ���ʽ�������������Ĳ���Ϊ������ʽ���ӱ��ʽ
		$ ��ʾƥ��������β����������������ʽ��ģʽ�й�����
		�����ӱ��ʽ�����������������������֣��ֱ��ʾ�ļ����Լ��ļ���չ��
		ģʽƥ��λ�ô���ͬ�ĺ��壺
		0������������ʽ�����ƥ��
		���¾�Ϊ�ӱ��ʽ��ƥ��
		1������������ʽģʽ�е�һ���ӱ��ʽ���ļ�����
		2������������ʽģʽ�еڶ����ӱ��ʽ���ļ���չ����

		...? ��ʾ�����ѡ�ķ��ţ����������ӱ��ʽ��ʱ���ɳ�����������Ҳ�ɳ�����
		������
		.........*/
		smatch results;
		string filename;
		while (cin >> filename)
			if (regex_search(filename, results, r))
			{
#ifndef DEBUG
				//���ƥ��ı��ʽ
				cout << results.str() << endl;
#endif // DEBUG

#ifdef test
				//����ļ�������ֻ�����һ���ӱ��ʽ
				cout << results.str(1) << endl;
#endif // !test

			
			}
			
	}
	catch (regex_error err)
	{
		cout << err.what() << "\ncode:" << err.code() << endl;
	}
	system("pause");
	return 0;
}