#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	printf("heheh\n");
//	return 0;
//}
#include<string.h>
//int main()
//{
//	//int len = strlen("abcdef");
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", len);
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
#include<assert.h>
//int my_strlen(const char* str)
//{
//	    int i = 0;
//		assert(str != NULL);
//		while (*str != '\0')
//		{
//			i++;
//			str++;
//		}
//		return i;
//}
//int my_strlen(char ch[],int x)
//{
//	int left = ch;
//	int right = &ch[x ];
//
//}
//int main()
//{
//	//char ch[] = "abcdef";
//	////int sz = sizeof(ch) / sizeof(ch[0]);
//	//int len = my_strlen(ch,sz);
//	//printf("%d\n", len);
//	//int len = strlen("abc") - strlen("abcdef");
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	size_t;
//	return 0;
//}
//char * my_stycpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src，包含‘\0’
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//		/*dest++;
//		src++;*/
//	}
//	//*dest = *src;
//	//返回char*
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefgi";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_stycpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxx";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	//printf("%s\n", "abcd\0ef");
//	return 0;
//}
char * my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//找到目的地'\0'的位置
	//找到++
	while (*dest!='\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		//*dest++ = *src++;
		//dest++;
		//src++;
		;
	}
	return ret;
}
int main()
{
	char ch[30] = "hello";
	char ch1[] = "world";
	my_strcat(ch, ch1);
	printf("%s\n", ch);
	return 0;
}
