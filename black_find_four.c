#include "general.h"

int black_find_four(void)	//�����㷨�ķ�ʱ����������Ϊֱ�Ӳ����ض�ģʽ���㷨
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

