#define _CRT_SECURE_NO_WARNINGS 1
//#include"test.h"
//#include<stdio.h>
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d ", i);
//		}
//		printf("\n");
//	}
//	return 0;
//}`
//extern int v_gal;//�������ٴ�������������û�п��ٿռ�
//                      //���еı�������ʱ�������ó�ʼֵ
//int main()
//{
//	//printf("%d\n", v_gal);
//	//print();
//	//print2(100);
//	//system("pause");
//	/*int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	system("pause");*/
//	return 0;
//}
//ȫ�ֱ������Կ��ļ������𣿣�
// ����
//�������Կ��ļ������𣿣�
// ����
//�ؼ��� 
//static
//sizeof
//int main()
//{
//	print2_helper(); 
//   // print2(100);
//	return 0;
//}
//i �ֲ��������ֲ���ʱ�ԣ��������ÿ��ٿռ䣬�����ͷſռ�
//static void fun()
//{
//    int i = 0;
//	i++;
//	printf("i=%d\n", i);
//	printf("i=%p\n", &i);
//}
//int* p = NULL;
//static void fun1()
//{
//	/*static int i = 0;
//	i++;
//	printf("i=%d\n", i);*/
//	static int a = 100;
//	p=&a;
//}
//int main()
//{
//	/*for (int j = 0; j < 10; j++)
//	{
//		fun();
//	}*/
//	/*for (int i = 0; i < 10; i++)
//	{
//		fun1();
//	}*/
//	//fun1();
//	//printf("%d", *p);//
//	//printf("%d", a);
//	return 0;
//}
//Ϊʲôȫ�ֱ�������ȫ����
//#include<stdio.h>
//int search(int *p, int x, int y)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < x; i++)
//    {
//        if (*(p+i) == y)
//            count++;
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int m = 0;
//    scanf("%d", &m);
//    int ret = search(arr, n, m);
//    printf("%d\n", ret);
//    return 0;
//}
//int main()
//{
//	static int b = 10;
//	b = 100;
//	printf("%d", b);
//	return 0;
//}
//��������������
//��������
//�Զ�������
//int main()
//{
//	int sz = sizeof(int);
//	printf("%d", sz);
//	//sizeof  �Ǻ�����
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>

//int test(int x)
//{
//    return x < 2 ? x : test(x - 1) * x;
//}
//int main()
//{
//    int ret = 0;
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret += test(i);
//    }
//    printf("%d\n", ret);
//}
//#include"test.h"
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}