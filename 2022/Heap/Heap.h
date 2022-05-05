#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

#define HEAP <

typedef int HPDataType;
struct MyHeap
{
	HPDataType* elem;
	size_t size;
	size_t useSize;
};

typedef struct MyHeap MyHeap;

//��ʼ��

extern void InitMyHeap(MyHeap * pHeap);

extern void HeapPush(MyHeap* pHeap, HPDataType x);
extern bool IsFull(MyHeap* pHeap);
extern bool IsEmpty(MyHeap* pHeap);
extern int HeapSize(MyHeap* pHeap);

//���µ���
extern void adjustDown(MyHeap* pHeap);

//���ϵ���
extern void adjustUp(MyHeap* pHeap);

extern void Display(MyHeap* pHeap);

extern HPDataType HeapTop(MyHeap* pHeap);
extern void HeapPop(MyHeap* pHeap);




