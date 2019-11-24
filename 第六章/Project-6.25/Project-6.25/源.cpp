#include<iostream>
#include<string>
using namespace std;
//带参数的main函数
int main(int argc, char const **argv)
{
	
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	cout << string(argv[1]) + string(argv[2]) << endl;
	system("pause");
	return 0;
}