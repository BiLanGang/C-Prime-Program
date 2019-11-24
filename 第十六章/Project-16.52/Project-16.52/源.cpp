#include<iostream>
#include<string>
using namespace std;
template<typename T,typename ...Args>
void foo(const T& t, const Args&...rest)
{
	cout << sizeof...(Args) << endl;//����������в����ĸ���
	cout << sizeof...(rest) << endl;//������в��� 
}
int main()
{
	int i = 0, j = 1;
	double d = 3.14;
	std::string s = "hello";
	foo(i, s, 42, d);
	std::cout << std::endl;
	foo(s, 42, "hi");
	std::cout << std::endl;
	foo(d, s);
	std::cout << std::endl;
	foo("hi");
	std::cout << std::endl;
	foo(s, i, j);
	system("pause");
	return 0;

}