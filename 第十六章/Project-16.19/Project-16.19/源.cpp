#include<iostream>
#include<vector>
#include<list>

#ifdef DEBUG

template<typename T>
void print(std::ostream &out, T& con)
{
	using size_type = typename T::size_type;
	for (size_type i = 0; i != con.size(); ++i)
		std::cout << con[i] << " ";
	std::cout << std::endl;
}

int main()
{
	std::vector<int> ivec = { 0,1,2,3,4,5 };
	print(std::cout, ivec);
	system("pause");
	return 0;
}
#endif // DEBUG

#ifndef test
//16.20  采用迭代器输出打印容器内容
#include<string>
using namespace std;
	template<typename T>
	void print(ostream &out, T& con)
	{
		for (auto it = con.begin(); it != con.end(); ++it)
			cout << *it << " ";
		cout << endl;
	}

	int main()
	{
		vector<string> svec = { "a","an","the","by" };
		print(cout, svec);
		system("pause");
		return 0;
}

#endif // test


