#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
void containsDuplicate_1(int* nums, int numsSize){
	int i = 0;
	int count = 0;
	for (i = 0; i< numsSize - 1; i++)
	{
		int ret = *(nums + i);
		for (int j = i + 1; j<numsSize; j++)
		{
			if (ret == *(nums + j))
			{
				count++;
			}
		}
	}
	if (0 == count)
	{
		printf("false\n");
	}
	else 
		printf("true\n");

}
int containsDuplicate_2(int* nums, int numsSize){
	int i = 0;
	int count = 0;
	for (i = 0; i< numsSize - 1; i++)
	{
		int ret = *(nums + i);
		for (int j = i + 1; j<numsSize; j++)
		{
			if (ret == *(nums + j))
			{
				return 1;
			}
		}
	}

	return 0;
}
//int main()
//{
//	int arr[10] = { 1, 9, 2, 3, 4, 5, 6, 6, 6, 6};
//	containsDuplicate_2(arr, 10);
//	system("pause");
//	return 0;
//}

int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	qsort();		
	return 0;
}