#include<forward_list>
#include<iostream>
using namespace std;
int main()
{
	forward_list<int> flst = { 0,1,2,3,4,5,6,7,8,9 };
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end())
	{
		if (*curr % 2)
			curr = flst.erase_after(prev);//若为奇数，则删除，并移动 curr
		else
		{
			prev = curr;
			++curr;
		}
	}
	for (auto f : flst)
		cout << f << " ";
	cout << endl;
	system("pause");
	return 0;
}