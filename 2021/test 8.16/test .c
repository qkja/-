#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ǰ����֪�����ڴ�ʹ�÷�ʽ
//����һ������
//����һ������
int a = 20;             //ȫ�ֱ��� - ��̬��
int arr1[20] = { 0 };   // ��̬��
struct S
{
	char name[20];
	int age;
};
//#include<stdio.h>
//int main()
//{
//  int b = 10;          //�ֲ�����  -  ջ��
//  int arr2[20] = { 0 };// ջ��
//  struct S arr3[50];
//  //����ֻ��30��ѧ�����˷� 
//  //100 ����
//  return 0;
//}
////C�����ǿ��Դ����䳣����  -C99֧��
////ʲô�Ǳ䳣����
////int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n] = { 0 };//�䳣����
//	return 0;
//}

//��̬�ڴ����  ���� ����
//��Ƶ�4������
//malloc
//free
//calloc
//realloc
// һ��һ����ѧ
//malloc
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	//���ڴ�����10�����͵Ŀռ�
	int *p=(int *)malloc(10* sizeof(int));
	//int *p=malloc(10* sizeof(int));
	if (p == NULL)//����ʧ��
	{
		//��ӡ�����һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//������Ķ�̬�ռ䲻��ʹ�õ�ʱ��
	//free
	free(p);//��Ȼ�������ҵ�֮ǰ�Ŀռ�
	p = NULL;
	/**p = 0;
	printf("%d", *p);*/
	return 0;
}
































