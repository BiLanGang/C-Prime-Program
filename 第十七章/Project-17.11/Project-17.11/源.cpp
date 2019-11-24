#include<iostream>
#include<bitset>
#include<string>
using namespace std;
#pragma region
//17.11  ���ݽṹ
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
	void reset() const//���ظ�λ����
	{
		x.reset();
	}
	decltype(x[0]) operator[](size_t i)//�����±������
	{
		check(i);
		return x[i];
	}
	//17.12 ���²��Խ��
	void set(size_t pos, bool v)//������λ
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
	//17.12 ����
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