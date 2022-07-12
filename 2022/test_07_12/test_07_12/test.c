#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

int main()
{
	//  malloc  开辟空间 不初始化
	int* p1 = (int*)malloc(sizeof(int)* 4);
	assert(p1);

	//calloc 开辟空间  初始化 为 0
	int* p2 = (int*)calloc(4, sizeof(int));
	assert(p2);
	// 追加 空间
	p1 = (int*)relloc(p1, sizeof(int)* 8);

	free(p1);
	free(p2);
	return 0;
}