#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <assert.h>
#include <iostream>
#include <vector>
#include <queue>
#include <time.h>
using namespace std;




template<class K, class V>
struct AVLTreeNode
{
	pair<K, V> _kv;
	AVLTreeNode<K, V>* _left;
	AVLTreeNode<K, V>* _right;
	AVLTreeNode<K, V>* _parent;

	// ������-�������ĸ߶Ȳ�
	int _bf;  // balance factor

	AVLTreeNode(const pair<K, V>& kv)
		:_kv(kv)
		, _left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _bf(0)
	{}

	// AVL����û�й涨����Ҫ���ƽ������
	// ֻ��һ��ʵ�ֵ�ѡ�񣬷������ƽ��
};

template<class K, class V>
class AVLTree
{
	typedef AVLTreeNode<K, V> Node;
public:
	// Find
	// Erase
	bool Insert(const pair<K, V>& kv)
	{
		// 1���������Ĺ������
		// 2�����Ƿ�Υ��ƽ��������Υ������Ҫ������ת
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_bf = 0;
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first < kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(kv);
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}

		cur->_parent = parent;

		// ...
		// ����ƽ������
		while (parent) // ��ԶҪ���¸�
		{
			if (cur == parent->_right)
			{
				parent->_bf++;
			}
			else
			{
				parent->_bf--;
			}

			// �Ƿ�������£�
			if (parent->_bf == 0)  // 1 or -1  -�� 0  ����ڵ����ϰ����Ǳ�
			{
				// �߶Ȳ��䣬���½���
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1)
				// 0  -�� 1 �� -1  ����ڵ㵼��һ�߱����
			{
				// �����ĸ߶ȱ��ˣ�������������
				cur = cur->_parent;
				parent = parent->_parent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
				// -1 or 1  -�� 2 �� -2  ����ڵ㵼�±�����һ���ֱ����
			{
				// ������ƽ�� -- ��Ҫ��ת����
				if (parent->_bf == 2 && cur->_bf == 1) // ����
				{
					RotateL(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == -1) // �ҵ���
				{
					RotateR(parent);
				}
				//else if (parent->_bf == -2 && cur->_bf == 1) // ����˫��
				//{
				//	RotateLR(parent);
				//}
				//else if (parent->_bf == 2 && cur->_bf == -1) // ����˫��
				//{
				//	RotateRL(parent);
				//}

				break;
			}
			else
			{
				// ����֮ǰAVL�ʹ��ڲ�ƽ��������|ƽ������| >= 2�Ľڵ�
				assert(false);
			}
		}

		return true;
	}
private:
	void RotateL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;

		parent->_right = subRL;
		if (subRL)
			subRL->_parent = parent;

		Node* ppNode = parent->_parent;

		subR->_left = parent;
		parent->_parent = subR;

		if (parent == _root)
		{
			_root = subR;
			_root->_parent = nullptr;
		}
		else
		{
			if (parent == ppNode->_left)
			{
				ppNode->_left = subR;
			}
			else
			{
				ppNode->_right = subR;
			}

			subR->_parent = ppNode;
		}

		// ����ƽ������
		parent->_bf = 0;
		subR->_bf = 0;
	}

	void RotateR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;

		parent->_left = subLR;
		if (subLR)
			subLR->_parent = parent;

		Node* ppNode = parent->_parent;

		subL->_right = parent;
		parent->_parent = subL;

		if (parent == _root)
		{
			_root = subL;
			_root->_parent = nullptr;
		}
		else
		{
			if (ppNode->_left == parent)
			{
				ppNode->_left = subL;
			}
			else
			{
				ppNode->_right = subL;
			}
			subL->_parent = ppNode;
		}

