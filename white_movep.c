#include "general.h"

void white_movep(int row, int column)
{
	iArray[row][column] = 2;
	pBoardArray[row][column] = "��";
	x = row;
	y = column;
}