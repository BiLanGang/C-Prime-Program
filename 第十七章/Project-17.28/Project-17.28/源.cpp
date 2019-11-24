#include<iostream>
#include<random>
#include<vector>
#include<ctime>
#include<cmath>
#include<string>
using namespace std;
#define test1
#define test2

/* 生成一个均匀分布的随机 unsigned int */
unsigned random()
{
	static uniform_int_distribution<unsigned> u;
	static default_random_engine e;
	return u(e);
}

#ifdef test1
//17.29 接受一个参数作为随机数的种子
unsigned random(unsigned i)
{
	static uniform_int_distribution<unsigned> u;
	static default_random_engine e(i);
	return u(e);
}
#endif // test1

#ifdef test2
//17.30 接收两个参数，表示函数允许返回的最大值以及最小值
unsigned random(unsigned i, unsigned min, unsigned max)
{
	static uniform_int_distribution<unsigned> u(min,max);
	static default_random_engine e(1);
	return u(e);
}
#endif // test2

/*  生成随机浮点数 */
void  random_dou()
{
	vector<double> dvec;
	uniform_real_distribution<double> u(0, 1);
	default_random_engine e;
	for (size_t i = 0; i < 10; ++i)
	{
		cout << u(e) << " ";
	}
	cout << endl;
}

/* 正态分布 */
void normal_dis()
{
	static default_random_engine e;
	static normal_distribution<> n(4, 1.5);
	vector<unsigned> nvec(9);
	for (size_t i = 0; i != 200; ++i)
	{
		unsigned v = lround(n(e));
		if (v < nvec.size())
			++(nvec[v]);
	}
	for (size_t i = 0; i < 9; ++i)
	{
		cout << i << ": " << string(nvec[i], '*') << endl;
	}
	cout << endl;
}

int main()
{
	auto ret1 = random();
	auto ret2 = random(1);
	auto ret3 = random(1, 0, 9);
	cout << ret1 << endl;
	cout << ret2 << endl;
	cout << ret3 << endl;
	cout << endl;
	random_dou();
	normal_dis();
	normal_dis();
	system("pause");
	return 0;
}

