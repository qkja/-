#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	unsigned int a = -10;
//	printf("%u\n", a);
//	return 0;
//}


//���С��
//���  -  ��λ���ڵ͵�ַ
//С��  -  ��λ���ڵ͵�ַ
//int main()
//{
//	unsigned int a = -10;
//	//10000000 00000000 00000000 00001010      -ԭ��
//	//11111111 11111111 11111111 11110101      -����
//	//11111111 11111111 11111111 11110110      -����
//	//FFFFFFF6    С�˴洢
//	return 0;
//}


////�жϴ�С��
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
//		printf("С��\n");
//	}
//	else if (0 == ret)
//	{
//		printf("���\n");
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
