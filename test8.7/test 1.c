#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("�Ǻ�");
//	return 0;
//}
//struct Stu 
//{
//	char naem[20];
//	int age;
//};
//int main()
//{
//	//struct Stu s[2]={""}
//
//	return 0;
//}
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
////void qsort(void* base, size_t num, size_t size,
////	int (*com)(const void*e1, const void*e2));
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int i = 0;
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz1, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//	return (( int )(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
//    int sz2 = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz2, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	//return ((int)(*(float*)e1 - *(float*)e2));
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//   return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);//�ַ����ıȽϣ���strcmp
//
//	//return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]), cmp_stu_by_age);
//	int i = 0;
//	struct Stu* p = s;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", (p+i)->name, s[i].age);
//	}
//}
//void test4()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//}
//
//int main()
//{
//	//int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	//int sz1 = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz1, sizeof(arr[0]), cmp_int);
//	///*float f[] = { 9.0,8.0,7.0,6.0,5.0 };
//	//int sz2 = sizeof(f) / sizeof(f[0]);*/
//	//int i = 0;
//	//for(i=0;i<10;i++)
//	//{
//	//	printf("%d ",arr[i]);
//    //}
//	//test1();
//	//test2();
//	test3();
//	//test4();
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int *pa=&a;
//	//char *ppa=&a;
//	void* pppa = &a;//void*  ���Խ����������͵ĵ�ַ
//	//*pppa = 0;    //void*���͵�ָ�벻�ܽ��н����ò���   
//	                //Ҳ���ܽ��мӼ������Ĳ���
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	printf("%d", sizeof(struct Stu));//�ṹ����ռ�ֽڵĴ�С>=�ڲ�֮��
//	return 0;
//}
//��ôд
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	//return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//��һ������   ����������Ԫ�صĵ�ַ
//	//�ڶ�������   ����������Ԫ�صĸ���
//	//����������   �����������ÿ��Ԫ�صĴ�С  �� ��λ���ֽ�
//	//���ĸ�����   �Ǻ���ָ�룬�Ƚ�����Ԫ�����õĵ�ַ �� �Լ�ʵ��
//	//             ���������Ǵ��Ƚ�����Ԫ�صĵĵ�ַ
//	int i = 0;
//	struct Stu* p = s;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", (p + i)->name, s[i].age);
//	}
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	//return ((int)(*(float*)e1 - *(float*)e2));
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//�ַ����ıȽϣ���strcmp
//
//	 //return ((int)(*(float*)e1 - *(float*)e2));
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ�ص�
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1= *buf2;
//		*buf2 =tmp ;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void *e1,void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (cmp((char*)base+j*width, (char*)base + (j+1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//			//����Ԫ�صıȽ�
//		}
//	}
//}
//void test4()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]), cmp_stu_by_age);
//}
//void test6()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	//test4();
//	//test5();
//	test6();
//	return 0;	
//}
//int main()
//{
//	printf("%d", 23);
//	return 0;
//}
