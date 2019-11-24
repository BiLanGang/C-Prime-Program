
#include<iostream>
#include<utility>
/* ·­×ªº¯Êý */
template <typename Func, typename T1, typename T2>
void flip(Func f, T1 &&t1, T2 &&t2) {
	f(std::forward<T2>(t2), std::forward<T1>(t1));
}

void f(int v1, int &v2)
{
	std::cout << v1 << " " << ++v2 << std::endl;
}

void g(int &&i, int &j)
{
	std::cout << i << " " << j << std::endl;
}
int main()
{
	int i1 = 0, i2 = 0;
	int j = 1;
	f(42, i1);
	flip(f, i2, 42);
	std::cout << i1 << " " << i2 << std::endl;
	flip(g, j, 42);
	system("pause");
	return 0;
}
