#include<string>
#include<stdexcept>
#include<iostream>
using namespace std;

template<unsigned H,unsigned W>
class Screen {
	friend ostream& operator<< <H, W>(ostream &output, const Screen &s);
	friend istream& operator>> (istream &input, Screen<H, W> &s);
public:
	typedef string::size_type  pos;
	Screen() = default;
	Screen(char c):cursor(0),contents(H*W,c){}
	char get() const {
		return contents[cursor];
	}
	char get(pos ht, pos wd) const { auto ret = check(ht, wd); return ret; }
	Screen& set(char c)
	{
		contents[cursor] = c; return *this;
	}
	Screen& set(pos row, pos col, char c)
	{
		auto ret = check(row, col); contents[ret] = c; return *this;
	}
	Screen& move(pos r, pos c)//移动光标
	{
		cursor = check(r, c); return *this;
	}
	Screen& display(std::ostream &os) { do_display(os); return *this; }
	const Screen& display(std::ostream &os) const { do_display(os); return *this; }
private:
	pos  cursor;
	string contents;
	pos check(pos r, pos c) const
	{
		if (r >= H)
			throw out_of_range("invalid row");
		else if (c >= W)
			throw out_of_range("invalid column");
		else
			return (r * W + c);
	}
	void do_display(std::ostream &os) const 
	{
		for (auto i = 0; i < H; ++i) 
		{
			for (auto j = 0; j < W; ++j)
				os << contents[i * W + j];
			os << std::endl;
		}
	}

};
template<unsigned H, unsigned W>
ostream & operator<<(ostream & output, const Screen<H,W>& s)
{
	s.do_display(output);
	return output;
	// TODO: 在此处插入 return 语句
}
template<unsigned H, unsigned W>
istream & operator>>(istream & input, Screen<H, W> & s)
{
	string temp;
	input >> temp;
	if (input)
	{
		s.contents = temp.substr(0, H*W);
	}
	else
	{
		s = Screen<H, W>();
	}
	return input;
	// TODO: 在此处插入 return 语句
}

int main()
{
	Screen<5, 5> myScreen('X');
	myScreen.move(4, 0).set('#');
	cout << myScreen << endl;
	cout << myScreen.get(4, 0) << "\n\n";
	//myScreen.display(cout);
	system("pause");
	return 0;
}


