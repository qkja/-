#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h>
int main()
{
	char ch[] = { 'a', 'b', 'c' };
	printf("%d\n", strlen(ch));
    int ret = printf("%d\n", 123456);
	printf("%d\n", ret);
	system("pause");
	return 0;
}