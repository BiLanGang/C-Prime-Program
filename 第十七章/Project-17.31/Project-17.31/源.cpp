#include<iostream>
#include<string>
#include<vector>
#include<random>
#include<cmath>

using namespace std;
/* ��������Ϸ */
bool play(bool is)
{

	static default_random_engine e;
	static uniform_int_distribution<> u(1, 6);
	unsigned Computer, Player;
	if (is)
	{	
		cout << "���������ӣ�" << endl;
		Computer = u(e);
		cout << "Computer: " << Computer << endl;
		cout << "��������ӣ�" << endl;
		Player = u(e);
		cout << "Player: " << Player << endl;
		if (Computer >= Player)
			return true;
		else
			return false;
	}
	else
	{		
		cout << "��������ӣ�" << endl;
		Player = u(e);
		cout << "Player: " << Player << endl;
		cout << "���������ӣ�" << endl;
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
	cout << "------����ӭ������������Ϸ��------" << endl;
	cout << "-----------����Ϸ��ʼ��-----------\n";
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
	cout << "-----------����Ϸ������-----------\n";
	system("pause");
	return 0;
}

/* 17.31 ����������е� b �� e ������ do..while ѭ���ڣ�
   �𣺽��ᵼ��ÿ�ε����������ͬһ����
       ��ÿ����Ϸ����ͬһ���û������ԣ����֡�
	   
   17.32 ����� resp ������ѭ���ڣ�
   �𣺽��ᵼ�³��򱨴�resp δ���塣 */