#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int ret = ++ * p;
	printf("%d", ret);
	printf("%d", *p);
	/*int* p = (int[]){ 1,2,3,4 };
	printf("%d", *p);
	printf("%d", *(p+1));*/
	//int a[10] = { 0 };
	////a++;
	//int i = 0;
	//i[a] = 10;
	//printf("%d", a[0]);
	return 0;
}