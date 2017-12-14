#include "general.h"	//iArray_extend

int black_count_livingfour(void)	//ºÚÆå»îËÄ
{
	int i, j;
	int num_livingfour = 0;
	
	/*  !0[_0000_]!0  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]== 0 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==0 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j+6]!=1)
			{
				num_livingfour++;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]== 0 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==0 && iArray_extend[i-1][j]!=1 && iArray_extend[i+6][j]!=1)
			{
				num_livingfour++;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]== 0 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==0 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i+6][j+6]!=1)
			{
				num_livingfour++;
			}
		}
	}
	for (i = 6; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]== 0 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==0 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i-6][j+6]!=1)
			{
				num_livingfour++;
			}
		}
	}
	
	return num_livingfour;
}