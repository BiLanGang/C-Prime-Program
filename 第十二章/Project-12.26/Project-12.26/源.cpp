#include<iostream>
#include<memory>
#include<string>    

using namespace std;
int main() {
	allocator<string> alloc;
	auto const p = alloc.allocate(10);
	string s;
	auto q = p;
	while (cin >> s && q != p + 10) {
		alloc.construct(q++, s);
	}
	//cout << *p << endl;
	while (q != p)
	{
		alloc.destroy(--q);
	}
	alloc.deallocate(p, 100);

	system("pause");
	return 0;
}