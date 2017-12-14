#include "general.h"

int white_count_livingthree_doubledpattern(void)
{
	int i, j;
	int num_livingthree_doubledpattern = 0;

	/*  __000__: À„¡À¡Ω±È  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 9; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i][j+1]==0 && iArray_extend[i][j+2]==1 &&iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==0 && iArray_extend[i][j+6]==0)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}
	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j]==0 && iArray_extend[i+2][j]==1 &&iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==0 && iArray_extend[i+6][j]==0)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}
	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= 9; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j+1]==0 && iArray_extend[i+2][j+2]==1 &&iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==0 && iArray_extend[i+6][j+6]==0)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}
	for (i = 7; i <= 15; ++i)
	{
		for (j = 1; j <= 9; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i-1][j+1]==0 && iArray_extend[i-2][j+2]==1 &&iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==0 && iArray_extend[i-6][j+6]==0)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}

	return num_livingthree_doubledpattern;
}