		subL->_bf = parent->_bf = 0;
	}

	void RotateLR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		int bf = subLR->_bf;

		RotateL(parent->_left);
		RotateR(parent);

		// ����ƽ������
		if (bf == 0)
		{
			parent->_bf = 0;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else if (bf == 1)
		{
			parent->_bf = 0;
			subL->_bf = -1;
			subLR->_bf = 0;
		}
		else if (bf == -1)
		{
			parent->_bf = 1;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else
		{
			// subLR->_bf��תǰ��������
			assert(false);
		}
	}

	void RotateRL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		int bf = subRL->_bf;

		RotateR(parent->_right);
		RotateL(parent);

		if (bf == 0)
		{
			subRL->_bf = 0;
			parent->_bf = 0;
			subR->_bf = 0;
		}
		else if (bf == 1)
		{
			subRL->_bf = 0;
			parent->_bf = -1;
			subR->_bf = 0;
		}
		else if (bf == -1)
		{
			subRL->_bf = 0;
			parent->_bf = 0;
			subR->_bf = 1;
		}
		else
		{
			// subLR->_bf��תǰ��������
			assert(false);
		}
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;

		_InOrder(root->_left);
		cout << root->_kv.first << " ";
		_InOrder(root->_right);
	}

	int _Height(Node* root)
	{
		if (root == nullptr)
			return 0;

		int lh = _Height(root->_left);
		int rh = _Height(root->_right);

		return lh > rh ? lh + 1 : rh + 1;
	}

	bool _IsBalanceTree(Node* root)
	{
		// ����Ҳ��AVL��
		if (nullptr == root)
			return true;

		// ����pRoot�ڵ��ƽ�����ӣ���pRoot���������ĸ߶Ȳ�
		int leftHeight = _Height(root->_left);
		int rightHeight = _Height(root->_right);
		int diff = rightHeight - leftHeight;

		// ����������ƽ��������pRoot��ƽ�����Ӳ���ȣ�����
		// pRootƽ�����ӵľ���ֵ����1����һ������AVL��
		if (abs(diff) >= 2)
		{
			cout << root->_kv.first << "�ڵ�ƽ�������쳣" << endl;
			return false;
		}

		if (diff != root->_bf)
		{
			cout << root->_kv.first << "�ڵ�ƽ�����Ӳ�����ʵ��" << endl;
			return false;
		}

		// pRoot��������������AVL���������һ����AVL��
		return _IsBalanceTree(root->_left)
			&& _IsBalanceTree(root->_right);
	}

public:

	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

	vector<vector<int>> levelOrder() {
		vector<vector<int>> vv;
		if (_root == nullptr)
			return vv;

		queue<Node*> q;
		int levelSize = 1;
		q.push(_root);

		while (!q.empty())
		{
			// levelSize����һ��һ���
			vector<int> levelV;
			while (levelSize--)
			{
				Node* front = q.front();
				q.pop();
				levelV.push_back(front->_kv.first);
				if (front->_left)
					q.push(front->_left);

				if (front->_right)
					q.push(front->_right);
			}
			vv.push_back(levelV);
			for (auto e : levelV)
			{
				cout << e << " ";
			}
			cout << endl;

			// ��һ����꣬��һ��Ͷ�������
			levelSize = q.size();
		}

		return vv;
	}

	bool IsBalanceTree()
	{
		return _IsBalanceTree(_root);
	}

	int Height()
	{
		return _Height(_root);
	}
private:
	Node* _root = nullptr;
};

void TestAVLTree1()
{
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int a[] = { 30, 29, 28, 27, 26, 25, 24, 11, 8, 7, 6, 5, 4, 3, 2, 1 };
	AVLTree<int, int> t;
	for (auto e : a)
	{
		t.Insert(make_pair(e, e));
	}
	t.levelOrder();
}

void TestAVLTree2()
{
	const size_t N = 1024 * 1024 * 10;
	vector<int> v;
	v.reserve(N);
	srand(time(0));
	for (size_t i = 0; i < N; ++i)
	{
		//v.push_back(rand());
		v.push_back(i);
	}

	AVLTree<int, int> t;
	for (auto e : v)
	{
		t.Insert(make_pair(e, e));
	}

	//t.levelOrder();
	//cout << endl;
	cout << "�Ƿ�ƽ��?" << t.IsBalanceTree() << endl;
	cout << "�߶�:" << t.Height() << endl;


	//t.InOrder();
}

//int main()
//{
//	TestAVLTree1();
//	return 0;
//}