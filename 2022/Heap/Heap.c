#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void InitMyHeap(MyHeap* pHeap)
{
	assert(pHeap);
	pHeap->elem = NULL;
	pHeap->size = 0;
	pHeap->useSize = 0;
}



void swap(HPDataType* pa, HPDataType* pb)
{
	assert(pa && pb);

	HPDataType temp = *pa;
	*pa = *pb;
	*pb = temp;
}

bool IsFull(MyHeap* pHeap)
{
	assert(pHeap);
	return pHeap->size == pHeap->useSize;
}
//小堆
void HeapPush(MyHeap* pHeap, HPDataType x)
{
	assert(pHeap);
	if (IsFull(pHeap))
	{
		//扩容   二倍扩
		size_t newSize = (pHeap->size == 0) ? 4 : 2 * (pHeap->size);
		HPDataType* cur = (HPDataType*)realloc(pHeap->elem, sizeof(HPDataType) * newSize);
		if (cur == NULL)
		{
			printf("Realloc fail\n");
			return;
		}
		pHeap->elem = cur;
		pHeap->size = newSize;
	}

	pHeap->elem[pHeap->useSize++] = x;
	adjustUp(pHeap);
}

void adjustUp(MyHeap* pHeap)
{
	assert(pHeap);
	int child = pHeap->useSize - 1;
	//int parent = (child - 1) / 2;

	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if ((int)pHeap->elem[child] HEAP (int)pHeap->elem[parent])
		{
			swap(&pHeap->elem[child], &pHeap->elem[parent]);
		}
		else
		{
			break;
		}
		child = parent;
	}
}

void Display(MyHeap* pHeap)
{
	assert(pHeap);
	for (int i = 0; i < (int)pHeap->useSize; i++)
	{
		printf("%d ", pHeap->elem[i]);
	}
}

HPDataType HeapTop(MyHeap* pHeap)
{
	assert(pHeap);
	if (IsEmpty(pHeap))
	{
		return -1;
	}
	return pHeap->elem[0];
}

//删除堆顶的数据

void HeapPop(MyHeap* pHeap)
{
	assert(pHeap);
	if (IsEmpty(pHeap))
	{
		return;
	}
	//交换  0  最后的数据
	swap(&pHeap->elem[0], &pHeap->elem[pHeap->useSize - 1]);
	pHeap->useSize--;
	//向下调整
	adjustDown(pHeap);
}

void adjustDown(MyHeap* pHeap)
{
	assert(pHeap);
	int parent = 0;
	int child = 2 * parent + 1;
	while (child < pHeap->useSize)
	{

		if (child + 1 < pHeap->useSize && pHeap->elem[child] > pHeap->elem[child + 1])
		{
			child++;
		}
		if (pHeap->elem[parent] > pHeap->elem[child])
		{
			swap(&pHeap->elem[child], &pHeap->elem[parent]);
		}
		else
		{
			break;
		}
		parent = child;
		child = 2 * parent + 1;
	}
}

int HeapSize(MyHeap* pHeap)
{
	assert(pHeap);

	return pHeap->useSize;
}

bool IsEmpty(MyHeap* pHeap)
{
	assert(pHeap);
	return pHeap->useSize == 0;
}

//小堆
//void func(int* pa, size_t child)
//{
//	int len = child + 1;
//	assert(pa);
//	int parent = (child - 1) / 2;
//	int c = child;
//	while (1)
//	{
//		if (c + 1 < len && pa[c + 1] > pa[c])
//		{
//			c++;
//		}
//		if (pa[c] < pa[parent])
//		{
//			swap(&pa[c], &pa[parent]);
//			c = parent;
//			parent = (c - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//
//	}
//	
//}

//小堆
//void func(int* pa, size_t size)
//{
//	assert(pa);
//	int child = size - 1;
//	int parent = (child - 1) / 2;
//	for (; parent >= 0; parent--)
//	{
//		adjustDwon(parent, size);
//	}
//}

//void adjustDown(int root, int len) {
//	int parent = root;
//	int child = 2 * root + 1;
//	while (child < len) {
//		//寻找 最大值
//		if (child + 1 < len && this.elem[child + 1] > this.elem[child]) {
//			child++;
//		}
//		//判断 父 和  子
//
//		if (this.elem[parent] < this.elem[child]) {
//			int ret = this.elem[parent];
//			this.elem[parent] = this.elem[child];
//			this.elem[child] = ret;
//		}
//		else {
//			break;
//		}
//		parent = child;
//		child = 2 * parent + 1;
//	}
//}



