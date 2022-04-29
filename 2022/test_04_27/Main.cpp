//#define _CRT_SECURE_NO_WARNINGS 1
#include "DSList.h"
////int main()
////{
////	ListNode* paceSetter = ListCreate(); //标兵
////	assert(paceSetter);
////
////
////	ListPushBack(paceSetter, 1);
////	ListPushBack(paceSetter, 2);
////	ListPushBack(paceSetter, 3);
////
////	ListPopBack(paceSetter);
////
////	ListPrint(paceSetter);
////
////	ListDestory(paceSetter);
////	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//
//void adjustDown(char arr[],int len,int root)
//{
//	assert(arr);
//	int parent = root;
//	int child = 2 * parent + 1;
//	while (child < len)
//	{
//		if (child + 1 < len && arr[child + 1] > arr[child])
//		{
//			child++;
//		}
//		if (arr[child] > arr[parent])
//		{
//			char ret = arr[child];
//			arr[child] = arr[parent];
//			arr[parent] = ret;
//		}
//		else
//		{
//			break;
//		}
//		parent= child;
//		child = 2 * parent + 1;
//	}
//}
//
//void func(char arr[], int len)
//{
//	assert(arr);
//	//abcd
//	for (int parent = (len - 1 - 1) / 2; parent >= 0; parent--)
//	{
//		adjustDown(arr, len, parent);
//	}
//	
//	//
//
//	for (int i = 0; i < len-1; i++)
//	{
//		//交换
//		char ret = arr[0];
//		arr[0] = arr[len - 1 - i];
//		arr[len - 1 - i] = ret;
//		adjustDown(arr, len-1-i, 0);
//	}
//}
//
////int main()
////{
////	char arr[21] = { 0 };
////	scanf("%s", arr);
////	int len = strlen(arr);
////	func(arr, len);
////	printf("%s\n", arr);
////	return 0;
////}
//
////int main()
////{
////	add(1);
////	return 0;
////}
//
//
//

//int main()
//{
//	func();
//	return 0;
//}



//挖坑方法

void part(int* arr, int left, int right)
{
	int pit = left;
	int ret = arr[left];
	while (left < right)
	{
		while (left < right && arr[right] > ret)
		{
			right--;
		}

	}
}