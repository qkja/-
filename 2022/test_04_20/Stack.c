#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

TypeData pop(Stack* ps)
{
	assert(ps);
	if (IsEmpty(ps))
	{
		printf("已经空了\n");
		return 0;
	}
	return ps->elem[--(ps->tail)];
}

TypeData peek(Stack* ps)
{
	assert(ps);
	if (IsEmpty(ps))
	{
		printf("已经空了\n");
		return 0;
	}
	return ps->elem[ps->tail - 1];
}

int size(Stack* ps)
{
	assert(ps);
	return ps->tail;
}

void InitStack(Stack* ps)
{
	assert(ps);
	ps->elem = NULL;
	ps->capacity = 0;
	ps->tail = 0;
}

void DestroyStack(Stack* ps)
{
	assert(ps);
	free(ps->elem);
	ps->elem = NULL;
	ps->capacity = 0;
	ps->tail = 0;
}

bool isFull(Stack* ps) 
{
	assert(ps);
	return ps->capacity == ps->tail;
}

void push(Stack* ps, TypeData val)
{
	assert(ps);
	if (isFull(ps))
	{
		TypeData* newElem = (TypeData*)realloc(ps->elem, (ps->capacity + 3)*sizeof(TypeData));
		if (newElem == NULL)
		{
			printf("%s\n", strerror(errno));
		}
		ps->elem = newElem;
		ps->capacity += 3;
	}
	ps->elem[ps->tail++] = val;
}

bool IsEmpty(Stack* ps)
{
	assert(ps);
	return ps->tail == 0;
}

int PartSort2(int* arr, int left, int right)
{
	assert(arr);
	int ret = arr[left];
	int piti = left;
	while (left < right)
	{
		while (left < right && arr[right] >= ret)
		{
			right--;
		}
		arr[piti] = arr[right];
		piti = right;
		while (left < right && arr[left] <= ret)
		{
			left++;
		}

		arr[piti] = arr[left];
		piti = left;
	}
	arr[left] = ret;
	return left;
}

void QuickSort(int* arr, int len)
{
	QuickSortNonR(arr, 0, len - 1);
}

void QuickSortNonR(int* arr, int left, int right)
{
	assert(arr);
	Stack stack;
	InitStack(&stack);
	int pivot = PartSort2(arr, left, right);
	if (pivot > left + 1)
	{
		push(&stack, left);
		push(&stack, pivot - 1);
	}
	if(pivot < right-1)
	{
		push(&stack, pivot + 1);
		push(&stack, right);
	}
	
	while (!IsEmpty(&stack))
	{
		right = pop(&stack);
		left = pop(&stack);
		pivot = PartSort2(arr, left, right);
		if (pivot > left + 1)
		{
			push(&stack, left);
			push(&stack, pivot - 1);
		}
		if (pivot < right - 1)
		{
			push(&stack, pivot + 1);
			push(&stack, right);
		}
	}
}