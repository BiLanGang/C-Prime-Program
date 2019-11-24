#include<iostream>
#include<string>
using namespace std;
//6.27，计算整数和
int Sum(initializer_list<int> list)
{
	int sum = 0;
	for (auto beg = list.begin(); beg != list.end(); ++beg)
		sum += *beg;
	return sum;
}
//6.28
class ErrCode
{
private:
	int error;
public:
	ErrCode(int e) {
		error = e;
	}
	int msg()
	{
		return error;
	}
};
void error_msg(ErrCode e,initializer_list<string> list)
{
	cout <<"Error_Code "<< e.msg() << ": ";
	for (const auto &elem : list)
	{
		cout << elem << " ";
	}
	cout << endl;
}
int main()
{
	int result1,result2;
	result1 = Sum({ 0,4,5,6,9,8 });
	result2 = Sum({ 5,6,8,7 });
	cout << result1 << endl;
	cout << result2 << endl;
	string expected, actual;
	cin >> expected >> actual;
	if (expected != actual)
		error_msg(ErrCode(42), { "functionX",expected,actual });
	else
		error_msg(ErrCode(0), { "functionX","okay" });
	system("pause");
	return 0;
}