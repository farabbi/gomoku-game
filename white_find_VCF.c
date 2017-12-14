#include <stdio.h>	//printf()
#include "general.h"

struct point white_VCFpoint;
int num_white_VCFround;

void black_defense(void);

int white_find_VCF(void)	//包括了43killing, 改自black_find_VCF()
{
	int i, j;
	int p = 0;
	int VCFexist = 0;
	int iArray_extend_save[17][17];
	struct point possibleVCFpoint[300];

	if (num_white_VCFround > 100)
	{
		return 0;
	}

	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			iArray_extend_save[i][j] = iArray_extend[i][j];
		}
	}

	for (i = 1; i <= 15; i++)
	{
		for (j = 1; j <= 15; j++)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 2;
				if (white_count_fightingfour())
				{
					possibleVCFpoint[p].x = i;
					possibleVCFpoint[p].y = j;
					p++;
				}
				iArray_extend[i][j] = 0;
			}
		}
	}
	possibleVCFpoint[p].x = 0;
	possibleVCFpoint[p].y = 0;

	for (p = 0; possibleVCFpoint[p].x; ++p)
	{
		iArray_extend[possibleVCFpoint[p].x][possibleVCFpoint[p].y] = 2;
		black_defense();
		if ((white_count_livingthree() || white_count_fightingfour()) && !black_count_four())
		{
			VCFexist = 1;
			break;
		}
		else
		{
			num_white_VCFround++;
			VCFexist = white_find_VCF();
		}
		if (!VCFexist)
		{
			for (i = 0; i <= 16; ++i)
			{
				for (j = 0; j <= 16; ++j)
				{
					iArray_extend[i][j] = iArray_extend_save[i][j];
				}
			}
		}
		else
		{
			for (i = 0; i <= 16; ++i)
			{
				for (j = 0; j <= 16; ++j)
				{
					iArray_extend[i][j] = iArray_extend_save[i][j];
				}
			}
			break;
		}
	}

	if (!VCFexist)
	{
		return 0;
	}
	else
	{
		white_VCFpoint.x = possibleVCFpoint[p].x;
		white_VCFpoint.y = possibleVCFpoint[p].y;
		return 1;
	}
}

void black_defense(void)
{
	if (white_find_four())
	{
		iArray_extend[findpt.x][findpt.y] = 1;
	}
	else
	{
		printf("error: white finding VCF\n");
	}
}