#define _CRT_SECURE_NO_WARNINGS 1
int check_sys(void)
{
	int a = 1;
	char* pa=(char*)&a;
	/*if (*pa == 1)
		return 1;
	else if (*pa == 0)
		return 0;*/
	return *pa;
}