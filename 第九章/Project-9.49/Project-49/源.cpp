#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	ifstream in("text.txt");//�򿪶�Ӧ�ĵ����ļ�
	if (!in)
	{
		cerr << "��ʧ�ܣ�" << endl;
		system("pause");
		return -1;
	}
	else
	{
		string up("bdfhklt"), down("gjpqy");//up �ϳ�ͷ�ַ���down �³�ͷ�ַ�
		vector<string> svec;
		string word;
		string::size_type pos = 0;
		while (in >> word)
		{
			if ((pos = word.find_first_of(up)) == string::npos)
				if ((pos = word.find_first_of(down)) == string::npos)
					svec.push_back(word);
		}
		//���������ĵ���
		auto Max = svec[0];
		for (auto s : svec)
			if (s.size() > Max.size())
				Max = s;
		cout << Max << endl;
		in.close();
		system("pause");
		return 0;
	}

}