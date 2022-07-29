#define _CRT_SECURE_NO_WARNINGS 1
#include "BinarySearchTree.h"

//int main()
//{
//	BSTree<int> b;
//	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
//	int sz = sizeof(a) / sizeof(int);
//
//	for (int i = 0; i < sz; i++)
//	{
//		b.insert(a[i]);
//	}
//	b.inorder();
//	cout << endl;
//	// 插入个 相同的
//	b.insert(8);
//	b.inorder();
//
//	return 0;
//}

//int main()
//{
//	BSTree<int> b;
//	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
//	int sz = sizeof(a) / sizeof(int);
//
//	for (int i = 0; i < sz; i++)
//	{
//		b.insertR(a[i]);
//	}
//	b.inorder();
//	for (int e : a)
//	{
//		b.eraseR(e);
//		b.inorder();
//		cout << endl;
//	}
//
//	b.inorder();
//
//	return 0;
//}

//int main()
//{
//	BSTree<int> b1;
//	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
//	int sz = sizeof(a) / sizeof(int);
//
//	for (int i = 0; i < sz; i++)
//	{
//		b1.insertR(a[i]);
//	}
//	
//	BSTree<int> b2(b1); // 拷贝构造
//	BSTree<int> b3;
//	b3 = b1; // operater = 
//
//	b2.inorder();
//	cout << endl;
//
//	b3.inorder();
//	cout << endl;
//
//	return 0;
//}

int main()
{
	key_value::TestBSTree();
	return 0;
}