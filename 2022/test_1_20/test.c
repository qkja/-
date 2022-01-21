#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<assert.h>

int GetNumberOfK(int* data, int dataLen, int k) {
	
	assert(data);// write code here
	//int count = 0;
	int* left = data;
	int* right = data + dataLen - 1;
	if (k >= *left && k <= *right)
	{
		while (left<=right)
		{
			if (k > *left)
			{
				left++;
			}
			if (k < *right)
			{
				right--;
			}
			if (k == *left && k == *right)
			{
				return right - left + 1;
			}
		}
	}
    
	return 0;
}


int convertInteger(int A, int B) {
	
	int ret = A ^ B;
	//按位异或  相同为0  相异为1
	//求一的个数
	//1110
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

//int main()
//{
//	/*for (int i = 0; i || i++ < 5;)
//	{
//		printf("hehe\n");
//	}*/
//	//printf("%d", convertInteger(29, 15));
//
//	/*int arr[] = { 1,3,3,3,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", GetNumberOfK(arr, sz, 2));*/
//
//	/*char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	}
//	printf("\n");*/
//	return 0;
//}
//1abcedf2df
//1AbCEdf

//int main()
//{
//	int t = 0;
//	while (printf("*"))
//	{
//		t++;
//		if (t < 3)
//			break;
//	}
//	return 0;
//	/*char ch[80] = "123abcdEFG*&";
//	int j;
//	puts(ch);
//	for (j = 0; ch[j] != '\0'; j++)
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//			ch[j] = ch[j] + 'e' - 'E';
//	puts(ch);
//	return 0;*/
//
//}

//int dominantIndex(int* nums, int numsSize)
//{
//
//	assert(nums);
//	int count = 0;
//	int first_max = nums[0];
//	int second_max = nums[numsSize-1];
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > first_max)
//		{
//			second_max = first_max;
//			first_max = nums[i];
//			count = i;
//		}
//		else
//		{
//			if (nums[i] > second_max)
//			{
//				second_max = nums[i];
//			}
//		}
//	}
//
//	if (((first_max >= 2 * second_max) && second_max !=0)|| numsSize==1)
//		return count;
//	return -1;
//}
#include<stdlib.h>

int dominantIndex(int* nums, int numsSize) {
	int m1 = -1, m2 = -1;
	int index = -1;
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] > m1) {
			m2 = m1;
			m1 = nums[i];
			index = i;
		}
		else if (nums[i] > m2) {
			m2 = nums[i];
		}
	}
	return m1 >= m2 * 2 ? index : -1;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
	assert(nums1 && nums2);
	int ret = nums1Size < nums2Size ? nums1Size : nums2Size;
	int* p = (int*)malloc(sizeof(int) * ret);
	assert(p);
	int count = 0;
	for (int i = 0; i < nums1Size; i++)
	{
		for (int j = 0; j < nums2Size; j++)
		{
			if (nums1[i] == nums2[j])
			{
				int k = 0;
				for (k = 0; k < count; k++)
				{
					if (nums1[i] == p[k])
						break;
				}
				if (k == count)
				{
					p[count] = nums1[i];
					count++;
				}
			}
		}
	}
	*returnSize = count;
	return p;
}

//int main()
//{
//	int arr1[] = { 4,9,5 };
//	int arr2[] = { 9,4,9,8,4 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int ret = 0;
//
//	int* p1 = intersection(arr1, sz1, arr2, sz2, &ret);
//	for (int i = 0; i < ret; i++)
//	{
//		printf("%d ", p1[i]);
//	}
//	free(p1);
//	p1 = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,0,0,0,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", dominantIndex(arr, sz));
//	return 0;
//}

//size_t strlen( const char *string );

int My_strlen(const char* desc)
{
	assert(desc);
	const char* p = desc;
	int count = 0;
	while (*p++ != '\0')
	{
		count++;
		//p++;
	}
	return count;
}

int main()
{
	char arr[] = "aaa\0aaa";
	int ret = My_strlen(arr);
	printf("%d\n", ret);
	return 0;
}