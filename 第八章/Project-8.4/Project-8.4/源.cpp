#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
#define DEBUG
int fileToVector(string fileName, vector<string> &svec) {
	ifstream inFile(fileName);
	if (!inFile) {
		return 1;
	}
	string s;
#ifdef DEBUG1
	/*    8.4  每次读入一行*/
	while (getline(inFile, s)) {
		svec.push_back(s);
	}
#endif // DEBUG1

#ifdef DEBUG
	/*   8.5 每次读入一个单词*/
	while (inFile >> s) {
		svec.push_back(s);
	}

#endif // DEBUG

	inFile.close();
	if (inFile.eof()) {
		return 4;
	}
	if (inFile.bad()) {
		return 2;
	}
	if (inFile.fail()) {
		return 3;
	}
}
int main() {
	vector<string> svec;
	string fileName, s;
	cout << "Enter fileName:" << endl;
	cin >> fileName;
	switch (fileToVector(fileName, svec))
	{
	case 1:
		cout << "error: can not open file: " << fileName << endl;
		system("pause");
		return -1;
	case 2:
		cout << "error: system failure." << endl;
		system("pause");
		return -1;
	case 3:
		cout << "error: read failure." << endl;
		system("pause");
		return -1;
	}
	cout << "向量里面的内容：" << endl;
	for (vector<string>::iterator iter = svec.begin(); iter != svec.end(); ++iter)
		cout << *iter << endl;
	system("pause");
	return 0;
}