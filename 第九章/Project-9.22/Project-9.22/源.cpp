#include<iostream>
#include<string>
#include<vector>

using namespace std;

void func(vector<int> &iv, int some_val) {
	int extra = 0;
	vector<int>::iterator iter = iv.begin();
	while (iter != (iv.begin() + iv.size() / 2 + extra)) {
		if (*iter == some_val) {
			iter = iv.insert(iter, 2 * some_val);
			++extra;
			++iter;
		}
		++iter;
	}
}
int main() {
	vector<int> iv = { 1,2,3,4 };
	func(iv, 2);
	for (auto i : iv) {
		cout << i << " ";
	}
	system("pause");
	return 0;
}