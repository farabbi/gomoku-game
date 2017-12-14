void Initialization(void);	//��ʼ��
int ModeChoose(void);	//ģʽѡ��
void MoveP(int player);	//�ƶ���꼰����
void PrintBoard(void);	//��ӡ����
void PrintPosition(void);	//��ӡ���λ��
void Recorder(void);	//�����¼
int Judge(void);	//�ж�ʤ��
void AI_black(void);
void AI_white(void);

extern char *pBoardArray[15][15];	//ͼ�񻯵�������Ϣ
extern char *pBoardArray_original[15][15];	//ͼ�񻯵�����ԭ��
extern int iArray[15][15];	//���ֻ���������Ϣ
extern int iArray_extend[17][17];	//���ֻ���������Ϣ(���߽�)
extern int iMode;	//��Ϸģʽ
extern int iJudge;	//״̬����, �Ƿ���ʤ�߲���
extern int x, y;	//��ǰ���λ��
extern int iRegret_x[300], iRegret_y[300];	//ȫ��������Ϣ��������
extern int iStep;	//��ǰ���������˸���һ��������
extern int iRestart;	//������ʱ��'r', iRestart = 1, ��Ϸ���¿�ʼ, �Ա�����ӱ���ӵ����

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
