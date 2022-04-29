#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}


//int main()
//{
//	const int cap = 10;
//	int arr[cap];
//	return 0;
//}
int lengthOfLastWord(char* s) {
    if (s == NULL)
    {
        return 0;
    }
    int len = strlen(s);
    int i = len;
    int count = 0;
    while (s[i] == ' ')
    {
        i--;
    }
    while (s[i] != ' ')
    {
        i--;
        count++;
    }
    return count;
}
int main()
{
    lengthOfLastWord("Hello world");
    return 0;
}