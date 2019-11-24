#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

istream &iofunc(istream &is) {
	string s;
	while (is >> s) {
		cout << s << endl;
	}
	is.clear();
	return is;
}

int main() {
	string sss;
	cin >> sss;
	istringstream iss(sss);
	iofunc(iss);
	system("pause");
	return 0;
}