#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vec;
	int a = vec.at(0),
		b = vec[0],
		c = vec.front();
	auto d = vec.begin();
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "d: " << *d << endl;
	system("pause");
	return 0;
}