#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;
struct PersonInfo
{
	string name;
	vector<string> phone;
};
bool valid(string str)
{
	for(const auto c:str)
		if (!isdigit(c))
		{
			return false;
		}
	return true;
}
string format(string str)
{
	string phone = "+86-" + str;
	return phone;
}
int main()
{
	ifstream read("text.txt");//���ļ���������  8.13
	vector<PersonInfo> people;
	string line, word;
	istringstream record;
	while (getline(read, line))
	{
		record.str(line);
		PersonInfo infor;
		record >> infor.name;
		while (record >> word)
			infor.phone.push_back(word);
		record.clear();
		people.push_back(infor);
	}
#ifdef DEBUG
	/*
	ʹ��cout���
	*/
	for (const auto &item : people)
	{
		cout << item.name << " ";
		for (const auto &ph : item.phone)
			cout << ph << " ";
		cout << endl;
	}
#endif // DEBUG
#ifndef debug
	/*
	ʹ��ostringstream���
	*/
	for (const auto &entry : people)
	{
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phone)
			if (!valid(nums))
				badNums << " " << nums;
			else
				formatted << " " << format(nums);
		if (badNums.str().empty())
			cout << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error:" << entry.name << " invalid number(s) " << badNums.str() << endl;
     }
#endif // !1
	system("pause");
	return 0;
}
