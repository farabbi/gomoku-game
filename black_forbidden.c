#include "general.h"	//x, y, black_check_five(), black_check_forbiddenpoint()

int black_forbidden(void)
{
	int i, j;
	
	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			iArray_extend[i+1][j+1] = iArray[i][j];
		}
	}

	iArray_extend[x+1][y+1] = 1;

	if (black_check_five())
	{
		return 0;
	}
	else
	{
		if (black_check_forbiddenpoint())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}