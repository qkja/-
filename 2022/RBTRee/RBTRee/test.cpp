#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <time.h>
#include <vector>

#include "RBTRee.h"

using namespace std;

void test_rbtree1()
{
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int a[] = { 30, 29, 28, 27, 26, 25, 24, 11, 8, 7, 6, 5, 4, 3, 2, 1 };
	//int a[] = { 30, 29,28,27,26};
	RBTree<int, int> t;
	for (auto e : a)
	{
		t.Insert(make_pair(e, e));
	}
	t.levelOrder();
	t.Inorder();
}
void test_rbtree2()
{
	const size_t N = 100;
	vector<int> v;
	v.reserve(N);
	srand(time(0));
	for (size_t i = 0; i < N; ++i)
	{
		v.push_back(rand()%100);
	}

	RBTree<int, int> t;
	for (auto e : v)
	{
		t.Insert(make_pair(e, e));
	}

	t.levelOrder();
	t.Inorder();

}
int main()
{
	//test_rbtree1();
	test_rbtree2();
	return 0;
}