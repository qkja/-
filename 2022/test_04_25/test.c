#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>

void cocktailSort(int* arr, int len)
{
	assert(arr);
	// 控制 先后执行的循序
	int index = len - 1;
	for (int i = 0; i < len - 1; i++)
	{
		//前面开始排
		int flag = 0;
		if (i % 2 == 0)
		{
			int lastExchangeIndex = 0;
			for (int j = 0; j < index; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int ret = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = ret;
					lastExchangeIndex = j;
					flag = 1;
				}
			}
			index = lastExchangeIndex;
			if (flag == 0)
			{
				break;
			}
		}
		else
		{
			for (int j = index ; j > 0; j--)
			{
				if (arr[j] < arr[j - 1])
				{
					int ret = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = ret;
					flag = 1;

				}
			}
			if (flag == 0)
			{
				break;
			}
		}
	}
}

int main()
{
	int arr[] = { 2,3,4,5,6,7,8,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	cocktailSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}