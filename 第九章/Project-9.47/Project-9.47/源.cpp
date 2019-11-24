#include<string>
#include<iostream>
using namespace std;
int main() {
	string str("ab2c3d7R4E6");
	string numbers{ "0123456789" };
	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string::size_type pos = 0;
	while ((pos = str.find_first_of(numbers, pos)) != string::npos) {
		cout << str[pos] << " ";
		++pos;
	}
	cout << endl;
	pos = 0;
	while ((pos = str.find_first_of(alphabet, pos)) != string::npos) {
		cout << str[pos] << " ";
		++pos;
	}
	cout << endl;

	pos = 0;
	while ((pos = str.find_first_not_of(alphabet, pos)) != string::npos) {
		cout << str[pos] << " ";
		++pos;
	}
	cout << endl;

	pos = 0;
	while ((pos = str.find_first_not_of(numbers, pos)) != string::npos) {
		cout << str[pos] << " ";
		++pos;
	}
	cout << endl;

	system("pause");
	return 0;
}