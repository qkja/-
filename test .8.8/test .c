#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char ch[] = "abcdef";
//	printf("%d\n", sizeof(&ch));
//	printf("%d\n", sizeof(&ch+1));
//	return 0;
//}
//int main()
//{
// //strlen 接受的是地址
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));        //6
//	printf("%d\n", strlen(arr + 0));    //6
//	printf("%d\n", strlen(*arr));       //错误
//	printf("%d\n", strlen(arr[1]));     //错误
//	printf("%d\n", strlen(&arr));       //6
//	printf("%d\n", strlen(&arr + 1));   //随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	//printf("%d\n", sizeof(arr));         //7
//	//printf("%d\n", sizeof(arr + 0));     //4
//	//printf("%d\n", sizeof(*arr));        //1
//	//printf("%d\n", sizeof(arr[1]));      //1
//	//printf("%d\n", sizeof(&arr));        //4
//	//printf("%d\n", sizeof(&arr + 1));    //4
//	//printf("%d\n", sizeof(&arr[0] + 1)); //4
//	return 0;
//}
//int main()
//{
//	char ch[7] = "abcdef";
//	char(*p)[7] = &ch;
//	printf("%s\n", *p);
//	printf("%s\n", ch);
//	return 0;
//}
//int main()
//{  
//	char aa[] = "abc";
//	printf("%d", sizeof(aa[0]));//  1  ?  为什么不是4  
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";   //常量字符串，a的地址放在p里面了
//	//const char* p = "abcdef";   
//	/*printf("%p", p);
//	printf("%s", *p);*/
//	/*printf("%d\n", sizeof(p));  
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));*/
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//错误
//	//printf("%d\n", strlen(p[0]));//错误
//	printf("%d\n", strlen(&p));//6   为什么是随机值   
//	printf("%d\n", strlen(&p + 1)); //  随机值  
//	printf("%d\n", strlen(&p[0] + 1));// 5
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("hehehr :%d", a);
//	return 0;
//}
#include "test .h"
//int main()
//{
//	printf("hhe");
//	return 0;
//}
int main()
{
	int  arr[3][4] = { 0 };
	int* p = arr;
	printf("%p\n", p);
    p= arr[0];
	printf("%p\n", p);
	p =&arr[0][0];
	printf("%p\n", p);
	p=&arr[0][1];
	printf("%p\n", p);
	p = &arr[0][2];
	printf("%p\n", p); 
	p = &arr[0][3];
	printf("%p\n", p);
	p = &arr[0][4];
	printf("%p\n", p);
	
	return 0;
}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));          // 4*12
//	printf("%d\n", sizeof(a[0][0]));    // 4
//	printf("%d\n", sizeof(a[0]));      //  4*4
//	printf("%d\n", sizeof(a[0] + 1));  //  4// 为什么是4
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1)); //4   地址  第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//16
//	printf("%d\n", sizeof(*(&a[0] + 1)));//4
//	printf("%d\n", sizeof(*a));//4
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	return 0;
//}
//int main()
//{
//	printf("%d", sizeof(1));
//	return 0;
//}
