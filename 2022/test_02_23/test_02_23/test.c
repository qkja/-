#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	/*int arr[] = { 1, 2, 3 };
	int arr2[3] = {0};
	arr2 = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;*/
}


void Setmine(char board[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	int count = 0;


	while (count < MINE)
	{

		x = rand() % ROW + 1;
		y = rand() % COL + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}


}


#pragma once

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define MINE 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//��ʼ������
extern void Init_board(char board[ROWS][COLS], int rows, int cols, char ch);

//��ӡ����
extern void Display(char board[ROWS][COLS], int row, int col);


//������
extern void Setmine(char board[ROWS][COLS]);

//�Ų���
extern void Searchmine(char boardmine[ROWS][COLS], char boardshow[ROWS][COLS], int row, int col);

#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("*****   0.exit    *****\n");
	printf("*****   1.play    *****\n");
	printf("***********************\n");
}

void game()
{
	char mine[ROWS][COLS];      //����
	char show[ROWS][COLS];      //��ӡ����
	// ��ʼ������
	Init_board(mine, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');

	//��ӡ����
	/*Display(mine, ROW, COL);
	Display(show, ROW, COL);*/

	//������
	Setmine(mine);
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);

	//�Ų���
	Searchmine(mine, show, ROW, COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{

		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("���˳�\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);
}

int main()
{
	test();
	return 0;
}




void Init_board(char board[ROWS][COLS], int rows, int cols, char ch)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}


void Display(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}

		printf("\n");
	}

}







void Setmine(char board[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	int count = 0;


	while (count < MINE)
	{

		x = rand() % ROW + 1;
		y = rand() % COL + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}

}





int Findmine(char boardmine[ROWS][COLS], int x, int y)
{
	return  boardmine[x - 1][y] + boardmine[x + 1][y] + boardmine[x - 1][y - 1] + boardmine[x - 1][y + 1] +
		boardmine[x][y - 1] + boardmine[x][y + 1] + boardmine[x + 1][y - 1] + boardmine[x + 1][y + 1] - 8 * '0';
}








void Searchmine(char boardmine[ROWS][COLS], char boardshow[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;

	while (count < ROW*COL - MINE)
	{
		printf("������������꣺");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y < col)
		{
			if (boardmine[x][y] == '1')
			{
				printf("���ź��㱻ը����\n");
				break;

			}
			else
			{
				int ret = Findmine(boardmine, x, y);
				boardshow[x][y] = ret + '0';
				Display(boardshow, ROW, COL);
				count++;
			}

		}
		else
		{
			printf("�����������,����������\n");
		}
	}//endofwhile

	if (count == ROW * COL - MINE)
	{
		printf("��Ӯ��!!!\n");
	}
}


#include<stdio.h>
