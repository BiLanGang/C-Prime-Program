#include<iostream>
#include<string>
using namespace std;
//��������main����
int main(int argc, char const **argv)
{
	
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	cout << string(argv[1]) + string(argv[2]) << endl;
	system("pause");
	return 0;
}