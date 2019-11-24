#include<iostream>
#include<string>

using namespace std;

const string mm[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec" };
// ʶ���д�·�
int findmonth(const string &mon) {
	int pos;
	for (int i = 0; i < 12; ++i) {
		if ((pos = mon.find(mm[i])) != string::npos) {
			return i + 1;
		}
	}
}
//�����࣬ʶ�����ֲ�ͬ��ʽ
class Date {
public:
	Date(const string &str) {
		string data_str = str;
		string::size_type index1 = 0;
		string::size_type index2 = 0;
		//  ʶ�𣺡��·� ����,��ݡ���ʽ���磺January 1,1990
		if (str.find(',') != string::npos) {
			index1 = str.find(' ');
			index2 = str.find(',', index1 + 1);
			string mon = str.substr(0, index1 - 1);
			month = findmonth(mon);
			day = stoi(str.substr(index1 + 1, index2));
			year = stoi(str.substr(index2 + 1));
		}
		//  ʶ�𣺡�����/�·�/��ݡ���ʽ���磺 1/1/1990
		else if (str.find('/') != string::npos) {
			index1 = str.find_first_of('/');
			index2 = str.find_first_of('/', index1 + 1);
			year = stoi(str.substr(index2 + 1));
			month = stoi(str.substr(index1 + 1, index2 - 1));
			day = stoi(str.substr(0, index1));
		}
		//  ʶ�𣺡��·� ���� ��ݡ���ʽ���磺Jan 1 1990
		else {
			index1 = str.find_first_of(' ');
			index2 = str.find_first_of(' ', index1 + 1);
			string mon = str.substr(0, index1);
			month = findmonth(mon);
			day = stoi(str.substr(index1 + 1, index2 - 1));
			year = stoi(str.substr(index2 + 1));
		}
	}
	void getdate() {
		cout << "Year:" << year << " " << "Month:" << month << " " << "Day:" << day << endl;
	}
private:
	unsigned year, month, day;
};


int main() {
	string d1 = "January 1,1900", d2 = "1/1/1990", d3 = "Jan 1 1900";
	Date a(d1), b(d2), c(d3);
	a.getdate();
	b.getdate();
	c.getdate();

	system("pause");
	return 0;
}