#include <stdio.h>	//printf()
#include <stdlib.h>	//system()
#include <conio.h>	//getch()

int ModeChoose(void)
{
	int c;	//�洢������ַ�
	
	printf("ģʽѡ��:\n");
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
			printf("���־���:\n");
			printf("1. �������\n");
			printf("2. ��������\n");
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