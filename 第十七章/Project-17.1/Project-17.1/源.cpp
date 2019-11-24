#include<iostream>
#include<string>
#include<tuple>
#include<vector>
#include<utility>

using namespace std;

int main()
{
#ifdef DEBUG
	//17.1
	tuple<int, int, int> threeI(10, 20, 30);
	auto temp = get<1>(threeI);
	cout << temp << endl;
#endif // DEBUG

#ifndef test
	//17.2
	tuple<string, vector<string>, pair<string, int>> item("structure", { "an","the","and" }, { "wang",22 });
	typedef decltype(item) trans;
	tuple_element<1,trans>::type temp = get<1>(item);
	cout << temp[0] << endl;

#endif // !test

	system("pause");
	return 0;
}