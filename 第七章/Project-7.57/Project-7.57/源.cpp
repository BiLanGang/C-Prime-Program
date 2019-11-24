#include<iostream>
#include<string>
using namespace std;

//全局变量 利率
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
	static void rate(double newRate) {  //静态的成员函数不属于任何一个对象，所以this不能用，this指的是当前对象。
		interestRate = newRate;
	}
	void applyint() { amount += amount * interestRate; }

private:
	std::string owner;
	double amount;
	static double interestRate; //只有一个，不能在这初始化
	static const int period = 30; //例外
};

double Account::interestRate = 0.015;

int main() {
	//interestRate = 0.015;

	Account::rate(0.026);  //函数加static以后可以用这种方法修改static变量

	Account a("张三", 1000);
	Account b("李四", 2000);
	

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