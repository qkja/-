#define _CRT_SECURE_NO_WARNINGS 1
#include "DSList.h"

void func(int x = 0)
{

}


























//
//ListNode* ListCreate()
//{
//	ListNode* cur = (ListNode*)malloc(sizeof(ListNode));
//	assert(cur);
//	cur->data = -1;
//	cur->next = cur;
//	cur->prev = cur;
//	return cur;
//}
//
//void ListPushFront(ListNode* plist, LTDataType x)
//{
//	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//	assert(node);
//	node->data = x;
//
//	node->next = plist->next;
//	node->next->prev = node;
//
//	plist->next = node;
//	node->prev = plist;
//}
//
//void ListPrint(ListNode* plist)
//{
//	assert(plist);
//	ListNode* cur = plist->next;
//	while (cur != plist)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
//void ListDestory(ListNode* plist)
//{
//	assert(plist);
//	ListNode* head = plist->next;
//	//销毁 有效节点
//	
//	while (head != plist)
//	{
//		ListNode* headNext = head->next;
//		head->next = NULL;
//		head->prev = NULL;
//		free(head);
//		head = headNext;
//	}
//
//	//销毁标兵位
//}
//
//void ListPushBack(ListNode* plist, LTDataType x)
//{
//	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//	assert(node);
//	node->data = x;
//	ListNode* tail = plist->prev;
//	tail->next = node;
//	node->prev = tail;
//	node->next = plist;
//	plist->prev = node;
//}
//
//void ListPopFront(ListNode* plist)
//{
//	assert(plist);
//	ListNode* head = plist->next;
//	if (head == plist)
//	{
//		return;
//	}
//	ListNode* headNext = head->next;
//	head->next = NULL;
//	head->prev = NULL;
//	free(head);
//	plist->next = headNext;
//	headNext->prev = plist;
//}
//
//void ListPopBack(ListNode* plist)
//{
//	assert(plist);
//	ListNode* tail = plist->prev;
//	if (tail == plist)
//	{
//		return;
//	}
//	tail->prev->next = plist;
//	plist->prev = tail->prev;
//	tail->next = NULL;
//	tail->prev = NULL;
//	free(tail);
//}