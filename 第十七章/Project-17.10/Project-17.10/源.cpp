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
	bitvec.set(5, 1);//将特定位置位
	bitvec.flip();//翻转特定位
	cout << bitvec << endl;
	cout << vbit[5].count() << endl;//统计bitset对象中有多少个 1
	cout << vbit[0].size() << endl;//统计有多少位
	cout << bitvec.reset() << endl;//复位（即全都置为 0）
	cout << vbit[2].to_ullong() << endl;//返回一个 unsigned long long 值
	string str("111100001010");
	bitset<8> bit(str);
	/*使用 string 拷贝初始化，string 反向拷贝,
	即 string 的高下标位用来初始化 bitset 的
	低位*/
	cout << bit[0] << endl;
	bitset<5> bit1("11110000");
	cout << bit1[0] << endl;
	system("pause");
	return 0;
}