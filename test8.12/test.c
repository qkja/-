#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//    int a[4][4] = { {1,2,3,4},{5,6,7,8},{11,12,13,14},{15,16,17,18} };
//    int i = 0, j = 0, s = 0;
//
//    while (i++ < 4)
//    {
//
//        if (i == 2 || i == 4) 
//        continue;
//
//        j = 0;
//
//        do 
//        { 
//            s += a[i][j]; j++;
//        }
//        while (j < 4);
//    }
//
//    printf("%d\n", s);
//}
//int main()
//{
//	int i = 0;
//	//i++;
//	printf("%d\n", i++);
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//	int ret = strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}
#include<assert.h>
//const char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	//
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*) p1;
//	if (*p2 == '\0')
//		return (char*)p1;
//	//查找过程
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && !(*s1-*s2))
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2=='\0')
//		{
//			return cur;
//		}
//		if (*s1 = '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	//const char* p1 = "abcdefabcdef";
//	const char* p1 = "abcdddefabcdef";
//    const char* p2 = "def";
//	//char* p3 = strstr(p1, p2);
//	char* p3 = my_strstr(p1, p2);
//	if (p3 == NULL)
//	{
//		printf("字符不存在\n");
//	}
//	else
//	{
//	printf("%p\n", p3);
//    printf("%s\n", p3);
//	}
//	
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef@.detu.rr";
//	char* p = "@.";
//	printf("%s\n", strtok(arr, p));
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	printf("%d ", arr[i]);
//	return 0;
//}
/* memcpy example */
//#include <stdio.h>
//#include <string.h>
//
//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//
//	/* using memcpy to copy string: */
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//
//	/* using memcpy to copy structure: */
//	memcpy(&person_copy, &person, sizeof(person));
//
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//
//	return 0;
//}
//char* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	int i = count;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));*/
//	//printf("%d ", arr[i]);
//	//	my_memcpy不能胜任重叠拷贝
//	//memcpy C 语言标桩 该函数可以拷贝不重叠的就可以了
//	//VS 可以，超额完成任务了
//	int arr3[] = { 1,2,3,4,5,6,7,8,10 };
//	//my_memcpy(arr3 + 2, arr3, 20);
//	memmove(arr3 + 2, arr3, 20);
//	return 0;
//}
//研究memmove 函数
//从后向前拷贝
//从前向后拷贝
char* my_memmove(void* dest, const void* src, size_t count)
{

}
int main()
{
	int arr4[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr4 + 2, arr4, 20);

	return 0;
}