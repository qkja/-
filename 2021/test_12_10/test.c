#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;

	printf("%d", *p++);
	/*printf("%d\n", *(++p));
	printf("%p\n", ++p);*/
	//printf("%d\n", *++p);
	//printf("%d\n", *(++p));
	return 0;
}