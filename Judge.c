#include "general.h"	//iArray, iArray_extend

int Judge(void)	//�ж�ʤ��
{
	int i, j;	//ѭ��������iΪ�У�jΪ��

	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			iArray_extend[i+1][j+1] = iArray[i][j];
		}
	}
	
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i][j+1]==1 && iArray_extend[i][j+2]==1 && iArray_extend[i][j+3]==1 && iArray_extend[i][j+4]==1 && iArray_extend[i][j-1]!=1 && iArray_extend[i][j+5]!=1)
			{
				return 1;
			}
			else if (iArray_extend[i][j]==2 && iArray_extend[i][j+1]==2 && iArray_extend[i][j+2]==2 && iArray_extend[i][j+3]==2 && iArray_extend[i][j+4]==2)
			{
				return 2;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j]==1 && iArray_extend[i+2][j]==1 && iArray_extend[i+3][j]==1 && iArray_extend[i+4][j]==1 && iArray_extend[i-1][j]!=1 && iArray_extend[i+5][j]!=1)
			{
				return 1;
			}
			else if (iArray_extend[i][j]==2 && iArray_extend[i+1][j]==2 && iArray_extend[i+2][j]==2 && iArray_extend[i+3][j]==2 && iArray_extend[i+4][j]==2)
			{
				return 2;
			}
		}
	}
	for (i = 1; i <= 11; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i+1][j+1]==1 && iArray_extend[i+2][j+2]==1 && iArray_extend[i+3][j+3]==1 && iArray_extend[i+4][j+4]==1 && iArray_extend[i-1][j-1]!=1 && iArray_extend[i+5][j+5]!=1)
			{
				return 1;
			}
			else if (iArray_extend[i][j]==2 && iArray_extend[i+1][j+1]==2 && iArray_extend[i+2][j+2]==2 && iArray_extend[i+3][j+3]==2 && iArray_extend[i+4][j+4]==2)
			{
				return 2;
			}
		}
	}
	for (i = 5; i <= 15; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			if (iArray_extend[i][j]==1 && iArray_extend[i-1][j+1]==1 && iArray_extend[i-2][j+2]==1 && iArray_extend[i-3][j+3]==1 && iArray_extend[i-4][j+4]==1 && iArray_extend[i+1][j-1]!=1 && iArray_extend[i-5][j+5]!=1)
			{
				return 1;
			}
			else if (iArray_extend[i][j]==2 && iArray_extend[i-1][j+1]==2 && iArray_extend[i-2][j+2]==2 && iArray_extend[i-3][j+3]==2 && iArray_extend[i-4][j+4]==2)
			{
				return 2;
			}
		}
	}
	if (iStep >= 226)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}