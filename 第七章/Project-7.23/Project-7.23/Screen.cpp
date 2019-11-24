#include "Screen.h"

inline char Screen::get(pos ht, pos wd) const
{
	pos row = ht * width;
	return contents[row + wd];
}

Screen & Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
	// TODO: 在此处插入 return 语句
}

Screen & Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
	// TODO: 在此处插入 return 语句
}

Screen & Screen::set(pos r, pos col, char c)
{
	pos row = r * width + col;
	contents[row] = c;
	return *this;
	// TODO: 在此处插入 return 语句
}

Screen & Screen::display(std::ostream & os)
{
	do_display(os);
	return *this;
	// TODO: 在此处插入 return 语句
}

const Screen & Screen::display(std::ostream & os) const
{
	do_display(os);
	return *this;
	// TODO: 在此处插入 return 语句
}

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.heghit*s.width, ' ');
}
