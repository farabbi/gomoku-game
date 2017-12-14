#include <stdio.h>	//printf()
#include <stdlib.h>	//system()
#include <conio.h>	//getch()

int ModeChoose(void)
{
	int c;	//存储输入的字符
	
	printf("模式选择:\n");
	printf("1. P v P\n");
	printf("2. P v C\n");
	for (;;)
	{
		c = getch();
		switch(c)
		{
		case '1':
			return 1;
		case '2':
			system("cls");
			printf("先手决定:\n");
			printf("1. 玩家先手\n");
			printf("2. 电脑先手\n");
			for (;;)
			{
				c = getch();
				switch(c)
				{
				case '1':
					return 2;
				case '2':
					return -2;
				default:
					break;
				}
			}
		default:
			break;
		}
	}
}