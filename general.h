void Initialization(void);	//初始化
int ModeChoose(void);	//模式选择
void MoveP(int player);	//移动光标及落子
void PrintBoard(void);	//打印棋盘
void PrintPosition(void);	//打印光标位置
void Recorder(void);	//行棋记录
int Judge(void);	//判断胜负
void AI_black(void);
void AI_white(void);

extern char *pBoardArray[15][15];	//图像化的棋盘信息
extern char *pBoardArray_original[15][15];	//图像化的棋盘原样
extern int iArray[15][15];	//数字化的棋盘信息
extern int iArray_extend[17][17];	//数字化的棋盘信息(含边界)
extern int iMode;	//游戏模式
extern int iJudge;	//状态变量, 是否有胜者产生
extern int x, y;	//当前光标位置
extern int iRegret_x[300], iRegret_y[300];	//全部落子信息，悔棋用
extern int iStep;	//当前步数，两人各落一子算两步
extern int iRestart;	//无落子时按'r', iRestart = 1, 游戏重新开始, 以避免黑子变白子的情况

void move_cur(int x,int y);
int ifout(int x);
void regret(void);
int black_forbidden(void);

int black_check_changlian(void);
int black_check_five(void);
int black_check_forbiddenpoint(void);
int black_count_fightingfour(void);
int black_count_four(void);
int black_count_livingfour(void);
int black_count_livingthree(void);
int black_count_livingthree_absolute(void);
int black_count_livingthree_doubledpattern(void);
int black_count_livingtwo(void);
int black_count_sleepingthree(void);
void black_defense_livingthree(void);
int black_find_four(void);
int black_find_livingthree(void);
int black_find_VCF(void);
void black_movep(int row, int column);

int white_count_fightingfour(void);
int white_count_four(void);
int white_count_livingfour(void);
int white_count_livingthree(void);
int white_count_livingthree_absolute(void);
int white_count_livingthree_doubledpattern(void);
int white_count_livingtwo(void);
int white_count_sleepingthree(void);
void white_defense_livingthree(void);
int white_find_doublethree(void);
int white_find_four(void);
int white_find_livingthree(void);
int white_find_VCF(void);
void white_movep(int row, int column);

struct point
{
	int x;
	int y;
};

extern struct point findpt;
extern struct point black_VCFpoint;
extern struct point white_VCFpoint;

extern int num_black_VCFround;
extern int num_white_VCFround;
