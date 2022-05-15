#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void func(const char* arr, int* ret)
{
    //ÅÐ¶Ï  ÊÇ  +   »¹ÊÇ   -

    for (int i = 0; i < 3; i++)
    {
        if (*(arr + i) == '+')
        {
            *ret = *ret + 1;
            break;
        }
        else if (*(arr + i) == '-')
        {
            *ret = *ret - 1;
            break;
        }
    }
}

int finalValueAfterOperations(char** operations, int operationsSize) {
    int len = sizeof(operations) / sizeof(operations[0]);
    int ret = 0;
    for (int i = 0; i < len; i++)
    {
        func(operations[i], &ret);
    }
    return ret;
}

int main()
{
	char* arr[] = { "--X","X++","X++"};
	int len = sizeof(arr)/sizeof(arr[0]);
    finalValueAfterOperations(arr, len);
	printf("%d", len);
	return 0;
}