#define _CRT_SECURE_NO_WARNINGS 1
//头文件包含
#pragma once
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define ROW 3  //行
#define COL 3  //列
extern void My_game();
//初始化棋盘
extern void InitBoard(char board[ROW][COL],int row, int col);
//打印棋盘
extern void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
extern void playerMove(char board[ROW][COL], int row, int col);
//电脑走
extern void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢    固定死了 
extern char IsWin(char board[ROW][COL], int row, int col);
//判断棋盘是否满了
extern int IsFull(char board[ROW][COL], int row, int col);