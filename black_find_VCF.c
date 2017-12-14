#include <stdio.h>	//printf()
#include "general.h"

struct point black_VCFpoint;
int num_black_VCFround;

void white_defense(void);

int black_find_VCF(void)	//°üÀ¨ÁË43killing
{
	int i, j;
	int p = 0;
	int VCFexist = 0;
	int iArray_extend_save[17][17];
	struct point possibleVCFpoint[300];

	if (num_black_VCFround > 100)
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
				iArray_extend[i][j] = 1;
				if (black_count_fightingfour() == 1)
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
		iArray_extend[possibleVCFpoint[p].x][possibleVCFpoint[p].y] = 1;
		white_defense();
		if (black_count_livingthree_absolute()==1 && !white_count_fightingfour())
		{
			VCFexist = 1;
			break;
		}
		else
		{
			num_black_VCFround++;
			VCFexist = black_find_VCF();
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
		black_VCFpoint.x = possibleVCFpoint[p].x;
		black_VCFpoint.y = possibleVCFpoint[p].y;
		return 1;
	}
}

void white_defense(void)
{
	if (black_find_four())
	{
		iArray_extend[findpt.x][findpt.y] = 2;
	}
	else
	{
		printf("error: black finding VCF\n");
	}
}