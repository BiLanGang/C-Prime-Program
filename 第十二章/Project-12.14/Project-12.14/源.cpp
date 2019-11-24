#include<iostream>
#include<memory>
#include<string>

using namespace std;

struct destination {
	string des;
	destination(string des_) :des(des_) {}
};

struct connection {
	string conn;
	connection(string conn_) :conn(conn_) {}
};

connection connect(destination *des_) {
	cout << "connect to: " << des_->des << endl;
	return connection(des_->des);
}

void disconnect(connection conn_) {
	cout << "disconnect " << conn_.conn << endl;
}

void end_connection(connection *p) { disconnect(*p); }

void f(destination &d) {
	connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);  //p接管了内置指针&c所指向的对象的所有权
	/*使用lambda表达式代替 end_connection函数
	12.15 */
	//shared_ptr<connection> p(&c, [](connection *p){disconnect(*p);});
	cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main() {
	destination des("aa");
	f(des);

	system("pause");
	return 0;
}