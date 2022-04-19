#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

SListNode* BuySListNode(SLDataType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	if (node == NULL)
	{
		printf("malloc fail!\n");
		exit(-1);
	}
	node->next = NULL;
	node->val = x;
	return node;
}

void SListPushFront(SListNode** ppHead, SLDataType x)
{
	assert(ppHead);
	SListNode* node = BuySListNode(x);
	//判断是不是头一次插入
	if (*ppHead == NULL)
	{
		*ppHead = node;
		return;
	}
	node->next = *ppHead;
	*ppHead = node;
}

void SListPrint(SListNode* pHead)
{
	SListNode* cur = pHead;
	while (cur != NULL)
	{
		printf("%d ->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListDestory(SListNode** ppHead)
{
	assert(ppHead);
	SListNode* cur = *ppHead;
	while (cur != NULL)
	{
		SListNode* curNext = cur->next;
		free(cur);
		cur = curNext;
	}
	*ppHead = NULL;
}

void SListPushBack(SListNode** ppHead, SLDataType x)
{
	assert(ppHead);
	SListNode* node = BuySListNode(x);
	// 第一次插入 
	if (*ppHead == NULL)
	{
		*ppHead = node;
		return;
	}
	SListNode* cur = *ppHead;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}

	cur->next = node;
}

SListNode* SListFind(SListNode* pHead, SLDataType key)
{
	assert(pHead);
	SListNode* cur = pHead;

	while (cur != NULL)
	{
		if (cur->val == key)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SListPopFront(SListNode** ppHead)
{
	assert(ppHead);

	if (*ppHead == NULL)
	{
		printf("没有节点");
		return;
	}
	SListNode* cur = (*ppHead)->next;
	free(*ppHead);
	*ppHead = cur;
}

void SListPopBack(SListNode** ppHead)
{
	assert(ppHead);
	if (*ppHead == NULL)
	{
		printf("没有节点");
		return;
	}
	SListNode* cur = *ppHead;

	// 只有 一个节点
	if (cur->next == NULL)
	{
		free(cur);
		*ppHead = NULL;
		return;
	}
	SListNode* curNext = cur->next;
	
	while (curNext->next != NULL)
	{
		cur = curNext;
		curNext = curNext->next;
	}
	free(curNext);
	cur->next = NULL;
}

void SListInsertAfter(SListNode* pos, SLDataType x)
{
	assert(pos);
	SListNode* cur = pos->next;
	SListNode* node = BuySListNode(x);
	pos->next = node;
	node->next = cur;
}

void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	SListNode* cur = pos->next;
	if (cur == NULL)
	{
		return;
	}
	pos->next = cur->next;
	free(cur);
}