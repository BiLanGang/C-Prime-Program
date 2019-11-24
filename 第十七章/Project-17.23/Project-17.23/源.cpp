#include<iostream>
#include<string>
#include<regex>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace  std;
//ƥ���������룬���������������λ���ֻ��߾�λ���ֹ��ɣ�ǰ��λ�ͺ���λ֮����һ���̺���
bool valid(const smatch &item)
{
	if (item[1].matched)
		return (!item[2].matched && !item[3].matched)
		|| (item[2].matched && item[3].matched);
	else
		return false;
}

int main()
{
	ifstream in("text.txt");
	if (in)
	{//����ƥ��������ʽ
		try
		{
			//��֤��������������ʽ
			regex rr("(\\d{5})([-])?(\\d{4})?");
			/* (\\d{5})  ��������ǰ��λ����ѡ��
			   ([-])?      �м���������ѡ��
			   (\\d{4})? �ʱ����λ����ѡ��*/ 
			smatch results;
			string s;
			while (getline(in, s))
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