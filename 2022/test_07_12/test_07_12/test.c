#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

int main()
{
	//  malloc  ���ٿռ� ����ʼ��
	int* p1 = (int*)malloc(sizeof(int)* 4);
	assert(p1);

	//calloc ���ٿռ�  ��ʼ�� Ϊ 0
	int* p2 = (int*)calloc(4, sizeof(int));
	assert(p2);
	// ׷�� �ռ�
	p1 = (int*)relloc(p1, sizeof(int)* 8);

	free(p1);
	free(p2);
	return 0;
}