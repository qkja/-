#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int func(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return n / 3 + func(n % 3 + n / 3);
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n != 0)
        {
            printf("%d\n", func(n));
        }
        else
        {
            break;
        }
    }
    return 0;
}