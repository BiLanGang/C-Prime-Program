#include<iostream>
#include<string>
using namespace std;
void func(string &name, string &pre, string &post) 
{
	name.insert(0, pre);//插入前缀
	name.append(post);//插入后缀
	//9.46
	name.insert(name.size(), post);
}

int main() {
	string nm = "John", pre = "Mr.", post = " Jr.";
	func(nm, pre, post);
	cout << nm;
	system("pause");
	return 0;
}