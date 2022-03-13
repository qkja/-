#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr[101] = { 0 };
	int ch = 0;
	int j = 0;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			if (ch == 'Z')
			{
				ch = 'a';
			}
			else
			{
				ch = ch + 'a' - 'A' + 1;
			}
			
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			switch (ch)
			{
			case 'a':
			case 'b':
			case 'c':
				ch = '2';
				break;
			case 'd':
			case 'e':
			case 'f':
				ch = '3';
				break;
			case 'g':
			case 'h':
			case 'i':
				ch = '4';
				break;
			case 'j':
			case 'k':
			case 'l':
				ch = '5';
				break;
			case 'm':
			case 'o':
			case 'n':
				ch = '6';
				break;
			case 'p':
			case 'q':
			case 'r':
			case 's':
				ch = '7';
				break;
			case 't':
			case 'u':
			case 'v':
				ch = '8';
				break;
			case 'w':
			case 'x':
			case 'y':
			case 'z':
				ch = '9';
				break;
			}
		}
		arr[j++] = ch;
	}

	printf("%s\n", arr);
	return 0;
}