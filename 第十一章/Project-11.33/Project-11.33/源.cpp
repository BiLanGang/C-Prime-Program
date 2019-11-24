/*
单词转换程序
*/
#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<sstream>

using namespace std;

//函数buildMap读入给定文件，建立起转换映射
map<string, string> buildMap(ifstream &map_file) {
	map<string, string> trans_map;
	string key;
	string value;
	//读取第一个单词存入key中，行中剩余内容存入value
	while (map_file >> key && getline(map_file, value)) {
		if (value.size() > 1) 
		{
			trans_map[key] = value.substr(1); //跳过前导空格
		}
		else {
			throw runtime_error("no rule for " + key);
		}
	}
	return trans_map;
}

//生成文本转换
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
	auto trans_map = buildMap(map_file);//保存转换规则
	string text;
	while (getline(input, text)) {
		istringstream stream(text); //读取每个单词
		string word;
		bool firstword = true;  //控制是否打印空格
		while (stream >> word) {
			if (firstword) {
				firstword = false;
			}
			else cout << " ";
			//transform返回它的第一个参数或其转换之后的形式
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
		cerr << "文件打开失败！" << endl;
	system("pause");
	return 0;
}