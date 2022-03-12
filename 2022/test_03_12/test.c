#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int removeDuplicates(int* nums, int numsSize) 
{
	assert(nums);
	int dest = 0;
	int src = 1;
	for (; src < numsSize;)
	{
		if (nums[src - 1] != nums[src])
		{
			nums[dest++] = nums[src - 1];
			src++;
		}
		else
		{
			src++;
		}
	}
	nums[dest++] = nums[src-1];
	return dest;
}

int main()
{
	int arr[] = { 1,2,2,3,4,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = removeDuplicates(arr, sz);
	for (int i = 0; i < ret; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}