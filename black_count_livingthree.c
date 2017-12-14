#include "general.h"	//iArray_extend

int black_count_livingthree(void)	//ºÚÆå»îÈý
{
	int i, j;
	int num_livingthree = 0;

	/*  !0__000_!0  */
	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i][j+1]==0 && iArray_extend[i][j+2]==0 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==1 && iArray_extend[i][j+6]==0 && iArray_extend[i][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j]==0 && iArray_extend[i+2][j]==0 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==1 && iArray_extend[i+6][j]==0 && iArray_extend[i+7][j]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j+1]==0 && iArray_extend[i+2][j+2]==0 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==1 && iArray_extend[i+6][j+6]==0 && iArray_extend[i+7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 7; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i-1][j+1]==0 && iArray_extend[i-2][j+2]==0 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==1 && iArray_extend[i-6][j+6]==0 && iArray_extend[i-7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}

	/*  !0_000__!0  */
	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i][j+1]==0 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==0 && iArray_extend[i][j+6]==0 && iArray_extend[i][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j]==0 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==0 && iArray_extend[i+6][j]==0 && iArray_extend[i+7][j]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j+1]==0 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==0 && iArray_extend[i+6][j+6]==0 && iArray_extend[i+7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 7; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i-1][j+1]==0 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==0 && iArray_extend[i-6][j+6]==0 && iArray_extend[i-7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}

	/*  !0_0_00_!0  */
	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i][j+1]==0 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==0 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==1 && iArray_extend[i][j+6]==0 && iArray_extend[i][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j]==0 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==0 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==1 && iArray_extend[i+6][j]==0 && iArray_extend[i+7][j]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j+1]==0 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==0 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==1 && iArray_extend[i+6][j+6]==0 && iArray_extend[i+7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 7; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i-1][j+1]==0 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==0 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==1 && iArray_extend[i-6][j+6]==0 && iArray_extend[i-7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}

	/*  !0_00_0_!0  */
	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i][j+1]==0 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==0 && iArray_extend[i][j+5]==1 && iArray_extend[i][j+6]==0 && iArray_extend[i][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j]==0 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==0 && iArray_extend[i+5][j]==1 && iArray_extend[i+6][j]==0 && iArray_extend[i+7][j]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i+1][j+1]==0 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==0 && iArray_extend[i+5][j+5]==1 && iArray_extend[i+6][j+6]==0 && iArray_extend[i+7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}
	for (i = 7; i <= 16; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (iArray_extend[i][j]!=1 && iArray_extend[i-1][j+1]==0 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==0 && iArray_extend[i-5][j+5]==1 && iArray_extend[i-6][j+6]==0 && iArray_extend[i-7][j+7]!=1)
			{
				num_livingthree++;
			}
		}
	}

	return num_livingthree;
}