#include<fstream>
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
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
	/*
	ͳ��ÿ�����ʳ������ı��ڼ���
	*/
	ifstream in("text.txt");
	string line, word;
	map<string, vector<size_t>> mp;
	size_t l = 0;
	if (!in)
	{
		cerr << "�ļ���ʧ��" << endl;
		system("pause");
		return -1;
	}
	else
	{
		while (getline(in, line))
		{
			istringstream input(line);
			while ( input>> word)
			{
				process(word);
				mp[word].push_back(l);
			}
			++l;
		}
		for (const auto &w : mp)
		{
			cout << "���ʣ�" << w.first << " �����ڣ�";
			for (const auto &l : w.second)
				cout << l << " ";
			cout << "��" << endl;
		}
		system("pause");
		return 0;
	}
}