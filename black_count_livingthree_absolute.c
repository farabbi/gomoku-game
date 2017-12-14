#include "general.h"	//black_count_livingthree(), black_count_livingthree_doubledpattern()

int black_count_livingthree_absolute(void)
{
	return black_count_livingthree()-black_count_livingthree_doubledpattern();
}