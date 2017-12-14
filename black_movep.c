#include "general.h"

void black_movep(int row, int column)
{
	iArray[row][column] = 1;
	pBoardArray[row][column] = "¡ð";
	x = row;
	y = column;
}