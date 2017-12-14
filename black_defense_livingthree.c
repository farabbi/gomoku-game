#include "general.h"

void black_defense_livingthree(void)
{
	int i, j;
	int maxgrade;
	int white_orilivingthree, white_orisleepingthree, white_orilivingtwo;
	int white_nowlivingthree, white_nowsleepingthree, white_nowlivingtwo;
	int black_orilivingthree, black_orisleepingthree, black_orilivingtwo;
	int black_nowlivingthree, black_nowsleepingthree, black_nowlivingtwo;
	int grade;
	
	white_orilivingthree = white_count_livingthree();
	white_orisleepingthree = white_count_sleepingthree();
	white_orilivingtwo = white_count_livingtwo();
	black_orilivingthree = black_count_livingthree();
	black_orisleepingthree = black_count_sleepingthree();
	black_orilivingtwo = black_count_livingtwo();
	for (i = 1; i <= 15; ++i)
	{
		for (j = 1; j <= 15; ++j)
		{
			if (!iArray_extend[i][j])
			{
				iArray_extend[i][j] = 1;
				if (black_count_four()<2 && black_count_livingthree_absolute()<2)
				{
					white_nowlivingthree = white_count_livingthree();
					white_nowsleepingthree = white_count_sleepingthree();
					white_nowlivingtwo = white_count_livingtwo();
					black_nowlivingthree = black_count_livingthree();
					black_nowsleepingthree = black_count_sleepingthree();
					black_nowlivingtwo = black_count_livingtwo();
					grade = 10000 * (white_orilivingthree-white_nowlivingthree) + (white_orisleepingthree-white_nowsleepingthree) + (white_orilivingtwo-white_nowlivingtwo) + (black_nowlivingthree - black_orilivingthree) + (black_nowsleepingthree-black_orisleepingthree) + (black_nowlivingtwo-black_orilivingtwo);
					if (i == 1 && j == 1)
					{
						maxgrade = grade;
						findpt.x = i;
						findpt.y = j;
					}
					else if (grade > maxgrade)
					{
						maxgrade = grade;
						findpt.x = i;
						findpt.y = j;
					}
				}
				iArray_extend[i][j] = 0;
			}
		}
	}
}