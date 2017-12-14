#include "general.h"

void AI_black(void)
{
	int i, j;
	int maxadv = -1000;
	struct point maxadvpt;
	int white_orifightingfour, white_orilivingthree, white_orilivingtwo, white_nowfightingfour, white_nowlivingthree, white_nowlivingtwo;
	int black_orifightingfour, black_orilivingthree, black_orilivingtwo, black_nowfightingfour, black_nowlivingthree, black_nowlivingtwo, black_orilivingthree_absolute, black_nowlivingthree_absolute;
	int white_advantage, black_advantage;
	int moreadv;

	if (iStep == 1)
	{
		black_movep(7, 7);
		goto end;
	}

	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			iArray_extend[i+1][j+1] = iArray[i][j];
		}
	}

	if (black_find_four())
	{
		black_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	if (white_find_four())
	{
		black_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	if (black_find_livingthree())
	{
		black_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	num_black_VCFround = 0;

	if (black_find_VCF())
	{
		black_movep(black_VCFpoint.x-1, black_VCFpoint.y-1);
		goto end;
	}

	if (white_count_livingthree())
	{
		black_defense_livingthree();
		black_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	num_white_VCFround = 0;

	if (white_find_VCF())
	{
		black_movep(white_VCFpoint.x-1, white_VCFpoint.y-1);
		goto end;
	}

	if (white_find_doublethree())
	{
		black_movep(findpt.x-1, findpt.y-1);
		goto end;
	}

	white_orifightingfour = 0;
	white_orilivingthree = 0;
	white_orilivingtwo = white_count_livingtwo();

	black_orifightingfour = 0;
	black_orilivingthree = 0;
	black_orilivingthree_absolute = 0;
	black_orilivingtwo = black_count_livingtwo();

	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 2;
				white_nowfightingfour = white_count_fightingfour();
				white_nowlivingthree = white_count_livingthree();
				white_nowlivingtwo = white_count_livingtwo();
				iArray_extend[i][j] = 0;

				iArray_extend[i][j] = 1;
				black_nowfightingfour = black_count_fightingfour();
				black_nowlivingthree = black_count_livingthree();
				black_nowlivingthree_absolute = black_nowlivingthree - black_count_livingthree_doubledpattern();
				black_nowlivingtwo = black_count_livingtwo();
				iArray_extend[i][j] = 0;

				if (black_nowfightingfour-black_orifightingfour<2 && black_nowlivingthree_absolute-black_orilivingthree_absolute<2)
				{
					white_advantage = white_nowlivingtwo + white_nowlivingthree + white_nowfightingfour - white_orilivingtwo - white_orilivingthree - white_orifightingfour + black_orilivingtwo + black_orilivingthree + black_orifightingfour - black_nowlivingtwo - black_nowlivingthree - black_nowfightingfour;
					black_advantage = black_nowlivingtwo + black_nowlivingthree + black_nowfightingfour - black_orilivingtwo - black_orilivingthree - black_orifightingfour + white_orilivingtwo + white_orilivingthree + white_orifightingfour - white_nowlivingtwo - white_nowlivingthree - white_nowfightingfour;
					if (white_advantage > black_advantage)
					{
						moreadv = white_advantage;
					}
					else
					{
						moreadv = black_advantage;
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
	}
	black_movep(maxadvpt.x-1, maxadvpt.y-1);

end:
	iRegret_x[iStep] = x;
	iRegret_y[iStep] = y;
	iStep++;
}