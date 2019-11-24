#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word, sum;
	/*连接字符串，并输出*/
	/*while (cin >> word)
		sum += word;
	cout << sum << endl;*/

	while (cin >> word)
		sum = sum + word + " ";
	cout << sum<<endl;
	system("pause");
	return 0;
}