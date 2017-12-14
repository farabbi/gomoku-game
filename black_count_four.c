#include "general.h"	//black_count_livingfour(), black_count_fightingfour()

int black_count_four(void)
{
	return black_count_livingfour()+black_count_fightingfour();
}