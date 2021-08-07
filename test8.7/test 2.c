#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("hehehehehehehehehgeheh\\n");
//	return 0;
//}
//回调函数
//指针笔试题
//一维数组
//int main()
//{
//	//数组名表示首元素的地址
//	// 两个例外
//	//1、sizeof(数组名）-数组名表示整个数组
//	//2、&（数组名）    -数组名表示整个数组
//	// 除此之外所有的数组名都是首元素地址
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));     //16  sizeof(数组名）-计算的的是数组的总大小 - 单位字节
//	printf("%d\n", sizeof(a + 0)); //4   
//	printf("%d\n", sizeof(*a));    //4   
//	printf("%d\n", sizeof(a + 1)); //4
//	printf("%d\n", sizeof(a[1]));  //4
//	printf("%d\n", sizeof(&a));    //4   &a取出的的数组的地址，本质上是一个地址  4/8
//	printf("%d\n", sizeof(*&a));   //16  解引用看类型能访问几个字节
//	printf("%d\n", sizeof(&a + 1));//4   跳过整个数组
//	printf("%d\n", sizeof(&a[0])); //4   
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	//printf("%d\n", sizeof( 1));
//	return 0;
//}
#include<string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));        //6
	//printf("%d\n", sizeof(arr + 0));    //4
	//printf("%d\n", sizeof(*arr));		//1
	//printf("%d\n", sizeof(arr[1]));		//1
	//printf("%d\n", sizeof(&arr));		//4
	//printf("%d\n", sizeof(&arr + 1));	//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("%d\n", strlen(arr));		// 随机值  后面内存不知道
	printf("%d\n", strlen(arr + 0));    // 随机值  
	//printf("%d\n", strlen(*arr));       //strlen  要的是一个地址  语法错误  将97看一个的地址
	//printf("%d\n", strlen(arr[1]));     //错误
	printf("%d\n", strlen(&arr));       //随机值
	printf("%d\n", strlen(&arr + 1));   //随机值
	printf("%d\n", strlen(&arr[0] + 1));//随机值
	/*char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	char* p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));*/

	return 0;
}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//	return 0;
//}
//int main()
//{   //二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	return 0;
//}