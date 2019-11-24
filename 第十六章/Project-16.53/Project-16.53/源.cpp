
#include<iostream>
#include<string>

template <typename T>
std::ostream& print(std::ostream &os, const T &t) {
	return os << t;
}

template <typename T, typename...Args>
std::ostream& print(std::ostream &os, const T &t, const Args &...rest) {
	os << t << " ,";
	return print(os, rest...);
}

int main()
{
	int i = 0;
	double d = 3.14;
	std::string s = "bitch";
	const char *cp = "hi";
	print(std::cout, 42) << std::endl;
	print(std::cout, 42, "hello") << std::endl;
	print(std::cout, i, d, s, cp, "world") << std::endl;
	system("pause");
	return 0;

}