#include <stdio.h>	//printf()
#include "general.h"	//pBoardArray

void PrintBoard(void)	//��ӡ���̼�����˵��
{
	int i, j;	//ѭ��������iΪ�У�jΪ��
	
	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			printf("%s", pBoardArray[i][j]);
		}
		printf("%d", 15-i);
		printf("\n");
	}
	printf(" A B C D E F G H I J K L M N O\n");
	printf("w: ��\n");
	printf("s: ��\n");
	printf("a: ��\n");
	printf("d: ��\n");
	printf("r: ����\n");
	printf("�ո�: ����\n");
}