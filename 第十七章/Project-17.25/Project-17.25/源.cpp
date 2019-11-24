#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<regex>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
	ifstream in("text.txt");
	if (in)
	{
		try
		{
			string phone("(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})");
			regex r(phone);
			string fmt("$2.$5.$7");
			string s;
#ifdef DEBUG
			/* ֻ���ÿ���û��ĵ�һ���绰���� */
			string str;
			while (getline(in, s))
			{
				//���滻�Ľ���󶨵� string ��
				istringstream istr(regex_replace(s, r, fmt));
				//�����û����Լ���һ���绰���벢���
				for (size_t i = 0; i < 2; ++i)
				{
					istr >> str;
					cout << str << " ";
				}
				cout << endl;
			}
#endif // DEBUG

#ifndef test
			//17.26
			/* ���ڶ���һ���绰������û���˵�ӵڶ������뿪ʼ��� */
			vector<string> phones;
			string str;
			while (getline(in, s))
			{
				//���滻�Ľ���󶨵� string ��
				istringstream istr(regex_replace(s, r, fmt));
				//������е��û����Լ��绰�������һ�� vector
				while (istr >> str)
				{
					phones.push_back(str);
				}
				//�ж� vector �ĳ����Ƿ񳬹� 2�����û��Ƿ�����������ϵĵ绰����
				if (phones.size() > 2)
				{
					/*�����������ϵĵ绰���룬��ӵڶ������뿪ʼ���*/
					for (size_t i = 0; i < phones.size(); ++i)
					{
						if (i == 1)
							continue;
						cout << phones[i] << " ";
				    }
					cout << endl;
				}
				else
				{
					/* ��֮�����ȫ�����*/
					for (const auto &p : phones)
					{
						cout << p << " ";
					}
					cout << endl;
				}
				phones.clear();
			}
#endif // test

			
		
        }
		catch (regex_error e)
		{
			cerr << e.what() << "\ncode: " << e.code() << endl;
			return -1;
		}
	}
	else
		cout << "File open faild" << endl;
	system("pause");
	return 0;
}