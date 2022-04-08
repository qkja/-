#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

// 模拟实现 栈
// 栈是一个先进后出的数据结构
//我们用 顺序表 和 链表两种方式模拟

//顺序表

typedef int DataType;

struct MyStack
{
	DataType* elem;
	size_t capacity;
	size_t usedSize;
};

typedef struct MyStack MyStack;

//初始化
extern void InitStack(MyStack* ps);

//是不是 满了
extern bool IsFull(MyStack* ps);

//是不是 空栈
extern bool IsEmpty(MyStack* ps);

//入栈
extern void push(MyStack* ps, DataType val);

// 查询栈顶元素
extern DataType peek(MyStack* ps);

//出栈
extern void pop(MyStack* ps);


struct StackNode
{
	DataType val;
	struct SLNode* next;
};

typedef struct StackNode StackNode;

struct SlStack
{
	StackNode* head;
	StackNode* tail;
};
typedef struct SlStack SlStack;

//初始化
extern void InitSlStack(SlStack* ps);

//入栈
extern void slPush(SlStack* ps, DataType val);



