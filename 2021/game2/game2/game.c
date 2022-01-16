#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void My_game()
{
	char Board[ROWS][COLS];
	char BoardSee[ROWS][COLS];

	////初始化测试棋盘    全部 字符 0
	InitBoard(Board, ROWS, COLS);

	////初始化观察棋盘    全部 字符 *
	InitBoardSee(BoardSee, ROWS, COLS);

	//打印测试棋盘
	//Display_1(Board, ROW, COL);

    //打印观察棋盘
	Display(BoardSee, ROW, COL);

	//布置雷              布置 NUM 雷
	SetMine(Board,ROW,COL);

	//Display_1(Board, ROW, COL);

	//排查雷
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
	//输入坐标
	
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < ROW*COL-NUM)
	{
		printf("请输入要排查的坐标：>");
		scanf("%d %d", &x, &y);
			//判断坐标的合法性
	    if (x >= 1 && x <= row && y >= 1 && y <= col)
	    {
			//检查是不是雷
			//是雷     炸死了
			if (Board[x][y] == '1')
			{ 
				printf("很遗憾，你被炸死了\n");
				Display_1(Board, ROW, COL);
				break;

			}
	        //不是雷   统计坐标周围有几个雷  -   将信息存储到观察棋盘
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
			printf("输入的坐标的错误,请重新输入:>");
		}
	
	}
	if (win == ROW*COL - NUM)
	{
		printf("恭喜你排雷成功\n");
		Display_1(Board, ROW, COL);
	}
	
}

void SetMine(char Board[ROWS][COLS], int row, int col)
{
	int count = NUM;
	while (count)
	{
		//随机生成下标
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
	printf("---------扫雷游戏---------\n");
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
	printf("---------扫雷游戏---------\n");
}
void Display(char Boardsee[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷游戏---------\n");
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
	printf("---------扫雷游戏---------\n");
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