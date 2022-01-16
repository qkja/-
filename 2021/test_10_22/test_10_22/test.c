#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>


#include <stdio.h>
#include <string.h>
void reverse_string(char *arr, int x)
{
	printf("%d", strlen(arr));
	/*char *start = arr;
	char *end = arr + x - 1;
	while (start<end)
	{
		char tamp;
		tamp = *start;
		*start = *end;
		*end = tamp;
		start++;
		end--;
	}*/
}
int main()
{
	char arr[1000];
	scanf("%s", arr);
	reverse_string(arr,strlen(arr));
	printf("%s\n", arr);
	system("pause");
	return 0;
}
//#define ADD(x,y)  x *y + y
//int main()
//{
//
//
//
//	/*int a = 10;
//	int b = 10;
//	int c = 10;
//	printf("stack addr : %p\n", &a);
//	printf("stack addr : %p\n", &b);
//	printf("stack addr : %p\n", &c);*/
//	//printf("%d\n", ADD(3, 5));
//	system("pause");
//	return 0;
//}
////int* p = NULL;
////
////void fun(void)
////{
////  static  int a = 1;
////	//p = &a;
////}
////int main()
////{
////	printf("%d", a);
////
////
////
////
////
////	//fun();
////	//printf("a : %d\n", *p);
////
////
////
////
////	//int i = 0;
////	/*while (i < 10)
////	{
////		fun();
////		i++;
////	}*/
////	/*printf("a == :%d", *p);
////	printf("\n");*/
////	system("pause");
////	return 0;
////}
//
//
//
//







//extern void print(void);
//
//int main()
//{
//	print();
//	system("pause");
//	return 0;
//}









//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}