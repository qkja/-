#define _CRT_SECURE_NO_WARNINGS 1
//��Ϸʵ��
#include"game.h"
void My_game()
{
	char board[ROW][COL];
	//��ʼ������  -  ��ʼ���ո�
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{	//�����
		playerMove(board, ROW, COL);
	
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ - ���
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ - ����
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
		//DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		//DisplayBoard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");
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
//���Ӯ   *
//����Ӯ   #
//ƽ��     Q
//��Ϸ���� C
//�ж���Ӯ
 char IsWin(char board[ROW][COL], int row, int col)
{
	 int i = 0;
	 int j = 0;
	 //�ж�����
	 for (i = 0; i < row; i++)
	 {
		 if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		 {
			 return board[i][1];
		 }
	 }
	 //�ж�����
	 for (j = 0; j < col; j++)
	 {
		 if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		 {
			 return board[1][j];
		 }
	 }
	 //�ж϶Խ���
	 if (board[1][1] == board[0][0] && board[1][1] == board[2][2] && board[1][1]!=' ')
	 {
		 return board[0][0];
	 }
	 if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	 {
		 return board[0][0];
	 }
	//�ж�ƽ��
	 int ret = IsFull(board, ROW, COL);
	 //��  1
	 //λ  0
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
	printf("�����ߣ�>\n");
	/*int x = 0;
	int y = 0;*/
	//�ж������Ƿ�ռ��
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
			printf("���걻ռ�ã�����������\n");
		}*/
	}

}

void playerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");
	while (1)
	{
		printf("���������������;>");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && y <= row && y >= 1 && y <= col)
		{
			//����
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������\n");
			}
			//break;
		}
		else
		{
			printf("����Ƿ�������������\n");
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

//��ӡ���̲���ͨ��
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