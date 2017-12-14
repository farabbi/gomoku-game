#include "general.h"	//iArray_extend

int black_count_livingthree_doubledpattern(void)
{
	int i, j;
	int num_livingthree_doubledpattern = 0;

	/*  !0__000__!0: À„¡À¡Ω±È  */
	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 8; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i][j+1]==0 && iArray_extend[i][j+2]==0 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==1 && iArray_extend[i][j+6]==0 && iArray_extend[i][j+7]==0 && iArray_extend[i][j+8]!=1)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}
	for (i = 0; i <= 8; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j]==0 && iArray_extend[i+2][j]==0 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==1 && iArray_extend[i+6][j]==0 && iArray_extend[i+7][j]==0 && iArray_extend[i+8][j]!=1)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}
	for (i = 0; i <= 8; ++i)
	{
		for (j = 0; j <= 8; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j+1]==0 && iArray_extend[i+2][j+2]==0 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==1 && iArray_extend[i+6][j+6]==0 && iArray_extend[i+7][j+7]==0 && iArray_extend[i+8][j+8]!=1)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}
	for (i = 8; i <= 16; ++i)
	{
		for (j = 0; j <= 8; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i-1][j+1]==0 && iArray_extend[i-2][j+2]==0 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==1 && iArray_extend[i-6][j+6]==0 && iArray_extend[i-7][j+7]==0 && iArray_extend[i-8][j+8]!=1)
			{
				num_livingthree_doubledpattern++;
			}
		}
	}

	return num_livingthree_doubledpattern;
}