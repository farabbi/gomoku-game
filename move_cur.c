#include <windows.h>

void move_cur(int x,int y)  //�ƶ���굽x, y
{
	HANDLE hOut;
	COORD pos= {2*y, x};	//Ӧ���ڱ�����, �˴������޸�
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}