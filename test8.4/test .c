#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[] = "abcdef";
//	int* pa = arr;
//	char* pb = ch;
//	int (*ppa)[10]=&arr;
//	char(*ppb)[7] = &ch;
//	/*printf("%d\n", *pa);
//	printf("%c\n", *pb);*/
//	printf("%d\n", **ppa);
//	printf("%c\n", **ppb);
//	//printf("%s\n", **ppb);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//	}
//	return 0;
//}
void print2(int(*p)[3][5], int x, int y)
{
	int 
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print2(arr, 3, 5);
	return 0;
}