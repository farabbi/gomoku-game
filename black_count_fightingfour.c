#include "general.h"	//iArray_extend

int black_count_fightingfour(void)	//ºÚÆå³åËÄ
{
	int i, j;
	int num_fightingfour = 0;

	/*  0[_0000_]!0  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==0 && iArray_extend[i][j-1]==1 && iArray_extend[i][j+6]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==0 && iArray_extend[i-1][j]==1 && iArray_extend[i+6][j]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==0 && iArray_extend[i-1][j-1]==1 && iArray_extend[i+6][j+6]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 6; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==0 && iArray_extend[i+1][j-1]==1 && iArray_extend[i-6][j+6]!=1)
			{
				num_fightingfour++;
			}
		}
	}

	/*  !0[_0000_]0  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j+5]==0 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j+6]==1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i+5][j]==0 && iArray_extend[i-1][j]!=1 && iArray_extend[i+6][j]==1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i+5][j+5]==0 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i+6][j+6]==1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 6; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i-5][j+5]==0 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i-6][j+6]==1)
			{
				num_fightingfour++;
			}
		}
	}

	/*  (!0&&!_)[0000_]!0  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==0 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j-1]!=0 && iArray_extend[i][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==0 && iArray_extend[i-1][j]!=1 && iArray_extend[i-1][j]!=0 && iArray_extend[i+5][j]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==0 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i-1][j-1]!=0 && iArray_extend[i+5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 5; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==0 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i+1][j-1]!=0 && iArray_extend[i-5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}

	/*  !0[_0000](!0&&!_)  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j+5]!=1 && iArray_extend[i][j+5]!=0)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i-1][j]!=1 && iArray_extend[i+5][j]!=1 && iArray_extend[i+5][j]!=0)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i+5][j+5]!=1 && iArray_extend[i+5][j+5]!=0)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 5; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==0 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i-5][j+5]!=1 && iArray_extend[i-5][j+5]!=0)
			{
				num_fightingfour++;
			}
		}
	}

	/*  !0[0_000]!0  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i][j+1]==0 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j]==0 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i-1][j]!=1 && iArray_extend[i+5][j]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j+1]==0 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i+5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 5; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i-1][j+1]==0 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i-5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}

	/*  !0[000_0]!0  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==0 && iArray_extend[i][j+4]==1 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==0 && iArray_extend[i+4][j]==1 && iArray_extend[i-1][j]!=1 && iArray_extend[i+5][j]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==0 && iArray_extend[i+4][j+4]==1 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i+5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 5; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==0 && iArray_extend[i-4][j+4]==1 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i-5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}

	/*  !0[00_00]!0  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==0 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==0 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i-1][j]!=1 && iArray_extend[i+5][j]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==0 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i+5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}
	for (i = 5; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==0 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i-5][j+5]!=1)
			{
				num_fightingfour++;
			}
		}
	}

	return num_fightingfour;
}