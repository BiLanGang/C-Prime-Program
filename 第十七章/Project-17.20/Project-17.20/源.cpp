#include<iostream>
#include<string>
#include<regex>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace  std;

#ifndef DEBUG
//17.20
bool valid(const smatch &item)
{
	if (item[1].matched)
	{
		//����������ţ�������ж�Ӧ���������Լ���������ƥ���Լ������ָ������ָ�ʽһ��
		return item[3].matched&&item[4].str() == item[6].str()
			&& item[5].matched&&item[7].matched;
	}
	else
		//���û�������ţ���Ҳ����û��������
		return !item[3].matched&&item[4].str() == item[6].str()
		&& item[5].matched&&item[7].matched;

}
#endif // DEBUG




int main()
{
	ifstream in("text.txt");
	if (in)
	{//����ƥ��������ʽ
		try
		{
#ifdef DEBUG
			/*17.22 �޸ģ������ں����������֮������������ָ����������뱣�ָ�ʽһ�£�
			����һ����ʹ�ü����ָ������ڶ����־ͱ���ʹ�������Լ���ʽ����ͬ�ķָ�����
			���磺012   123   1234*/
			regex rr("(\\()?(\\d{3})(\\))?([-. ]+)?(\\d{3})([-. ]+)?(\\d{4})");
#endif // DEBUG

#ifndef test
			regex rr("(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})");
#endif // !test

			smatch results;
			string s;
			while (getline(in,s))
			{
				for (sregex_iterator it(s.begin(), s.end(), rr), end_it; it != end_it; ++it)
				{
					if (valid(*it))
						cout << "valid:" << it->str() << endl;
					else
						cout << "not valid:" << it->str() << endl;
				}
			}
		}
		catch (regex_error e)
		{
			cerr << e.what() << "\ncode:" << e.code() << endl;
		}
		system("pause");
		return 0;
	}
	else
	{
		cerr << "�ļ���ʧ�ܣ�" << endl;
		system("pause");
		return -1;
	}
}