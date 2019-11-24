#include<iostream>
#include<string>
#include<sstream>
template <typename T>
std::string debug_rep(const T &t) {
	std::ostringstream ret;
	ret << t;
	return ret.str();
}

template <typename T>
std::string debug_rep(T *p) {
	std::ostringstream ret;
	ret << "pointer: " << p;
	if (p)
		ret << " " << debug_rep(*p);
	else
		ret << " null pointer";
	return ret.str();
}

//为非模板函数提供声明
template <typename>
std::string debug_rep(const std::string&);
//非模板函数
std::string debug_rep(char *p) {
	return debug_rep(std::string(p));
}

std::string debug_rep(const char *p) {
	return debug_rep(std::string(p));
}



template <typename T>
std::ostream& print(std::ostream &os, const T &t) {
	return os << t;
}

template <typename T, typename...Args>
std::ostream& print(std::ostream &os, const T &t, const Args &...rest) {
	os << t << ", ";
	return print(os, rest...);
}

template <typename...Args>
std::ostream& errorMsg(std::ostream &os, const Args &...rest) {
	//递归打印
	return print(os, debug_rep(rest)...);
}

int main()
{
	int i = 6, *aPtr = &i;
	const char *cp = "Mr.";
	std::string str = "tree";
	errorMsg(std::cerr, aPtr, "hello", cp, str);
	system("pause");
	return 0;
}
