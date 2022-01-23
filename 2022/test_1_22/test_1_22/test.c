#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	/*char ch = (char)128;
//	printf("%c", ch);*/
//	return 0;
//}

//int majorityElement(int* nums, int numsSize)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		for (int j = i + 1; j < numsSize; j++)
//		{
//			if (nums[i] == nums[j])
//			{
//				count++;
//			}
//			if (count+1>numsSize / 2)
//			{
//				goto end;
//			}
//		}
//		count = 0;
//	}
//end:
//	return nums[i];
//	//return -1;
//}
int com_by_int(const void* e1, const void* e2)
{
	return *((const int*)e1) - *((const int*)e2);
}
int majorityElement(int* nums, int numsSize)
{
	qsort(nums, numsSize, sizeof(int), com_by_int);
	return nums[numsSize / 2];
}

int main()
{
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (8 == j)
			{
				goto end;
			}
		}
	}
end:
	printf("%d", 8);*/
	//goto

	int arr[] = { 2, 2, 1, 1, 1, 2, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d", majorityElement(arr, sz));
	/*char arr[501] = { 0 };
	scanf("%s", arr);
	int ret = strlen(arr);
	int count = 0;
	for (int i = 0; i<ret - 1; i++)
	{
		for (int j = i + 1; j < ret; j++)
		{
			if (arr[j] == arr[i])
				arr[i] = (char)128;
		}
	}
	for (int i = 0; i<ret; i++)
	{
		if (arr[i] != (char)128)
			count++;
	}
	printf("%d", count);*/
	return 0;
}
//typedef struct{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//int main()
//{
//	int n = '10';
//	printf("%d", n);
//	return 0;
//	//printf("%d\n", sizeof(AA_t));
//	//printf("%d\n", sizeof(struct B));
//}

//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		short a; 
//		char d;
//		long b;
//		long c;
//	};
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}
//#pragma pack()

//#pragma pack(4)
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//}