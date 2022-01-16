#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<Windows.h>

typedef int SLDataType;

struct SListNode
{
	SLDataType data;
	struct SListNode* next;
};

typedef struct SListNode SLTNode;

//��ӡ����
extern void SListPrint(SLTNode *phead);

//β��
extern void SListPushBack(SLTNode **phead, SLDataType x);

//ͷ��
extern void SListPushFront(SLTNode **phead, SLDataType x);

//ͷɾ
extern void ListPopFront(SLTNode **phead);

//βɾ
extern void SListPopBack(SLTNode **phead);

//����
extern void SListInsert(SLTNode **phead, SLDataType x);

//����
extern void SListErase(SLTNode **phead, SLDataType x);

