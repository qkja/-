#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void InitStack(MyStack* ps)
{
	assert(ps); //断言
	ps->capacity = 0;
	ps->usedSize = 0;
	ps->elem = NULL;
}
bool IsFull(MyStack* ps)
{
	assert(ps); //断言
	return ps->capacity == ps->usedSize;
}

void push(MyStack* ps, DataType val)
{
	assert(ps); //断言
	//判断 是不是 满了
	if (IsFull(ps))
	{
		//扩容
		size_t newSize = ps->capacity == 0 ? 4 : 2 * (ps->capacity);

		DataType* cur = (DataType*)realloc(ps->elem,
			sizeof(DataType) * newSize);
		if (cur == NULL)
		{
			printf("realloc fail\n");
			return;
		}
		ps->elem = cur;
		ps->capacity = newSize;
	}
	ps->elem[ps->usedSize++] = val;
}

bool IsEmpty(MyStack* ps)
{
	assert(ps); //断言
	return ps->usedSize == 0;
	//这里最好不要用  容量判断，有的时候我们开辟好空间后，
	//入了一定的数组，但是出数据会出到空，但是容量不变
}

DataType peek(MyStack* ps)
{
	assert(ps); //断言
	if (IsEmpty(ps))
	{
		return -1;
	}
	DataType ret = ps->elem[ps->usedSize - 1];
	ps->usedSize--;
	return ret;
	//return ps->elem[--ps->usedSize];
}

void pop(MyStack* ps)
{
	assert(ps); //断言
	if (IsEmpty(ps))
	{
		return;
	}
	ps->usedSize--;
}


// ==================================


void InitSlStack(SlStack* ps)
{
	assert(ps);
	ps->head = NULL;
	ps->tail = NULL;
}

StackNode* byNode(DataType val)
{
	StackNode* node = (StackNode*)malloc(sizeof(StackNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		return NULL;
	}
	node->val = val;
	node->next = NULL;
	return node;
}

void slPush(SlStack* ps, DataType val)
{
	assert(ps);
	StackNode* node = byNode(val);
	if (node == NULL)
	{
		printf("malloc fail\n");
		return NULL;
	}
	//头插


	//都一次插入
	if (ps->head == NULL)
	{
		ps->head = node;
		ps->tail = node;
		return;
	}
	node->next = ps->head;
	ps->head = node;
}
