#include<iostream>
using namespace std;
int main() {
	// lambda ±í´ïÊ½
	auto f = [](int a, int b) {return a + b; };
	cout << f(1, 2) << endl;
	int a = 8;
	auto m = [a](int b) {return a + b; };
	cout << m(5) << endl;
	system("pause");
	return 0;
}