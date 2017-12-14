#include "general.h"

int white_count_livingtwo(void)
{
	int i, j, k;
	int num_0, num_1, num_2, num_livingtwo = 0;

	/*  ___00_
		__0_0_
		__00__

		___00_
		_0__0_
		_0_0__

		__0_0_
		_0__0_
		_00___

		__00__
		_0_0__
		_00___  */
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j] == 0 && iArray_extend[i][j+5] == 0)
			{
				num_0 = 0;
				num_1 = 0;
				num_2 = 0;
				for (k = 1; k <= 4; ++k)
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
				if (num_0 == 2)
				{
					if (num_2 == 2)
					{
						num_livingtwo++;
					}
				}
			}
		}
	}
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j] == 0 && iArray_extend[i+5][j] == 0)
			{
				num_0 = 0;
				num_1 = 0;
				num_2 = 0;
				for (k = 1; k <= 4; ++k)
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
				if (num_0 == 2)
				{
					if (num_2 == 2)
					{
						num_livingtwo++;
					}
				}
			}
		}
	}
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j] == 0 && iArray_extend[i+5][j+5] == 0)
			{
				num_0 = 0;
				num_1 = 0;
				num_2 = 0;
				for (k = 1; k <= 4; ++k)
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
				if (num_0 == 2)
				{
					if (num_2 == 2)
					{
						num_livingtwo++;
					}
				}
			}
		}
	}
	for (i = 6; i <= 15; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (iArray_extend[i][j] == 0 && iArray_extend[i-5][j+5] == 0)
			{
				num_0 = 0;
				num_1 = 0;
				num_2 = 0;
				for (k = 1; k <= 4; ++k)
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
				if (num_0 == 2)
				{
					if (num_2 == 2)
					{
						num_livingtwo++;
					}
				}
			}
		}
	}

	return num_livingtwo;
}