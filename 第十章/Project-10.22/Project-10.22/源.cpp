#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>

using namespace std;

bool judge_size(string &s, string::size_type sz) {
	return s.size() >= sz;
}

int main() {
	//²ÎÊý°ó¶¨
	vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	cout << count_if(words.begin(), words.end(), bind(judge_size, placeholders::_1, 6)) << endl;

	system("pause");
	return 0;
}