#define _CRT_SECURE_NO_WARNINGS 1

//char * longestCommonPrefix(char ** strs, int strsSize){
//
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "";
//	char* pp[] = { p1, p2 };
//	printf("%d\n", strlen(pp[0]));
//	printf("%d\n", strlen(pp[1]));
//	return 0;
//}

char * longestCommonPrefix(char ** strs, int strsSize)
{
	if (strs == NULL)
	{
		return NULL;
	}

	int minSize = 200;
	for (int i = 0; i < strsSize; i++)
	{
		int ret = strlen(strs[i]);
		if (ret < minSize)
		{
			minSize = ret;
		}
	}

	char* p = (char*)malloc(sizeof(char)* (minSize+1));
	char* helpstr = (char*)malloc(sizeof(char)*(strsSize + 1));

	int k = 0;

	for (int i = 0; i < minSize; i++)
	{
		//得到每一个字符串的字符
		
		for (int j = 0; j < strsSize; j++)
		{
			char ch = *(strs[j] + i);
			helpstr[j] = ch;
		}

		//判断每一个字符是不是相等
		char ch = helpstr[0];
		for (int j = 0; j < strsSize; j++)
		{
			if (ch != helpstr[j])
			{
				free(helpstr);
				helpstr = NULL;
				p[k] = '\0';
				return p;
			}
		}
		p[k++] = ch;
	}
	free(helpstr);
	helpstr = NULL;
	p[k] = '\0';
	return p;
}

int main()
{
	char* strs[] = { "dog", "racecar", "car" };
	int sz = sizeof(strs) / sizeof(strs[0]);
	char* p = longestCommonPrefix(strs, sz);
	while (*p!='\0')
	{
		printf("%c", *p);
		p++;
	}
	free(p);
	p = NULL;
	return 0;
}

