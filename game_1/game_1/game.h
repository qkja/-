#define _CRT_SECURE_NO_WARNINGS 1
//ͷ�ļ�����
#pragma once
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define ROW 3  //��
#define COL 3  //��
extern void My_game();
//��ʼ������
extern void InitBoard(char board[ROW][COL],int row, int col);
//��ӡ����
extern void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
extern void playerMove(char board[ROW][COL], int row, int col);
//������
extern void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ    �̶����� 
extern char IsWin(char board[ROW][COL], int row, int col);
//�ж������Ƿ�����
extern int IsFull(char board[ROW][COL], int row, int col);