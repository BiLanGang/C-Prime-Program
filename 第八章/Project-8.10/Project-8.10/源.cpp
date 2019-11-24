#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
	ifstream read("text.txt");
	vector <string> svec;	
	if (read)
	{
		string buffer;
		while (getline(read, buffer))
			svec.push_back(buffer);
	}
	else
	{
		cerr << "Don't open file!\n";
		system("pause");
		return -1;
	}
	for (auto s : svec)
	{
		istringstream is(s);
		string word;
		while (is >> word)
			cout << word << endl;
	}
	system("pause");
	return 0;
}
