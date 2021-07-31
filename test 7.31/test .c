#define _CRT_SECURE_NO_WARNINGS 1
//整型提升
#include<stdio.h>
//int main()
//{
//	char a = 127;
//	//000000000000000000000000001111111
//	char b = 3;
//	//000000000000000000000000000000011
//   //01111111
//   //00000011
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000010000010
//	//10000010
//	//11111111111111111111111110000010   -补码
//
//	char c = a + b;
//	printf("%d", c);
//	//return 0;
//	//printf("%d", c);
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		//00000000000000000000000010110110
//		//整型提升
//		//11111111111111111111111110110110   -补码
//		//
//		printf("a");
//	if (b ==0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//int main()
//{
//	char c = 1;			
//		printf("%u\n", sizeof(c));
//		printf("%u\n", sizeof(+c));
//		printf("%u\n", sizeof(!c));
//	return 0;
//}
//算术转换
//小的类型转化成大的类型
//操作符的优先级
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;	
//	printf("%d", c);
//    c = b + a + 3;
//	printf("%d", c);
//	return 0;
//}
//操作符的结合性
//是否控制求值
//int main()
//{
//	int c = 1;
//	int b = c + --c;//问题代码，不能确定第一个a的获值在--之前还是之后
//	printf("%d", b);
//	return 0;
//}
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer = 0;
//	answer = fun() - fun() * fun();//问题代码，不能确定那个fun（）函数先开始
//	printf("%d", answer);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d", a);
//	return 0;
//}
//十进制—>二进制
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	while (n)
//	{
//		arr[i] = n % 2;
//		i++;
//		n = n / 2;
//	}
//	int j = 0;
//	for (j = i - 1; j >= 0; j--)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d", 1 / 2);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	arr[0] = 0;
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (num > arr[i])//i=5  6>5
//		{
//			arr[i - 1] = arr[i];
//		}
//		else
//			break;
//	}
//	arr[i-1] = num;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//避免野指针
//指针初始化
//小心越界
//指针指向的空间释放了就指向空指针
//使用指针之前检测指针的有效性
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//		*pa = 30;
//	}
//	printf("%d", a);
//	return 0;
//}
//指针运算
//指针加减整数
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = i;
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//    float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp=0;
//	}
//
//	return 0;
//}
//指针减去指针  =中间元素的个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a=&arr[5] - &arr[2];
//	printf("%d", a);
//	return 0;
//}
//int my_strlen(char* ch)
//{/*
//	if (*ch != '\0')
//	{
//
//	}*/
//	char* start = ch;
//	char* end = ch;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	char ch[] = "bit";
//	int len=my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}
//指针的关系运算  
//int main()
//{
//	printf("hehe\n    hehe");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char ch1 = 0;
//    char ch2 = 0;
//    scanf("%s %s", &ch1, &ch2);
//    if (strcmp(ch1, ch2) == 0)
//        printf("same");
//    else
//        printf("different");
//    return 0;
//}
//数组与指针
//&数组名 --整个数组的地址
//sizeof(数组名)--计算的是整个数组的大小
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char ch1[105], ch2[105];
//    scanf("%s %s", ch1, ch2);
//    //scanf("%s %s",&ch1,&ch2);
//    if (strcmp(ch1, ch2) == 0)
//        printf("same");
//    else
//        printf("different");
//    return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//     printf("%d ",arr[i]);
//	}
//	
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p======%p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int *pa=&a;
//	int **ppa=&pa;
//	printf("%d\n", **ppa);
//	printf("%p\n", pa);
//	printf("%p\n", *ppa);
//	printf("%p\n", ppa);
//	return 0;
//}
//指针数组----存放指针的数组
//int main()
//{
//	int a = 10;
//	int b = 18;
//	int c = 3;
//	int* arr[10] = { &a, &b, &c };//指针数组
//	printf("%p", arr[2]);
//	return 0;
//}
//数组指针

