#include <stdlib.h>	//system()
#include "general.h"	//iMode, pBoardArray, pBoardArray_original, iArray, PrintBoard(), x, y

int iRegret_x[300], iRegret_y[300];	//全部落子信息，悔棋用
int iStep = 1;	//当前步数，两人各落一子算两步

void regret(void)
{
	if (iMode == 1)
	{
		if (iStep > 1)
		{
			iStep--;
			pBoardArray[iRegret_x[iStep]][iRegret_y[iStep]] = pBoardArray_original[iRegret_x[iStep]][iRegret_y[iStep]];
			iArray[iRegret_x[iStep]][iRegret_y[iStep]] = 0;
			system("cls");
			PrintBoard();
		}
		x = iRegret_x[iStep-1];
		y = iRegret_y[iStep-1];
		move_cur(x, y);
	}
	else
	{
		if (iStep > 1)
		{
			iStep--;
			pBoardArray[iRegret_x[iStep]][iRegret_y[iStep]] = pBoardArray_original[iRegret_x[iStep]][iRegret_y[iStep]];
			iArray[iRegret_x[iStep]][iRegret_y[iStep]] = 0;
			iStep--;
			pBoardArray[iRegret_x[iStep]][iRegret_y[iStep]] = pBoardArray_original[iRegret_x[iStep]][iRegret_y[iStep]];
			iArray[iRegret_x[iStep]][iRegret_y[iStep]] = 0;
			system("cls");
			PrintBoard();
		}
		x = iRegret_x[iStep-1];
		y = iRegret_y[iStep-1];
		move_cur(x, y);
	}
}