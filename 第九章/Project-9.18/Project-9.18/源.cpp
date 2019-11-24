#include<list>
#include<deque>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	//9.18
#ifdef DEBUG
	deque<string> sdeq;
	while (cin >> word)
		sdeq.push_back(word);
	for (auto it = sdeq.begin(); it != sdeq.end(); ++it)
		cout << *it << " ";
	cout << endl;
#endif // DEBUG
	//9.19
#ifndef debug
	list<string> slst;
	while (cin >> word)
		slst.push_back(word);
	for (auto it = slst.begin(); it != slst.end(); ++it)
		cout << *it << " ";
	cout << endl;
#endif // !debug

	
	system("pause");
	return 0;
}