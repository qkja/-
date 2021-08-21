#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	return 0;
//}
//int main()
//{
//	//feof();//EOF - end of file文件结束标志
//	FILE *pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	printf("%s\n", strerror(errno));
//	return 0;
//}
//int main()
//{
//	FILE *pf = fopen("test2.txt", "r");
//	if (!pf)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) 
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//	fp = NULL;
//}
//int main(void)
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("\nerror\n");
//	}
//	else if (feof(pf))
//	{
//		printf("\nend of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//}
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c=Add(a, b);
//	printf("c=%d\n", c);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}





//翻译环境   .c ---> .exe 
//.exe 二进制文件
//.c   文本文件
//test .obj object  目标文件
//编译  预编译 编译 汇编



//int main()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//	////任何数据和0
//	////左移和右移
//	////
//	//int a = 1;
//	////左移
//	////右移
//	//a << 1;
//	//printf("%d\n", a);
//	//printf("%d\n", a<<1);
//	//printf("%d\n", a<<1+1);
//	return 0;
//}
//后置++
#include<stdio.h>
#include<windows.h>

int main()
{


	//复杂表达式
	/*int i = 1;
	int j = (++i) + (++i) + (++i);*/  //什么鬼？  不同编译器不一样
	                                //第一个i自增后会不会影响后面的i
	//printf("%d\n", j);
	/*int a = 8;
	int b = a++;*/
	/*int a = 8;
	a++;*///直接自增
	//什么叫先使用
	//      后自增
	/*int i = 0;
	for (i = 0; i < 10; i++)
	{
		;
	}
	for (i = 0; i < 10; ++i)
	{
		;
	}*/
	/*int i = 20;
	int j = 10;
	printf("%d\n", i++ + ++j);
	printf("%d\n",i++);
	printf("%d\n",++j);
	printf("%d\n", i);
	printf("%d\n", j);*/
	/*int a = 2;
	int b = -2;
	int c=a / b;*/
	/*int a = -5;
	int b = 5;
	printf("%d %d\n", a, b);
	printf("%d %d\n", a/2, b/2);*/
	int i = -2.9;
	int j = 2.9;
	printf("%d\n", i);
	printf("%d\n", j);
	system("pause");
	return 0;
}

