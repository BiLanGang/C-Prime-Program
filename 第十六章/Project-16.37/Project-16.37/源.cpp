#include<algorithm>
#include<iostream> 
#ifdef DEBUG
//16.37 标准库 max 函数
int main()
{
	int a = 9, b = 4;
	double c = 12.6;
	auto ret = std::max(a, b);
	std::cout << ret << std::endl;
	system("pause");
	return 0;
}

/*在使用标准库函数 max 时，不能传递两个类型不同的参数。因为 max 的两个形参都是同一个模板类型*/
#endif // DEBUG

#ifndef test
//16.39  模板函数 compare 显式模板实参
template<typename T>
T compare(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}
#include<string>
int main()
{
	auto ret = compare<std::string>("hi", "word");
	std::cout << ret << "\n";
	system("pause");
	return 0;
}
#endif // !test




