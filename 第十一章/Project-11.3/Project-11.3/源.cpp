#include<map>
#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;
//11.4 �Ľ������Դ�Сд�Լ����
void process(string &s)
{
	for (int i = 0; i < s.size(); ++i)
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
		else if (ispunct(s[i]))
			s.erase(i, 1);
}
int main()
{
	ifstream in("text.txt");
	if (in)
		//����ͳ��
	{
		map<string, size_t> count;
		string word;
		while (in >> word)
		{
			process(word);
			++count[word];
		}
		for (const auto&w : count)
			cout << w.first << " occurs " << w.second << ((w.second > 1 ? " times" : " time")) << endl;
	}
	else
		cerr << "�ļ���ʧ��" << endl;
	system("pause");
	return 0;
}