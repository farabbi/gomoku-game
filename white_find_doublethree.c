#include "general.h"

int white_find_doublethree(void)
{
	int i, j;

	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 2;
				if (white_count_livingthree_absolute() >= 2)
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