#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = arr;
	int* p2 = &arr[9];
	printf("%d", p2 - p1);
	return 0;
}

//int main()
//{
//	int a = 0x11223344;
//	int* p1 = &a;
//	char* p2 = (char*)p1;
//	*p2 = 0;
//	printf("%#x", a);
//	return 0;
//}

//int main()
//{
//	char a = 10;
//	char* p1 = &a;
//	char* p2 = p1 + 1;
//	printf("p1 = %p\n", p1);
//	printf("p2 = %p\n", p2);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	int* p2 = p1 + 1;
//	printf("p1 = %p\n", p1);
//	printf("p2 = %p\n", p2);
//	return 0;
//}

void swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swap2(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d b = %d\n", a, b);
//	//swap1(a, b);
//	swap2(&a, &b);
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;  //&a就是指针   p就是指针变量
//	return 0;
//}

