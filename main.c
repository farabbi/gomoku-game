#include <stdio.h>	//printf()
#include <stdlib.h>	//system()
#include "general.h"	//Initialization(), ModeChoose(), MoveP(), PrintBoard(), PrintPosition(), Judge(), AI_black(), AI_white()

char *pBoardArray[15][15];	//ͼ�񻯵�������Ϣ
char *pBoardArray_original[15][15];	//ͼ�񻯵�����ԭ��
int iArray[15][15];	//���ֻ���������Ϣ
int iArray_extend[17][17];	//���ֻ���������Ϣ(���߽�)
int iMode;	//��Ϸģʽ
int iJudge;	//״̬����, �Ƿ���ʤ�߲���
struct point findpt;

/*  Gomoku; Version 3  */
main()
{
	Initialization();

	iMode = ModeChoose();

	if (iMode == 1)	//P v P
	{
		for (;;)
		{
			system("cls");
			
			PrintBoard();

			PrintPosition();

			iJudge = Judge();
			if (iJudge > 0)
			{
				printf("Player2 wins!\n");
				break;
			}
			else if (iJudge < 0)
			{
				printf("It's a draw.\n");
				break;
			}

restart:
			MoveP(1);
			if (iRestart)
			{
				iRestart = 0;
				goto restart;
			}

			Recorder();

			system("cls");

			PrintBoard();

			PrintPosition();

			iJudge = Judge();
			if (iJudge > 0)
			{
				printf("Player1 wins!\n");
				break;
			}
			else if (iJudge < 0)
			{
				printf("It's a draw.\n");
				break;
			}

			MoveP(2);

			Recorder();
		}
	}
	else if (iMode == 2)	//P v C, P����
	{
		for (;;)
		{
			system("cls");
			
			PrintBoard();

			PrintPosition();

			iJudge = Judge();
			if (iJudge > 0)
			{
				printf("You lose!\n");
				break;
			}
			else if (iJudge < 0)
			{
				printf("It's a draw.\n");
				break;
			}

			MoveP(1);

			Recorder();

			system("cls");

			PrintBoard();

			PrintPosition();

			iJudge = Judge();
			if (iJudge > 0)
			{
				printf("You win!\n");
				break;
			}
			else if (iJudge < 0)
			{
				printf("It's a draw.\n");
				break;
			}

			AI_white();
			
			Recorder();
		}
	}
	else if (iMode == -2)	//P v C, C����
	{
		for (;;)
		{
			system("cls");
			
			PrintBoard();

			PrintPosition();

			iJudge = Judge();
			if (iJudge > 0)
			{
				printf("You wins!\n");
				break;
			}
			else if (iJudge < 0)
			{
				printf("It's a draw.\n");
				break;
			}

			AI_black();

			Recorder();

			system("cls");

			PrintBoard();

			PrintPosition();

			iJudge = Judge();
			if (iJudge > 0)
			{
				printf("You lose!\n");
				break;
			}
			else if (iJudge < 0)
			{
				printf("It's a draw.\n");
				break;
			}

			MoveP(2);

			Recorder();
		}
	}

	system("pause");
	return 0;
}
