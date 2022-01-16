#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>

int Is_sto(void)
{
	int a = 1;
	//1   ---    00 00 00 01
	//大端 返回 0
	//小端 返回 1
	return (char)a;
}
int main()
{
	
	if (0 == Is_sto())
		printf("大端\n");
	else
		printf("小端\n");
	system("pause");
	return 0;
}




//int main()
//{
//	int a = -5;
//	//预测在空间中的存储：0xff ff ff fb
//	system("pause");
//	return 0;
//}















//int main()
//{
//	/*printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(double));*/
//
//
//
//	char arr[12] = "hello world";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//
//	system("pause");
//	return 0;
//}