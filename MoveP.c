#include <stdio.h>	//printf()
#include <conio.h>	//getch()
#include "general.h"	//move_cur(), ifout(), regret(), black_forbidden(), pBoardArray, iArray, iMode, iRegret_x, iRegret_y

int x = 7, y = 7;	//��ǰ���λ��
int iRestart = 0;	//������ʱ��'r', iRestart = 1, ��Ϸ���¿�ʼ, �Ա�����ӱ���ӵ����

void MoveP(int player)	//�ƶ���꼰����
{
	int key;	//�洢������ַ�
	
	move_cur(x, y);
	for (;;)
	{
		key = getch();
		switch (key)
		{
		case 'w':
			x--;
			x = ifout(x);
			move_cur(x, y);
			break;
		case 'a':
			y--;
			y = ifout(y);
			move_cur(x, y);
			break;
		case 's':
			x++;
			x = ifout(x);
			move_cur(x, y);
			break;
		case 'd':
			y++;
			y = ifout(y);
			move_cur(x, y);
			break;
		case ' ':
			if (iArray[x][y])
			{
				break;
			}
			if (player == 1)
			{
				if (black_forbidden())
				{
					move_cur(23, 0);
					printf("���ǽ���!\n");
					move_cur(x, y);
					break;
				}
			}
			iRegret_x[iStep] = x;
			iRegret_y[iStep] = y;
			iStep++;
			if (player == 1)
			{
				pBoardArray[x][y] = "��";
				iArray[x][y] = player;
				goto end;
			}
			else if (player == 2)
			{
				pBoardArray[x][y] = "��";
				iArray[x][y] = player;
				goto end;
			}
		case 'r':
			regret();
			if (iMode == 1)
			{
				if (iStep == 1)
				{
					iRestart = 1;
				}
				goto end;
			}
			else
			{
				break;
			}
		default:
			break;
		}
	}
end:
	return;
}