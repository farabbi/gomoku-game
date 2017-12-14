#include "general.h"

int black_find_four(void)	//若该算法耗费时间过长，则改为直接查找特定模式的算法
{
	int i, j;
	
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 1;
				if (black_check_five())
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

