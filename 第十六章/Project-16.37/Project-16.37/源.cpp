#include<algorithm>
#include<iostream> 
#ifdef DEBUG
//16.37 ��׼�� max ����
int main()
{
	int a = 9, b = 4;
	double c = 12.6;
	auto ret = std::max(a, b);
	std::cout << ret << std::endl;
	system("pause");
	return 0;
}

/*��ʹ�ñ�׼�⺯�� max ʱ�����ܴ����������Ͳ�ͬ�Ĳ�������Ϊ max �������βζ���ͬһ��ģ������*/
#endif // DEBUG

#ifndef test
//16.39  ģ�庯�� compare ��ʽģ��ʵ��
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




