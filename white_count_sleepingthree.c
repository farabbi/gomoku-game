#include "general.h"

int white_count_sleepingthree(void)
{
	int i, j;
	int num_sleepingthree = 0;
	
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 2;
				if (white_count_fightingfour())
				{
					num_sleepingthree++;
				}
				iArray_extend[i][j] = 0;
			}
		}
	}
	
	return num_sleepingthree;
}