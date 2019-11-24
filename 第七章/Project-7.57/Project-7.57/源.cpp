#include<iostream>
#include<string>
using namespace std;

//ȫ�ֱ��� ����
//double interestRate;

class Account {
public:
	Account(std::string name, double money) :owner(name), amount(money) {}
	double getAmount() const {
		return this->amount;
	}
	void deposit(double money) {
		this->amount += money;
	}
	double rate() { return interestRate; }
	static void rate(double newRate) {  //��̬�ĳ�Ա�����������κ�һ����������this�����ã�thisָ���ǵ�ǰ����
		interestRate = newRate;
	}
	void applyint() { amount += amount * interestRate; }

private:
	std::string owner;
	double amount;
	static double interestRate; //ֻ��һ�������������ʼ��
	static const int period = 30; //����
};

double Account::interestRate = 0.015;

int main() {
	//interestRate = 0.015;

	Account::rate(0.026);  //������static�Ժ���������ַ����޸�static����

	Account a("����", 1000);
	Account b("����", 2000);
	

	cout << a.rate() << endl;

	a.deposit(500);
	b.deposit(600);

	cout << a.getAmount() << endl;
	cout << b.getAmount() << endl;

	cout << a.rate() << endl;
	a.rate(0.08);
	cout << a.rate() << endl;
	cout << b.rate() << endl;

	Account::rate(0.02);
	a.applyint();
	b.applyint();
	cout << a.getAmount() << endl;
	cout << b.getAmount() << endl;


	system("pause");
	return 0;
}