#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int SLDataType;

typedef struct SListNode
{
	SLDataType val;
	struct SListNode* next;  //记录下一个节点的地址
}SListNode;

// 动态申请一个节点
SListNode* BuySListNode(SLDataType x);
// 单链表打印
void SListPrint(SListNode* pHead);
// 单链表尾插
void SListPushBack(SListNode** ppHead, SLDataType x);
// 单链表的头插
void SListPushFront(SListNode** ppHead, SLDataType x);
// 单链表的尾删
void SListPopBack(SListNode** ppHead);
// 单链表头删
void SListPopFront(SListNode** ppHead);
// 单链表查找
SListNode* SListFind(SListNode* pHead, SLDataType x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLDataType x);

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);
// 单链表的销毁
void SListDestory(SListNode** ppHead);