#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#define N 10
int* find_largest(int a[], int n)
{
	int * p = &a[0];
	int *max = &a[0];
	for (int i = 0; i < N; i++)
	{
		if (*(p + i)>*max)
		{
			max = p + i;
		}
	}
	return max;
}
int main()
{



	//int arr[N] = { 0 };
	//for (int i = 0; i < N; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//int* p = find_largest(arr, N);
	//printf("%p\n", p);
	//printf("%p\n", &arr[9]);
	system("pause");
	return 0;
}
