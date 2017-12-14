#include "general.h"

int black_find_livingthree(void)
{
	int i, j;
	
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 1;
				if (black_count_livingfour()==1 && black_count_fightingfour()==0 && black_count_livingthree_absolute()<=1)
				{
					findpt.x = i;
					findpt.y = j;
					return 1;
				}
				iArray_extend[i][j] = 0;
			}
		}
	}

	return 0;
}