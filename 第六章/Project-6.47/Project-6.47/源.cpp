#include<iostream>
#include<string>
#include<vector>
#include<cassert>
//#define NDEBUG
using namespace std;
void read_vi(vector<int>::const_iterator iterator_begin, vector<int>::const_iterator iterator_end) {
#ifndef NDEBUG
	cerr << iterator_end - iterator_begin << " " << __func__ << " " << __FILE__ << " "
		<< __LINE__ << " " << __TIME__ << " " << __DATE__ << " ";
	/*
	����������ľֲ���̬������
	__func__  ��ź�����     
	__FILE__  ��ŵ�ǰ�ļ������ַ�������ֵ
	__LINE__  ��ŵ�ǰ�кŵ���������ֵ
	__TIME__  ����ļ�����ʱ����ַ�������ֵ
	__DATE__  ����ļ��������ڵ��ַ�������ֵ
	*/
#endif // !NDEBUG
	if (iterator_begin != iterator_end) {
		cout << *iterator_begin <<endl;
		return read_vi(++iterator_begin, iterator_end);
	}
	else {
		cout << endl;
		return;
	}
}
int main()
{
	vector<int> v{ 1,2,3,4,5 };
	read_vi(v.begin(), v.end());
	system("pause");
	return 0;
}