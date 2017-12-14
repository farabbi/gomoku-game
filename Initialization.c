#include "general.h"

void Initialization(void)
{
	int i, j;	//ѭ��������iΪ�У�jΪ��
	
	/*  �����鸳��ֵ(ͼ�񻯵����̺�ͼ�񻯵�����ԭ��), pBoardArray[��][��], pBoardArray_original[��][��]  */
	pBoardArray_original[0][0] = pBoardArray[0][0] = "��";
	pBoardArray_original[0][14] = pBoardArray[0][14] = "��";
	pBoardArray_original[14][0] = pBoardArray[14][0] = "��";
	pBoardArray_original[14][14] = pBoardArray[14][14] = "��";
	for (j = 1; j <= 13; ++j)
	{
		pBoardArray_original[0][j] = pBoardArray[0][j] = "��";
	}
	for (i = 1; i <= 13; ++i)
	{
		pBoardArray_original[i][0] = pBoardArray[i][0] = "��";
	}
	for (i = 1; i <= 13; ++i)
	{
		pBoardArray_original[i][14] = pBoardArray[i][14] = "��";
	}
	for (j = 1; j <= 13; ++j)
	{
		pBoardArray_original[14][j] = pBoardArray[14][j] = "��";
	}
	for (i = 1; i <= 13; ++i)
	{
		for (j = 1; j <= 13; ++j)
		{
			pBoardArray_original[i][j] = pBoardArray[i][j] = "��";
		}
	}

	/*  �����鸳��ֵ(���ֻ�������), iArray[��][��]  */
	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			iArray[i][j] = 0;
		}
	}

	/*  �����鸳��ֵ(���ֻ�������(���߽�)), iArray_extend[��][��]  */
	for (i = 0; i <= 16; ++i)
	{
		for (j = 0; j <= 16; ++j)
		{
			iArray_extend[i][j] = 3;
		}
	}
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			iArray_extend[i][j] = 0;
		}
	}

	/*  ��iRegret_x[0], iRegret_y[0]����ֵ  */
	iRegret_x[0] = 7;
	iRegret_y[0] = 7;
}