#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 80
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
extern void My_game();
//��ʼ����������
extern void InitBoard(char Board[ROWS][COLS], int rows, int cols);
//��ʼ���۲�����
extern void InitBoardSee(char Board[ROWS][COLS], int rows, int cols);
//��ӡ��������
extern void Display_1(char Board[ROW][COLS], int row, int col);
//��ӡ�۲�����
extern void Display(char BoardSee[ROWS][COLS], int row, int col);
//������
extern void SetMine(char Board[ROWS][COLS], int row, int col);
//�Ų���
extern void FindMine(char Board[ROW][COLS], char BoardSee[ROWS][COLS], int row, int col);
//�����Χ�׵ĸ���
//extern int get_mine(char Board[ROW][COLS] ,int x, int y);