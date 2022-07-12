#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
#include <stdlib.h>

using namespace std;

//int main()
//{
//	int* p1 = new int;
//	*p1 = 10;
//	cout << *p1 << endl;
//	return 0;
//}

//int main()
//{
//	int* p = new int(0);
//    cout << *p << endl;
//
//	return 0;
//}

//int main()
//{
//	int* p1 = new int;
//	int* p2 = new int[10]{1,2,3};
//
//	delete p1;
//	delete[] p2;
//	return 0;
//}

//int main()
//{
//	int* p1 = new int[10];
//
//	int* p2 = (int*)malloc(sizeof(int)* 10);
//	assert(p2);
//
//	delete[] p1;
//	free(p2);
//	return 0;
//}

//int main()
//{
//	/*double* p = (double*)malloc(2024 * 1024 * 1024);
//	assert(p);
//	if (p == NULL)
//	{
//		cout << " aaa " << endl;
//	}
//*/
//	//char* p1 = new char[1024 * 1024 * 1024]; // 1 G
//	//delete[] p1;
//	free(p);
//	return 0;
//}

class A
{
public:
	A(int a = 0,int b=0)
		:_a(a)
		, _b(b)
	{
		cout << "构造函数" << endl;
	}
	~A()
	{
		cout << "析构函数" << endl;
	}
private:
	int _a;
	int _b;
};

int main()
{
	A* aa = new A[3];
	delete aa;
	return 0;
}

//int main()
//{
//	A* aa = new A;
//	delete aa;
//	return 0;
//}



//int main()
//{
//	A* aa = (A*)malloc(sizeof(A));
//	free(aa);
//	return 0;
//}


//int main()
//{
//	A* aa = new A[10];
//	delete[] aa;
//	return 0;
//}

//int main()
//{
//	A* aa = (A*)operator new(sizeof(A));
//	operator delete (aa);
//	return 0;
//}
//
//void *__CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
//{
//	// try to allocate size bytes
//	void *p;
//	while ((p = malloc(size)) == 0)
//	if (_callnewh(size) == 0)
//	{
//		// report no memory
//		// 如果申请内存失败了，这里会抛出bad_alloc 类型异常
//		static const std::bad_alloc nomem;
//		_RAISE(nomem);
//	}
//	return (p);
//}

//void operator delete(void *pUserData)
//{
//	_CrtMemBlockHeader * pHead;
//	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//	if (pUserData == NULL)
//		return;
//	_mlock(_HEAP_LOCK); /* block other threads */
//	__TRY
//		/* get a pointer to memory block header */
//		pHead = pHdr(pUserData);
//	/* verify block type */
//	_ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
//	_free_dbg(pUserData, pHead->nBlockUse);
//	__FINALLY
//		_munlock(_HEAP_LOCK); /* release other threads */
//	__END_TRY_FINALLY
//		return;
//}