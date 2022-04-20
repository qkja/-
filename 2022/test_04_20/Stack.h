#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef int TypeData;

struct Stack
{
	TypeData* elem; //����
	int capacity;   //���������
	int tail;       //ջ��
};

typedef struct Stack Stack;

//��ʼ��
extern void InitStack(Stack* ps);

//push
extern void push(Stack* ps, TypeData val);

extern TypeData pop(Stack* ps);

extern TypeData peek(Stack* ps);

extern bool IsEmpty(Stack* ps);

extern void DestroyStack(Stack* ps);

extern int size(Stack* ps);

void QuickSort(int* arr, int len);
void QuickSortNonR(int* arr, int left, int right);



