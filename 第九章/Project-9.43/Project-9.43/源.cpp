#include<string>
#include<iostream>
using namespace std;
void func(string &s, string oldVal, string newVal)
{
#ifdef DEBUG
	auto iter = s.begin();
	while (iter + oldVal.size() != s.end()) {
		if (oldVal == string(iter, iter + oldVal.size()))//�������������� s ��Ѱ�� oldVal
		{
			iter = s.erase(iter, iter + oldVal.size());//ɾ�����ַ���
			iter = s.insert(iter, newVal.begin(), newVal.end());//�������ַ���
			iter += newVal.size();//���������������������ַ���
		}
		else {
			++iter;
		}
	}
#endif // DEBUG

#ifndef debug
	//9.44
	string::size_type i = 0;
	auto s_len = s.size(), old_len = oldVal.size();
	while (i + old_len <= s_len) {
		if (oldVal == s.substr(i, i + old_len)) {
			s.replace(i, i + old_len, newVal);
			i += newVal.size();
		}
		else {
			++i;
		}
	}
#endif // !debug

}
int main()
{
	string s("though,you don't love me");
	string oldVal("though");
	string newVal("tho");
	func(s, oldVal, newVal);
	cout << s;
	system("pause");
	return 0;
}