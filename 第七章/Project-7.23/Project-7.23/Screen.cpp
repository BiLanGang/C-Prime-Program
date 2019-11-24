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
	// TODO: �ڴ˴����� return ���
}

Screen & Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
	// TODO: �ڴ˴����� return ���
}

Screen & Screen::set(pos r, pos col, char c)
{
	pos row = r * width + col;
	contents[row] = c;
	return *this;
	// TODO: �ڴ˴����� return ���
}

Screen & Screen::display(std::ostream & os)
{
	do_display(os);
	return *this;
	// TODO: �ڴ˴����� return ���
}

const Screen & Screen::display(std::ostream & os) const
{
	do_display(os);
	return *this;
	// TODO: �ڴ˴����� return ���
}

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.heghit*s.width, ' ');
}
