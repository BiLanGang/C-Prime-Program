#include<vector>
#include<list>
#include<string>
#include<iostream>
using namespace std;
template<typename I,typename V>
I Find(I begin, I end, const V &val)
{
	while (begin != end)
	{
		if (val == (*begin))//�ҵ���ӦԪ�أ�����ָ���Ԫ�صĵ�����
		{
			cout << "���ҳɹ�" << endl;
			return begin;
		}
		else
			++begin;//����������
	}
	return end;//�Ҳ���������β�������
 }
int main()
{
	vector<int> ivec = { 0,1,2,3,4,5,6 };
	list<string> sli = { "a","an","the","and" };
	auto iret = Find(ivec.begin(), ivec.end(), 3);
	if (iret != ivec.end())
		cout << *iret << endl;
	else
		cout << "����ʧ��" << endl;
	auto sret = Find(sli.begin(), sli.end(), "the");	
	if (sret != sli.end())
		cout << *sret << endl;
	else
		cout << "����ʧ��" << endl;
	system("pause");
	return 0;

}