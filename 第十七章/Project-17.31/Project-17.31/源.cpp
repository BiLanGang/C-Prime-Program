#include<iostream>
#include<string>
#include<vector>
#include<random>
#include<cmath>

using namespace std;
/* 掷骰子游戏 */
bool play(bool is)
{

	static default_random_engine e;
	static uniform_int_distribution<> u(1, 6);
	unsigned Computer, Player;
	if (is)
	{	
		cout << "电脑掷骰子：" << endl;
		Computer = u(e);
		cout << "Computer: " << Computer << endl;
		cout << "玩家掷骰子：" << endl;
		Player = u(e);
		cout << "Player: " << Player << endl;
		if (Computer >= Player)
			return true;
		else
			return false;
	}
	else
	{		
		cout << "玩家掷骰子：" << endl;
		Player = u(e);
		cout << "Player: " << Player << endl;
		cout << "电脑掷骰子：" << endl;
		Computer = u(e);
		cout << "Computer: " << Computer << endl;
		if (Computer >= Player)
			return true;
		else
			return false;
	}
}

int main()
{
	cout << "------【欢迎来到掷骰子游戏】------" << endl;
	cout << "-----------【游戏开始】-----------\n";
	string resp;
	
	do
	{	
		default_random_engine e;
		bernoulli_distribution b;
		bool first = b(e);
		cout << (first ? "Computer go first" : "You get to go first") << endl;
		cout << ((play(first)) ? "sorry, you lost" : "congrats, you won") << endl;
		cout << "play again? Enter 'yes' or 'no'" << endl;
	} while (cin >> resp && resp[0] == 'y');
	cout << "-----------【游戏结束】-----------\n";
	system("pause");
	return 0;
}

/* 17.31 如果将本例中的 b 和 e 定义在 do..while 循环内？
   答：将会导致每次的随机数都是同一个。
       即每次游戏都是同一个用户（电脑）开局。
	   
   17.32 如果将 resp 定义在循环内？
   答：将会导致程序报错，resp 未定义。 */