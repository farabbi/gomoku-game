#include <stdio.h>	//printf()
#include "general.h"	//x, y

void PrintPosition(void)
{
	printf("Position: ");
	switch(y)
	{
	case 0:
		printf("A");
		break;
	case 1:
		printf("B");
		break;
	case 2:
		printf("C");
		break;
	case 3:
		printf("D");
		break;
	case 4:
		printf("E");
		break;
	case 5:
		printf("F");
		break;
	case 6:
		printf("G");
		break;
	case 7:
		printf("H");
		break;
	case 8:
		printf("I");
		break;
	case 9:
		printf("J");
		break;
	case 10:
		printf("K");
		break;
	case 11:
		printf("L");
		break;
	case 12:
		printf("M");
		break;
	case 13:
		printf("N");
		break;
	case 14:
		printf("O");
		break;
	}
	printf(", ");
	switch(x)
	{
	case 0:
		printf("15");
		break;
	case 1:
		printf("14");
		break;
	case 2:
		printf("13");
		break;
	case 3:
		printf("12");
		break;
	case 4:
		printf("11");
		break;
	case 5:
		printf("10");
		break;
	case 6:
		printf("9");
		break;
	case 7:
		printf("8");
		break;
	case 8:
		printf("7");
		break;
	case 9:
		printf("6");
		break;
	case 10:
		printf("5");
		break;
	case 11:
		printf("4");
		break;
	case 12:
		printf("3");
		break;
	case 13:
		printf("2");
		break;
	case 14:
		printf("1");
		break;
	}
	printf("\n");
}