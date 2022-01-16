#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	unsigned int a = -10;
//	printf("%u\n", a);
//	return 0;
//}


//大端小端
//大端  -  高位放在低地址
//小端  -  地位放在低地址
//int main()
//{
//	unsigned int a = -10;
//	//10000000 00000000 00000000 00001010      -原码
//	//11111111 11111111 11111111 11110101      -反码
//	//11111111 11111111 11111111 11110110      -补码
//	//FFFFFFF6    小端存储
//	return 0;
//}


////判断大小端
//int fun(void)
//{
//	int a = 1;
//	//00000000 00000000 00000000 00000001
//	//0x0000001
//	int ret = (char)a;
//	return ret;
//}
//int main()
//{
//	int ret = fun();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else if (0 == ret)
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char a[10] = { 'a','b','c',0,'d','e','f','g','\0' };
//	printf("%d\n", strlen(a));
//	/*char b = '0';
//	printf("%d\n", b);*/
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}
