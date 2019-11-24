#include<iostream>
#include<bitset>
#include<string>
using namespace std;
#pragma region
//17.11  数据结构
template<unsigned N>
class bit {
private:
	bitset<N> x;
	void check(size_t i)
	{
		if (i >= x.size())
			throw out_of_range("Invalid subscript");
	}
public:
	bit() = default;
	void reset() const//重载复位函数
	{
		x.reset();
	}
	decltype(x[0]) operator[](size_t i)//重载下标运算符
	{
		check(i);
		return x[i];
	}
	//17.12 更新测试结果
	void set(size_t pos, bool v)//重载置位
	{
		check(pos);
		x.set(pos, v);
	}
	decltype(x.size()) size()
	{
		return x.size();
	}
};
#pragma endregion


int main()
{
	bit<10> bitvec;
#ifndef DEBUG
	//17.12 测试
	try {
		bitvec.set(3, true);
		for (size_t i=0;i!=bitvec.size();++i)
		{
			cout << bitvec[i] << " ";
		}
		cout << endl;
		system("pause");
		return 0;
	}
	catch (out_of_range err)
	{
		cerr << err.what() << endl;
		system("pause");
		return -1;
	}

#endif // DEBUG

}