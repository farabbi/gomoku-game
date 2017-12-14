#include "general.h"

int white_find_four(void)	//¸Ä×Ôwhite_count_fightingfour()
{
	int i, j, k;
	int num_0, num_1, num_2;

	/*  0000_
		_0000
		000_0
		0_000
		00_00  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			num_0 = 0;
			num_1 = 0;
			num_2 = 0;
			for (k = 0; k <= 4; ++k)
			{
				if (iArray_extend[i][j+k] == 0)
				{
					num_0++;
				}
				else if (iArray_extend[i][j+k] == 1)
				{
					num_1++;
				}
				else if (iArray_extend[i][j+k] == 2)
				{
					num_2++;
				}
			}
			if (num_0 == 1)
			{
				if (num_2 == 4)
				{
					for (k = 0; k <= 4; ++k)
					{
						if (iArray_extend[i][j+k] == 0)
						{
							findpt.x = i;
							findpt.y = j+k;
							return 1;
						}
					}
				}
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			num_0 = 0;
			num_1 = 0;
			num_2 = 0;
			for (k = 0; k <= 4; ++k)
			{
				if (iArray_extend[i+k][j] == 0)
				{
					num_0++;
				}
				else if (iArray_extend[i+k][j] == 1)
				{
					num_1++;
				}
				else if (iArray_extend[i+k][j] == 2)
				{
					num_2++;
				}
			}
			if (num_0 == 1)
			{
				if (num_2 == 4)
				{
					for (k = 0; k <= 4; ++k)
					{
						if (iArray_extend[i+k][j] == 0)
						{
							findpt.x = i+k;
							findpt.y = j;
							return 1;
						}
					}
				}
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			num_0 = 0;
			num_1 = 0;
			num_2 = 0;
			for (k = 0; k <= 4; ++k)
			{
				if (iArray_extend[i+k][j+k] == 0)
				{
					num_0++;
				}
				else if (iArray_extend[i+k][j+k] == 1)
				{
					num_1++;
				}
				else if (iArray_extend[i+k][j+k] == 2)
				{
					num_2++;
				}
			}
			if (num_0 == 1)
			{
				if (num_2 == 4)
				{
					for (k = 0; k <= 4; ++k)
					{
						if (iArray_extend[i+k][j+k] == 0)
						{
							findpt.x = i+k;
							findpt.y = j+k;
							return 1;
						}
					}
				}
			}
		}
	}
	for (i = 5; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			num_0 = 0;
			num_1 = 0;
			num_2 = 0;
			for (k = 0; k <= 4; ++k)
			{
				if (iArray_extend[i-k][j+k] == 0)
				{
					num_0++;
				}
				else if (iArray_extend[i-k][j+k] == 1)
				{
					num_1++;
				}
				else if (iArray_extend[i-k][j+k] == 2)
				{
					num_2++;
				}
			}
			if (num_0 == 1)
			{
				if (num_2 == 4)
				{
					for (k = 0; k <= 4; ++k)
					{
						if (iArray_extend[i-k][j+k] == 0)
						{
							findpt.x = i-k;
							findpt.y = j+k;
							return 1;
						}
					}
				}
			}
		}
	}

	return 0;
}