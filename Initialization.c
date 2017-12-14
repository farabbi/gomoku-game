#include "general.h"

void Initialization(void)
{
	int i, j;	//循环变量，i为行，j为列
	
	/*  给数组赋初值(图像化的棋盘和图像化的棋盘原样), pBoardArray[行][列], pBoardArray_original[行][列]  */
	pBoardArray_original[0][0] = pBoardArray[0][0] = "┏";
	pBoardArray_original[0][14] = pBoardArray[0][14] = "┓";
	pBoardArray_original[14][0] = pBoardArray[14][0] = "┗";
	pBoardArray_original[14][14] = pBoardArray[14][14] = "┛";
	for (j = 1; j <= 13; ++j)
	{
		pBoardArray_original[0][j] = pBoardArray[0][j] = "┯";
	}
	for (i = 1; i <= 13; ++i)
	{
		pBoardArray_original[i][0] = pBoardArray[i][0] = "┠";
	}
	for (i = 1; i <= 13; ++i)
	{
		pBoardArray_original[i][14] = pBoardArray[i][14] = "┨";
	}
	for (j = 1; j <= 13; ++j)
	{
		pBoardArray_original[14][j] = pBoardArray[14][j] = "┷";
	}
	for (i = 1; i <= 13; ++i)
	{
		for (j = 1; j <= 13; ++j)
		{
			pBoardArray_original[i][j] = pBoardArray[i][j] = "┼";
		}
	}

	/*  给数组赋初值(数字化的棋盘), iArray[行][列]  */
	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			iArray[i][j] = 0;
		}
	}

	/*  给数组赋初值(数字化的棋盘(含边界)), iArray_extend[行][列]  */
	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			iArray_extend[i][j] = 3;
		}
	}
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			iArray_extend[i][j] = 0;
		}
	}

	/*  给iRegret_x[0], iRegret_y[0]赋初值  */
	iRegret_x[0] = 7;
	iRegret_y[0] = 7;
}