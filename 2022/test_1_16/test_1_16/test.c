#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
{
	// write code here
	int* left = rotateArray;
	int* right = rotateArray + rotateArrayLen - 1;

	while (left!=right)
	{
		if (*left < *right)
		{
			right--;
		}
		else
		{
			left++;
			
			
			
		}
	}
	return *left;
}

int main()
{
	int arr[10] = { 0 };
	printf("%d", minNumberInRotateArray(arr, 10));
	return 0;
}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	int count = 0;
//	int count2 = 0;
//	double sum = 0.0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &k);
//			if (k < 0)
//				count++;
//			else if (k > 0)
//			{
//				count2++;
//				sum += k;
//			}
//		}
//		if (count2 == 0)
//		{
//			printf("%d %.1f\n", count, 0.0);
//		}
//		else
//		{
//			printf("%d %.1f\n", count, sum / count2);
//		}
//		sum = 0.0;
//		count = 0;
//		count2 = 0;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//#include <stdio.h>
//int i;
//void prt()
//{
//	for (i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//} 
//int main()
//{
//
//	int a = 3;
//	printf("%d\n", (a += a -= a*a));
//	return 0;
//	/*for (i = 5; i <= 8; i++)
//		prt();*/
//	return 0;
//}
//int main()
//{
//	int a = 248, b = 4;
//	int const *c = 21;
//	const int *d = &a;
//	int *const e = &b;
//	int const * const f = &a;
//	/**c = 20;
//	e = &b;*/
//	return 0; 
//}