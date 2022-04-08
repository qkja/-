#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"


void test1()
{
	MyStack myStack;
	InitStack(&myStack);
	push(&myStack, 1);
	push(&myStack, 2);
	push(&myStack, 3);
	push(&myStack, 4);
	push(&myStack, 5);
	pop(&myStack);

	DataType ret = peek(&myStack);
	printf("%d\n", ret);

}
void test2()
{
	SlStack slStack;s
	InitSlStack(&slStack);
	slPush(&slStack, 1);
	slPush(&slStack, 2);
	slPush(&slStack, 3);
}

int main()
{
	test2();
	//test1();
	return 0;
}
