#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main()
{
	try
	{
		string pattern("ie");
		string pattern1("cei");
#pragma region
		//17.16
		string pattern2("[^c]ei");
#pragma endregion

		//����Ҫ������ pattern ����������
		pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";//i �� e ֮ǰ
		pattern1 = "[[:alpha:]]*" + pattern1 + "[[:alpha:]]*";//������ c ֮��
#ifdef DEBUG
		//17.16 ���� 
		pattern1 = "[[:alpha:] ]*" + pattern2 + "[[:alpha:]]*";//������ c ֮��
#endif // DEBUG

		string check = pattern + "|" + pattern1;
		regex r(check);    //����һ�����ڲ���ģʽ�� regex 
		smatch results;      //����һ���������ڱ����������
		string test_str;//����һ�� string ������ģʽƥ�䲻ƥ����ı�
		cout << "������һ�����ʣ�" << endl;
		while (cin >> test_str)
		{
			if (regex_search(test_str, results, r))   //�� r �� test_str �в����� pattern ƥ����Ӵ�
				cout << "ƥ��ɹ�" << endl;
			else
				cout << "ƥ��ʧ��" << endl;
		}
	}
	catch (regex_error e)
	{
		cerr << e.what() << "\ncode:" << e.code() << endl;
	}
	system("pause");
	return 0;
}