#include <windows.h>

void move_cur(int x,int y)  //移动光标到x, y
{
	HANDLE hOut;
	COORD pos= {2*y, x};	//应用于本程序, 此处作了修改
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}