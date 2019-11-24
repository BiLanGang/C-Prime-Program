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
	编译器定义的局部静态变量：
	__func__  存放函数名     
	__FILE__  存放当前文件名的字符串字面值
	__LINE__  存放当前行号的整形字面值
	__TIME__  存放文件编译时间的字符串字面值
	__DATE__  存放文件编译日期的字符串字面值
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