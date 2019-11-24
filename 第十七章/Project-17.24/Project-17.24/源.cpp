#include<iostream>
#include<string>
#include<regex>
#include<algorithm>

using namespace std;
//重排电话号码格式
int main()
{
	string phone("(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})");
	regex r(phone);
	string s;
	string fmt("$2.$5.$7");
	/*我们用一个 $ 后跟子表达式的索引号
					来表示一个特定的子表达式。
					string fmt="$2.$5.$7";  
					将号码格式改为 ddd.ddd.dddd*/
	while (getline(cin, s))
	{
		cout << regex_replace(s, r, fmt) << endl;
		/*s：待查找序列
		  r：用于匹配的正则表达式
		  fmt：输出格式*/
	}
	system("pause");
	return 0;
}