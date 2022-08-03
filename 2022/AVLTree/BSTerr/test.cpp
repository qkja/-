#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>

#include "AVLTree.h"
void test1()
{
	size_t const N = 500;
	vector<int> v;
	v.reserve(N);
	srand((unsigned int)time(nullptr));
	for (size_t i = 0; i < N; i++)
	{
		v.push_back(rand()%100);
	}
	AVLTree<int> t;
	for (int val : v)
	{
		t.Insert(val);
	}
	t.levelOrder();

	cout << "是否是一个 AVL树" << t.IsAVLTree() << endl;
}


void test2()
{
	size_t const N = 100;
	vector<int> v;
	v.reserve(N);
	for (size_t i = 0; i < N; i++)
	{
		v.push_back(i);
	}
	AVLTree<int> t;
	for (int val : v)
	{
		t.Insert(val);
	}
	t.levelOrder();
	cout << "是否是一个 AVL树" << t.IsAVLTree() << endl;
}

int main()
{
	test1();
	//test2();
	//cout << "aaa" << endl;
	return 0;
}


//int main()
//{
//	AVLTree<int> a;
//	for (int i = 0; i < 50; i++)
//	{
//		int j = 10 - i;
//		a.Insert(j+1);
//	}
//	//a.Inorder2();
//	cout << "=======================" << endl;
//	a.Inorder();
//	return 0;
//}