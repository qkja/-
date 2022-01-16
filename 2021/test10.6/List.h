#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
} ListNode;

//≥ı ºªØ 
extern void ListInit(ListNode* plist);
extern void ListDestory(ListNode* plist);
extern void ListPushBack(ListNode* plist);
