#define _CRT_SECURE_NO_WARNINGS 1
#include"test .h"
//extern int g_val;      //����������  ���������ٿռ� ���ܸ�ֵ�ͳ�ʼ��
//int main()
//{
//	show();
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}
static int g_val = 100;      //static ����ȫ�ֱ�������ñ���ֻ���ڱ��ļ��ڷ���
static void show(int num)
{
	/*printf("hehehe\n");*/

	printf("hello show()! %d\n", num);
	printf("hello show()! %d\n", g_val);
}
void show_helper(int x)
{
	show(x);
}