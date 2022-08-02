#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <functional>
using namespace std;
//namespace bit
//{
//	template<class T>
//	struct less
//	{
//		bool operator()(T x, T y)
//		{
//			return x > y;
//		}
//	};
//}
//
//void test_priority_queue()
//{
//	priority_queue<int, vector<int>,greater<int>> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	q.push(5);
//	q.push(6);
//	while (!q.empty())
//	{
//		cout << q.top() << " ";
//		q.pop();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test_priority_queue();
//	return 0;
//}

//void RoateR(Node* parent)
//{
//	Node* subL = parent->_left;
//	Node* subLR = sub->_right;
//
//	// 第一步    
//	parent->_left = subLR;
//	if (subLR)
//		subLR->_parent = parent;
//	subL->_right = parent;
//	
//	// 记录  parent 的父
//	Node* prev = parent->_parent;
//
//	parent->_parent = subL;
//	if (prev == nullptr)
//	{
//		subL->_paernt = nullptr;
//		_root = subL;
//	}
//	else
//	{
//
//		if (prev->_left == parent)
//		{
//			prev->_left = subL;
//		}
//		else
//		{
//			prev->_right = subL;
//		}
//		subL->_parent = prev;
//	}
//
//	//
//}