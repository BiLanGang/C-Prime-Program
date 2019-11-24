/*
����ת������
*/
#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<sstream>

using namespace std;

//����buildMap��������ļ���������ת��ӳ��
map<string, string> buildMap(ifstream &map_file) {
	map<string, string> trans_map;
	string key;
	string value;
	//��ȡ��һ�����ʴ���key�У�����ʣ�����ݴ���value
	while (map_file >> key && getline(map_file, value)) {
		if (value.size() > 1) 
		{
			trans_map[key] = value.substr(1); //����ǰ���ո�
		}
		else {
			throw runtime_error("no rule for " + key);
		}
	}
	return trans_map;
}

//�����ı�ת��
const string & transform(const string &s, const map<string, string> &m) {
	auto map_it = m.find(s);
	if (map_it != m.cend()) {
		return map_it->second;
	}
	else {
		return s;
	}
}

void word_transform(ifstream &map_file, ifstream &input) {
	auto trans_map = buildMap(map_file);//����ת������
	string text;
	while (getline(input, text)) {
		istringstream stream(text); //��ȡÿ������
		string word;
		bool firstword = true;  //�����Ƿ��ӡ�ո�
		while (stream >> word) {
			if (firstword) {
				firstword = false;
			}
			else cout << " ";
			//transform�������ĵ�һ����������ת��֮�����ʽ
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}

int main() {
	ifstream map_file("map_file.txt"), input("input.txt");
	if (map_file&&input)
	{
		word_transform(map_file, input);
	}
	else
		cerr << "�ļ���ʧ�ܣ�" << endl;
	system("pause");
	return 0;
}