#include<iostream>
#include<stack>
#include<string>
#include<cctype>
using namespace std;
//处理加法括号表达式
int Solve(string exp)
{
	int sum = 0;
	stack<char> istk;
	for (auto c : exp)
	{
		istk.push(c);
		if (c == ')')
		{						
			while (istk.top() != '(')
			{
				if (isdigit(istk.top()))
				{
					sum += istk.top() - '0';
					istk.pop();
				}
				else
					istk.pop();
			}
			istk.pop();
			istk.push(sum + '0');
			sum = 0;
		}
	}
	while (!istk.empty())
	{
		if (isdigit(istk.top()))
		{
			sum += istk.top() - '0';
			istk.pop();
		}
		else
			istk.pop();
     }
	return sum;
}

int main() {

	string exp("1+2+(3+5)+5+(5+1)");
	cout << "result= " << Solve(exp) << endl;
	system("pause");
	return 0;
}