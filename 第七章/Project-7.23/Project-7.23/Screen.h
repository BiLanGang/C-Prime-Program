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
	Screen() = default;//Ĭ�Ϲ��캯��
	Screen(pos ht,pos wd):heghit(ht),width(wd){}
	Screen(pos ht, pos wd, char c) :heghit(ht), width(wd), contents(ht*wd, c) {}
	char get()  const { return contents[cursor]; }//���ص�ǰ���λ���ַ�
	inline char get(pos ht, pos wd) const;//�����ض�λ�õ��ַ�
	Screen &move(pos r, pos c);//�ƶ����
	Screen &set(char);//���õ�ǰ���λ���ַ���ֵ
	Screen &set(pos, pos,char);//����ָ��λ�ù��λ���ַ���ֵ
	Screen &display(std::ostream &os);//��ӡ
	const Screen &display(std::ostream &os) const;	
private:
	pos cursor;
	pos heghit = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};