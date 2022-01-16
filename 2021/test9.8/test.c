#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	double pi = 3.1415926;
//	float a = 0.0;
//	a = (float)pi;
//	a = (long)pi;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int* p = &i;
//	scanf("%d", i);
//	/*printf("%d\n", i);
//	scanf("%d", &i);
//	printf("%d\n", i);
//	scanf("%d", p);
//	printf("%d\n", i);*/
//	return 0;
//}
//int test(void)
//{
//	static int i = 0;
//	i++;
//	return i;
//}
//int main()
//{
//	int d = test();
//	int b = test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	const int* p = &i;
//	printf("%p\n", p);
//	//*p = 10;
//	int j = 10;
//	p = &j;
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int* const p = &i;
//	printf("%p\n", p);
//	*p = 10;
//	//int j = 10;
//	//p = &j;
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	int* d = NULL;
//	p = d;
//	return 0;
//}

//int main()
//{
//	float sum = 1.1;
//	float sum_1 = 0.0;
//	return 0;
//}
//#define my_type int
//void swap(my_type* a, my_type* b)
//{
//	/*a = (my_type*)a;
//	b = (my_type*)b;*/
//	my_type temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	my_type a = 10;
//	my_type b = 20;
//	swap(&a, &b);
//	return 0;
//}
//void split_sec(int total_sec, int* hr, int* min, int* sec)
//{
//	//   3661
//	*hr = total_sec / 3600;
//	*min = (total_sec - (*hr) * 3600) / 60;
//	*sec = total_sec - *hr * 3600 - *min * 60;
//}
//int main()
//{
//	int total_sec = 0;
//	int sec = 0;
//	int hr = 0;
//	int min = 0;
//	scanf("%d", &total_sec);
//	split_sec(total_sec , &hr , &min , &sec);
//	printf("%d:%d:%d\n", hr, min, sec);
//	return 0;
//}
//#define N 10
//#define my_type int
//void find_two_largest(my_type a[], int n, my_type* largest, my_type* second_largest)
//{
//	//求最大值和第二个值
//	//第一种排序 
//	// 
//	
//	//第二种
//	int i = 0;
//	*largest = a[0];
//	*second_largest = a[0];
//	/**largest = a[0];*/
//	for (i = 1; i < n; i++)
//	{
//		if (a[i] > *largest)
//		{
//			*largest = a[i];
//		}
//	}
//	for (i = 1; i < n; i++)
//	{
//		if ((a[i] < *largest)&&(a[i] > *second_largest))
//		{
//			*second_largest = a[i];
//		}
//	}
//}
//void find_two_largest_1(my_type a[], int n, my_type* largest, my_type* second_largest)
//{
//	int i = 0;
//	*largest = a[0];
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] > *largest)
//		{
//			*second_largest = *largest;
//			*largest = a[i];
//		}
//	}
//}
//int main()
//{
//	my_type arr[N] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	my_type largest = 0;
//	my_type second_largest = 0;
//	find_two_largest(arr , N , &largest , &second_largest);
//	printf("%d %d\n", largest, second_largest);
//	find_two_largest_1(arr , N , &largest , &second_largest); 
//	printf("%d %d\n", largest, second_largest);
//
//
//	
//	return 0;
//}

