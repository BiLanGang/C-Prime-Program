#include<iostream>
#include<bitset>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<bitset<8>> vbit = { 1,2,3,5,8,13,21 };
	bitset<8> bitvec;
	cout << vbit[3].to_string() << endl;
	bitvec.set(5, 1);//���ض�λ��λ
	bitvec.flip();//��ת�ض�λ
	cout << bitvec << endl;
	cout << vbit[5].count() << endl;//ͳ��bitset�������ж��ٸ� 1
	cout << vbit[0].size() << endl;//ͳ���ж���λ
	cout << bitvec.reset() << endl;//��λ����ȫ����Ϊ 0��
	cout << vbit[2].to_ullong() << endl;//����һ�� unsigned long long ֵ
	string str("111100001010");
	bitset<8> bit(str);
	/*ʹ�� string ������ʼ����string ���򿽱�,
	�� string �ĸ��±�λ������ʼ�� bitset ��
	��λ*/
	cout << bit[0] << endl;
	bitset<5> bit1("11110000");
	cout << bit1[0] << endl;
	system("pause");
	return 0;
}