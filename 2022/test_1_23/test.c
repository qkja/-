#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

int* selfDividingNumbers(int left, int right, int* returnSize) 
{
	//1 <= left <= right <= 10000
	int arr[5] = { 0 };
	int* p = (int*)malloc((right - left + 1) * 4);
	*returnSize = 0;
	if (p != NULL)
	{
		for (int i = left; i < right + 1; i++)
		{
			//得到每一个数的的每一位
			int count = i;
			int j = 0;
			int k = 0;
			while (count)
			{
				arr[j] = count % 10;
				count /= 10;
				j++;
			}
			//判断数据是不是自出数
			for (k = 0; k < j; k++)
			{
				if (arr[k] == 0 || i % arr[k] != 0)
				{
					break;
				}
			}
			if (k == j)
			{
				p[*returnSize] = i;
				(*returnSize)++;
			}
		}
	}

	
	return p;
}

//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//	*returnSize = 0;
//	
//	int* p = (int*)malloc(numsSize * 4);
//	for (int i = 0; i < numsSize; i++)
//	{
//		int mul = 1;
//		for (int j = 0; j < numsSize; j++)
//		{
//			if (j == i)
//			{
//				mul *= 1;
//			}
//			else
//			{
//				mul *= nums[j];
//			}
//		}
//		p[*returnSize] = mul;
//		(*returnSize)++;
//	}
//	return p;
//}

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

	int* p = (int*)malloc(numsSize *sizeof(int));
	if (p != NULL)
	{
		int left = 1;
		int right = 1;
		for (int i = 0; i < numsSize;i++)
		{
			p[i] = 1;
		}
		for (int i = 0; i < numsSize; i++)
		{
			p[i] *= left;
			left *= nums[i];

			p[numsSize - 1 - i] *= right;
			right *= nums[numsSize - 1 - i];
		}
		*returnSize = numsSize;
	}
	return p;
	//memset();
}


int main()
{

	int ret = 0;
	int arr[] = { 1,2,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = productExceptSelf(arr,sz,&ret);
	//int * p = selfDividingNumbers(1, 22, &ret);
	for (int i = 0; i < ret; i++)
	{
		printf("%d ", p[i]);
	}
	free(p);
	p = NULL;
	/*int x = 0;
	((x = 4 * 5, x * 5), x + 5);
	printf("%d", x);*/
	/*char a = 'a', b;
	printf("%c,", ++a);
	printf("%c\n", b = a++);*/
	return 0;
}
//int main()
//{
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, * p[4], i;
//	for (i = 0; i < 4; i++)
//		p[i] = &a[i * 3];
//	printf("%d\n",p[3][2]);
//	return 0;
//}

//void main(void)
//{
//	char buffer[] = "This is a test of the memset function";
//
//	printf("Before: %s\n", buffer);
//	memset(buffer, '*', 4);
//	printf("After:  %s\n", buffer);
//}
