#define _CRT_SECURE_NO_WARNINGS 1
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test(int x, int y) 
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
void test1(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}