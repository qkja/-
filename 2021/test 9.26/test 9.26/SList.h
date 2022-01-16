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

//¥Ú”°¡¥±Ì
extern void SListPrint(SLTNode *phead);

//Œ≤≤Â
extern void SListPushBack(SLTNode **phead, SLDataType x);

//Õ∑≤Â
extern void SListPushFront(SLTNode **phead, SLDataType x);

//Õ∑…æ
extern void ListPopFront(SLTNode **phead);

//Œ≤…æ
extern void SListPopBack(SLTNode **phead);

//≤Â»Î
extern void SListInsert(SLTNode **phead, SLDataType x);

//≤¡≥˝
extern void SListErase(SLTNode **phead, SLDataType x);

