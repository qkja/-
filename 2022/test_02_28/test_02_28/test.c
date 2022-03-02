#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct
//{
//	int a;
//	int b;
//
//} x;

//int main()
//{
//	x.b = 10;
//	x.a = 20;
//	printf("%d %d", x.a, x.b);
//	return 0;
//}
#include <stddef.h>
//typedef struct A
//{
//	int a;
//	char arr[10];
//} a;
//
//int main()
//{
//	//A a = { 1, { 'c' } };
//	//printf("%d", offsetof(a, p));
//	return 0;
//}

//struct A
//{
//	int a;
//	double b;
//};
//
//struct B
//{
//	int a;
//	struct A b;
//	
//};

//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	return 0;
//}

//struct A
//{
//	int _a ;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

#include<stdio.h>
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;

};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


int main()
{
	printf("%d", sizeof(void*));
	return 0;
}
