#include <stdio.h>	//printf()
#include "general.h"	//pBoardArray

void PrintBoard(void)	//打印棋盘及操作说明
{
	int i, j;	//循环变量，i为行，j为列
	
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
	printf("w: 上\n");
	printf("s: 下\n");
	printf("a: 左\n");
	printf("d: 右\n");
	printf("r: 悔棋\n");
	printf("空格: 落子\n");
}