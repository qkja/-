#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void My_game()
{
	char Board[ROWS][COLS];
	char BoardSee[ROWS][COLS];

	////��ʼ����������    ȫ�� �ַ� 0
	InitBoard(Board, ROWS, COLS);

	////��ʼ���۲�����    ȫ�� �ַ� *
	InitBoardSee(BoardSee, ROWS, COLS);

	//��ӡ��������
	//Display_1(Board, ROW, COL);

    //��ӡ�۲�����
	Display(BoardSee, ROW, COL);

	//������              ���� NUM ��
	SetMine(Board,ROW,COL);

	//Display_1(Board, ROW, COL);

	//�Ų���
	FindMine(Board, BoardSee, ROW, COL);

	




}
static int get_mine(char Board[ROW][COLS], int x, int y)
{
	return Board[x][y - 1] +
		Board[x][y + 1] +
		Board[x - 1][y - 1] +
		Board[x - 1][y] +
		Board[x - 1][y + 1] +
		Board[x + 1][y - 1] +
		Board[x + 1][y] +
		Board[x + 1][y + 1] - 8 * '0';

	
		

	//int count = 0;

	/*if (Board[x][y - 1] == '1')
		count++;
	if (Board[x][y + 1] == '1')
		count++;

	if (Board[x - 1][y - 1] == '1')
		count++;
	if (Board[x - 1][y] == '1')
		count++;
	if (Board[x - 1][y+1] == '1')
		count++;

	if (Board[x + 1][y - 1] == '1')
		count++;
	if (Board[x + 1][y] == '1')
		count++;
	if (Board[x + 1][y + 1] == '1')
		count++;
*/
	//return count;


}

void FindMine(char Board[ROW][COLS], char BoardSee[ROWS][COLS], int row, int col)
{
	//��������
	
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < ROW*COL-NUM)
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d %d", &x, &y);
			//�ж�����ĺϷ���
	    if (x >= 1 && x <= row && y >= 1 && y <= col)
	    {
			//����ǲ�����
			//����     ը����
			if (Board[x][y] == '1')
			{ 
				printf("���ź����㱻ը����\n");
				Display_1(Board, ROW, COL);
				break;

			}
	        //������   ͳ��������Χ�м�����  -   ����Ϣ�洢���۲�����
			else
			{
				int ret = get_mine(Board, x, y);
				BoardSee[x][y] = ret + 48;
				Display(BoardSee, ROW, COL);
				win++;

			}
	    }
		else
		{
			printf("���������Ĵ���,����������:>");
		}
	
	}
	if (win == ROW*COL - NUM)
	{
		printf("��ϲ�����׳ɹ�\n");
		Display_1(Board, ROW, COL);
	}
	
}

void SetMine(char Board[ROWS][COLS], int row, int col)
{
	int count = NUM;
	while (count)
	{
		//��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;
		}

	}
}

void Display_1(char Board[ROW][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------ɨ����Ϸ---------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
	printf("---------ɨ����Ϸ---------\n");
}
void Display(char Boardsee[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------ɨ����Ϸ---------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Boardsee[i][j]);
		}
		printf("\n");
	}
	printf("---------ɨ����Ϸ---------\n");
}

void InitBoard(char Board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Board[i][j] = '0';
		}
	}
}

void InitBoardSee(char BoardSee[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			BoardSee[i][j] = '*';
		}
	}
}