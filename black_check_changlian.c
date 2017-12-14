#include "general.h"	//iArray, iArray_extend, x, y

int black_check_changlian(void)
{
	int i, j;	//循环变量，i为行，j为列
	
	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			iArray_extend[i+1][j+1] = iArray[i][j];
		}
	}
	
	iArray_extend[x+1][y+1] = 1;
	
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==1)
			{
				return 1;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==1)
			{
				return 1;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==1)
			{
				return 1;
			}
		}
	}
	for (i = 6; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==1)
			{
				return 1;
			}
		}
	}
	return 0;
}