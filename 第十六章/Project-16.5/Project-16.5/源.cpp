#include<iostream>
using namespace std;
/*���������������ĺ���ģ��*/
template<typename T, size_t n>
void print(T (&arr)[n])
{
	for (const auto emel : arr)
		cout << emel << " ";
	cout << endl;
}
#pragma region
/*  16.6 �Զ�������������͵� begin �� end ����*/
template<typename T,size_t n>
T* Mybegin(T(&arr)[n])
{
	return arr;
}
template<typename T, size_t n>
T* Myend(T(&arr)[n])
{
	return arr+n;
}
#pragma endregion

#pragma region
/*16.7 ���ظ��������С*/
template<typename T,size_t n> constexpr
size_t length(T(&arr)[n])
{
	return n;
}
#pragma endregion
int main()
{
	int a[] = { 0,1,2,3,4,5,6 };
	double b[] = { 0,1,2,3,4,5,6,7,8,9 };
	print(a);
	print(b);
	for (auto it = Mybegin(a);it != Myend(a);++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << length(b) << endl;
	system("pause");
	return 0;
}