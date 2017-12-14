#include "general.h"

void AI_white(void)
{
	int i, j;
	int maxadv = -1000;
	struct point maxadvpt;
	int white_orifightingfour, white_orilivingthree, white_orilivingtwo, white_nowfightingfour, white_nowlivingthree, white_nowlivingtwo;
	int black_orifightingfour, black_orilivingthree, black_orilivingtwo, black_nowfightingfour, black_nowlivingthree, black_nowlivingtwo, black_orilivingthree_absolute, black_nowlivingthree_absolute;
	int white_advantage, black_advantage;
	int moreadv;

	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			iArray_extend[i+1][j+1] = iArray[i][j];
		}
	}

	if (white_find_four())
	{
		white_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	if (black_find_four())
	{
		white_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	if (white_find_livingthree())
	{
		white_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	num_white_VCFround = 0;

	if (white_find_VCF())
	{
		white_movep(white_VCFpoint.x-1, white_VCFpoint.y-1);
		goto end;
	}

	if (black_count_livingthree())
	{
		white_defense_livingthree();
		white_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	num_black_VCFround = 0;

	if (black_find_VCF())
	{
		white_movep(black_VCFpoint.x-1, black_VCFpoint.y-1);
		goto end;
	}

	if (white_find_doublethree())
	{
		white_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	black_orifightingfour = 0;
	black_orilivingthree = 0;
	black_orilivingthree_absolute = 0;
	black_orilivingtwo = black_count_livingtwo();

	white_orifightingfour = 0;
	white_orilivingthree = 0;
	white_orilivingtwo = white_count_livingtwo();
	
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 1;
				black_nowfightingfour = black_count_fightingfour();
				black_nowlivingthree = black_count_livingthree();
				black_nowlivingthree_absolute = black_nowlivingthree - black_count_livingthree_doubledpattern();
				black_nowlivingtwo = black_count_livingtwo();
				iArray_extend[i][j] = 0;
				
				iArray_extend[i][j] = 2;
				white_nowfightingfour = white_count_fightingfour();
				white_nowlivingthree = white_count_livingthree();
				white_nowlivingtwo = white_count_livingtwo();
				iArray_extend[i][j] = 0;
				
				black_advantage = black_nowlivingtwo + black_nowlivingthree + black_nowfightingfour - black_orilivingtwo - black_orilivingthree - black_orifightingfour + white_orilivingtwo + white_orilivingthree + white_orifightingfour - white_nowlivingtwo - white_nowlivingthree - white_nowfightingfour;
				white_advantage = white_nowlivingtwo + white_nowlivingthree + white_nowfightingfour - white_orilivingtwo - white_orilivingthree - white_orifightingfour + black_orilivingtwo + black_orilivingthree + black_orifightingfour - black_nowlivingtwo - black_nowlivingthree - black_nowfightingfour;
				if (black_advantage > white_advantage)
				{
					moreadv = black_advantage;
				}
				else
				{
					moreadv = white_advantage;
				}
				
				if (moreadv >= maxadv)
				{
					maxadv = moreadv;
					maxadvpt.x = i;
					maxadvpt.y = j;
				}
			}
		}
	}
	white_movep(maxadvpt.x-1, maxadvpt.y-1);

end:
	iRegret_x[iStep] = x;
	iRegret_y[iStep] = y;
	iStep++;
}