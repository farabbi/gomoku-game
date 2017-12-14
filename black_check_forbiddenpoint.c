#include "general.h"	//iArray, iArray_extend, black_check_changlian(), black_count_four(), black_count_livingthree_absolute()

int black_check_forbiddenpoint(void)
{
	int orinum, nownum;
	
	if (black_check_changlian())
	{
		return 1;
	}
	
	iArray_extend[x+1][y+1] = 0;
	orinum = black_count_four();
	iArray_extend[x+1][y+1] = 1;
	nownum = black_count_four();
	if (nownum-orinum >= 2)
	{
		return 1;
	}
	
	iArray_extend[x+1][y+1] = 0;
	orinum = black_count_livingthree_absolute();
	iArray_extend[x+1][y+1] = 1;
	nownum = black_count_livingthree_absolute();
	if (nownum-orinum >= 2)
	{
		return 1;
	}
	
	return 0;
}