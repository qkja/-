#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("hehehehehehehehehgeheh\\n");
//	return 0;
//}
//�ص�����
//ָ�������
//һά����
//int main()
//{
//	//��������ʾ��Ԫ�صĵ�ַ
//	// ��������
//	//1��sizeof(��������-��������ʾ��������
//	//2��&����������    -��������ʾ��������
//	// ����֮�����е�������������Ԫ�ص�ַ
//	//һά����
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));     //16  sizeof(��������-����ĵ���������ܴ�С - ��λ�ֽ�
//	printf("%d\n", sizeof(a + 0)); //4   
//	printf("%d\n", sizeof(*a));    //4   
//	printf("%d\n", sizeof(a + 1)); //4
//	printf("%d\n", sizeof(a[1]));  //4
//	printf("%d\n", sizeof(&a));    //4   &aȡ���ĵ�����ĵ�ַ����������һ����ַ  4/8
//	printf("%d\n", sizeof(*&a));   //16  �����ÿ������ܷ��ʼ����ֽ�
//	printf("%d\n", sizeof(&a + 1));//4   ������������
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
	printf("%d\n", strlen(arr));		// ���ֵ  �����ڴ治֪��
	printf("%d\n", strlen(arr + 0));    // ���ֵ  
	//printf("%d\n", strlen(*arr));       //strlen  Ҫ����һ����ַ  �﷨����  ��97��һ���ĵ�ַ
	//printf("%d\n", strlen(arr[1]));     //����
	printf("%d\n", strlen(&arr));       //���ֵ
	printf("%d\n", strlen(&arr + 1));   //���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
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
//{   //��ά����
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