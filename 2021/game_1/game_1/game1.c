#define _CRT_SECURE_NO_WARNINGS 1
//游戏实现
#include"game.h"
void My_game()
{
	char board[ROW][COL];
	//初始化棋盘  -  初始化空格
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{	//玩家走
		playerMove(board, ROW, COL);
	
		DisplayBoard(board, ROW, COL);
		//判断输赢 - 玩家
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);
		//判断输赢 - 电脑
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
		//DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		//DisplayBoard(board, ROW, COL);
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
	

}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//玩家赢   *
//电脑赢   #
//平局     Q
//游戏继续 C
//判断输赢
 char IsWin(char board[ROW][COL], int row, int col)
{
	 int i = 0;
	 int j = 0;
	 //判断三行
	 for (i = 0; i < row; i++)
	 {
		 if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		 {
			 return board[i][1];
		 }
	 }
	 //判断三列
	 for (j = 0; j < col; j++)
	 {
		 if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		 {
			 return board[1][j];
		 }
	 }
	 //判断对角线
	 if (board[1][1] == board[0][0] && board[1][1] == board[2][2] && board[1][1]!=' ')
	 {
		 return board[0][0];
	 }
	 if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	 {
		 return board[0][0];
	 }
	//判断平局
	 int ret = IsFull(board, ROW, COL);
	 //满  1
	 //位  0
	 if (ret == 1)
	 {
		 return 'Q';
	 }
	 else
	 {
		 return 'C';
	 }

}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	/*int x = 0;
	int y = 0;*/
	//判断坐标是否被占用
	while (1)
	{
	    int x = rand()%row;
	    int y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		/*else
		{
			printf("坐标被占用，请重新输入\n");
		}*/
	}

}

void playerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入下棋的坐标;>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && y <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
			//break;
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
		
}

//打印棋盘不够通用
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}