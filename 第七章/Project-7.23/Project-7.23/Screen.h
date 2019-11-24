#pragma once
#include<string>
#include<vector>
class Screen;
class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens;
};
class Screen
{
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos = std::string::size_type;
	Screen() = default;//默认构造函数
	Screen(pos ht,pos wd):heghit(ht),width(wd){}
	Screen(pos ht, pos wd, char c) :heghit(ht), width(wd), contents(ht*wd, c) {}
	char get()  const { return contents[cursor]; }//返回当前光标位置字符
	inline char get(pos ht, pos wd) const;//返回特定位置的字符
	Screen &move(pos r, pos c);//移动光标
	Screen &set(char);//设置当前光标位置字符新值
	Screen &set(pos, pos,char);//设置指定位置光标位置字符新值
	Screen &display(std::ostream &os);//打印
	const Screen &display(std::ostream &os) const;	
private:
	pos cursor;
	pos heghit = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};