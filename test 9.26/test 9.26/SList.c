#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
 
SLTNode* BySList(SLDataType x)
{
	SLTNode * newnode = (SLTNode *)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void ListPopFront(SLTNode **phead)
{
	SLTNode * pphead = *phead;
	*phead = pphead->next;
	pphead = NULL;
}

void SListPopBack(SLTNode **phead)
{
	SLTNode *pphead = *phead;
	while (pphead->next != NULL)
	{
		pphead = pphead->next;
	}
	pphead = NULL;
}

void SListPushFront(SLTNode **phead, SLDataType x)
{
	SLTNode * newnode = BySList(x);
	newnode->next = *phead;
	*phead = newnode;
}

void SListPrint(SLTNode *phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(SLTNode **pphead, SLDataType x)
{
	/*SLTNode * newnode = (SLTNode *)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;*/
	SLTNode * newnode = BySList(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
	    SLTNode * tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	/*printf("%p\n", *pphead);
	printf("%p\n", pphead);*/
	/*free(newnode);*/
	//newnode = NULL;
	
}
