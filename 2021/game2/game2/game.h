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
//初始化测试棋盘
extern void InitBoard(char Board[ROWS][COLS], int rows, int cols);
//初始化观察棋盘
extern void InitBoardSee(char Board[ROWS][COLS], int rows, int cols);
//打印测试棋盘
extern void Display_1(char Board[ROW][COLS], int row, int col);
//打印观察棋盘
extern void Display(char BoardSee[ROWS][COLS], int row, int col);
//布置雷
extern void SetMine(char Board[ROWS][COLS], int row, int col);
//排查雷
extern void FindMine(char Board[ROW][COLS], char BoardSee[ROWS][COLS], int row, int col);
//检测周围雷的个数
//extern int get_mine(char Board[ROW][COLS] ,int x, int y);