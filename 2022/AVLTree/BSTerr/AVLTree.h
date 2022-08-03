#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include <iostream>
//#include <assert.h>
//#include <vector>
//#include <queue>
//#include <math.h>
//
//using namespace std;

//template<class T>
//struct AVLTreeNode
//{
//	AVLTreeNode(const T& data = T())
//	: _pLeft(nullptr)
//	, _pRight(nullptr)
//	, _pParent(nullptr)
//	, _data(data)
//	, _bf(0)
//	{}
//
//	AVLTreeNode<T>* _pLeft;
//	AVLTreeNode<T>* _pRight;
//	AVLTreeNode<T>* _pParent;
//	T _data;
//	int _bf;   // �ڵ��ƽ������
//};
//
//
//// AVL: ���������� + ƽ�����ӵ�����
//template<class T>
//class AVLTree
//{
//	typedef AVLTreeNode<T> Node;
//public:
//	AVLTree()
//		: _pRoot(nullptr)
//	{}
//	// ��AVL���в���ֵΪdata�Ľڵ�
//	bool Insert(const T& data)
//	{
//		// �Ȳ���  
//		Node* parent = nullptr;
//		Node* cur = _pRoot;
//
//		while (cur)
//		{
//			if (data > cur->_data)
//			{
//				parent = cur;
//				cur = cur->_pRight;
//			}
//			else if (data < cur->_data)
//			{
//				parent = cur;
//				cur = cur->_pLeft;
//			}
//			else
//			{
//				// ���� ���ǲ����� ������ͬ�� ֵ
//				return false;
//			}
//		}
//
//		if (parent == nullptr)
//		{
//			_pRoot = new Node(data);
//			_pRoot->_bf = 0;
//			return true;
//		}
//		cur = new Node(data);
//		// ����
//		if (data < parent->_data)
//		
//			parent->_pLeft = cur;
//		else
//			parent->_pRight = cur;
//
//		cur->_pParent = parent;
//
//		// ����ƽ������
//		while (parent)
//		{
//			if (cur == parent->_pLeft)
//			{
//				parent->_bf--;
//			}
//			else
//			{
//				parent->_bf++;
//			}
//
//			if (parent->_bf == 0)
//			{
//				break;
//			}
//			else if (parent->_bf == 1 || parent->_bf == -1)
//			{
//				cur = parent;
//				parent = cur->_pParent;
//			}
//			else if (parent->_bf == 2 || parent->_bf == -2)
//			{
//				//  -1 1
//				//  -2 -2
//				// -1 -2
//				if (cur->_bf == -1 && parent->_bf == -2)
//				{
//					// ����
//					RotateR(parent);
//					break;
//				}
//				else if (cur->_bf == 1 && parent->_bf == 2)
//				{
//					RotateL(parent);
//					break;
//
//				}
//			}
//			else
//			{
//				assert(false);
//			}
//		}
//		return true;
//	}
//
//	// AVL������֤
//	bool IsAVLTree()
//	{
//		return _IsAVLTree(_pRoot);
//	}
//	void Inorder()
//	{
//		_Inorder(_pRoot);
//	}
//
//
//	void levelOrder()
//	{
//		_levelOrder(_pRoot);
//	}
//	// �������
//
//
//private:
//	void _levelOrder(Node* root)
//	{
//		if (root == nullptr)
//		{
//			return;
//		}
//		queue<Node*> q;
//		q.push(root);
//		int sz = 1;
//		while (sz--)
//		{
//			Node* top = q.front();
//			cout << top->_data << " ";
//			q.pop();
//			if (top->_pLeft)
//				q.push(top->_pLeft);
//			if (top->_pRight)
//				q.push(top->_pRight);
//			if (sz == 0)
//			{
//				sz = q.size();
//				cout << endl;
//			}
//		}
//
//	}
//	void _Inorder(Node* root)
//	{
//		if (root == nullptr)
//		{
//			return;
//		}
//		_Inorder(root->_pLeft);
//		cout << root->_data << " ";
//		_Inorder(root->_pRight);
//	}
//	// ����AVL���ĸ�����֤pRoot�Ƿ�Ϊ��Ч��AVL��
//	//bool _IsAVLTree(Node* pRoot);
//
//	size_t _Height(Node* pRoot);
//	// �ҵ���
//	void RotateR(Node* pParent)
//	{
//		Node* sub = pParent->_pLeft;
//		Node* subR = sub->_pRight;
//		pParent->_pLeft = subR;
//		if (subR)
//			subR->_pParent = pParent;
//		Node* prev = pParent->_pParent;
//
//		pParent->_pParent = sub;
//		sub->_pRight = pParent;
//		
//		//pParent �п��ܲ��� ��
//		if (prev == nullptr)
//		{
//			_pRoot = sub;
//			_pRoot->_pParent = nullptr;
//			pParent->_bf = 0;
//			sub->_bf = 0;
//			return;
//		}
//
//		if (prev->_pLeft = pParent)
//			prev->_pLeft = sub;
//		else
//			prev->_pRight = sub;
//		
//		sub->_pParent = prev;
//
//		pParent->_bf = 0;
//		sub->_bf = 0;
//	}
//
//	// ����
//	void RotateL(Node* pParent)
//	{
//		Node* sub = pParent->_pRight;
//		Node* subL = sub->_pLeft;
//		pParent->_pRight = subL;
//		if (subL)
//			subL->_pParent = pParent;
//		Node* prev = pParent->_pParent;
//
//		sub->_pLeft = pParent;
//		pParent->_pParent = sub;
//		if (prev == nullptr)
//		{
//			_pRoot = sub;
//			_pRoot->_pParent = nullptr;
//		}
//		else
//		{
//			if (prev->_pLeft = pParent)
//				prev->_pLeft = sub;
//			else
//				prev->_pRight = sub;
//
//			sub->_pParent = prev;
//		}
//		sub->_bf = 0;
//		pParent->_bf = 0;
//	}
//	// ����˫��
//	void RotateRL(Node* pParent);
//	// ����˫��
//	void RotateLR(Node* pParent);
//
//private:
//	Node* _pRoot;
//};


template<class T>
struct AVLTreeNode
{
	AVLTreeNode(const T& data = T())
	: _pLeft(nullptr)
	, _pRight(nullptr)
	, _pParent(nullptr)
	, _data(data)
	, _bf(0)
	{}

	AVLTreeNode<T>* _pLeft;
	AVLTreeNode<T>* _pRight;
	AVLTreeNode<T>* _pParent;
	T _data;
	int _bf;   // �ڵ��ƽ������
};

#pragma once
#include <iostream>
#include <assert.h>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
// AVL: ���������� + ƽ�����ӵ�����
template<class T>
class AVLTree
{
	typedef AVLTreeNode<T> Node;
public:
	AVLTree()
		: _pRoot(nullptr)
	{}

	// ��AVL���в���ֵΪdata�Ľڵ�
	bool Insert(const T& data)
	{
		if (_pRoot == nullptr)
		{
			_pRoot = new Node(data);
			_pRoot->_bf = 0;
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _pRoot;

		while (cur)
		{
	
			if (data > cur->_data)
			{
				parent = cur;
				cur = cur->_pRight;
			}
			else if (data < cur->_data)
			{
				parent = cur;
				cur = cur->_pLeft;
			}
			else
			{
				return false;
			}
		}
		cur = new Node(data);

		if (data > parent->_data)
		{
			parent->_pRight = cur;
		}
		else
		{
			parent->_pLeft = cur;
		}
		cur->_pParent = parent;

		//����  ƽ������
		while (parent)
		{
			if (cur == parent->_pLeft)
			{
				parent->_bf--;
			}
			else
			{
				parent->_bf++;
			}

			// ���
			if (parent->_bf == 0)
			{
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1)
			{
				
				//cout << cur->_data << endl;
				cur = cur->_pParent;
				parent = parent->_pParent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				if (cur->_bf == 1 && parent->_bf == 2) // ����
				{
					RotateL(parent);
				}
				else if (cur->_bf == -1 && parent->_bf == -2) // �е���
				{
					RotateR(parent);
				}
				else if (cur->_bf == 1 && parent->_bf == -2) // ����˫��
				{
					RotateLR(parent);
				}
				else if (cur->_bf == -1 && parent->_bf == 2) // ����˫��
				{
					RotateRL(parent);
				}
				else
				{
					assert(false);
				}
				break;
			}
			else
			{
				assert(false);
			}
		}
		return true;
	}

	// AVL������֤
	bool IsAVLTree()
	{
		return _IsAVLTree(_pRoot);
	}
	

	// �������
	void Inorder()
	{
		_Inorder(_pRoot);
	}

	// �������
	void levelOrder()
	{
		_levelOrder(_pRoot);
	}

private:
	void _Inorder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		_Inorder(root->_pLeft);
		cout << root->_data << " ";
		_Inorder(root->_pRight);

	}
	void _levelOrder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		queue<Node*> q;
		q.push(root);
		int sz = 1;
		while (sz--)
		{
			Node* top = q.front();
			cout << top->_data << " ";
			q.pop();
			if (top->_pLeft)
				q.push(top->_pLeft);
			if (top->_pRight)
				q.push(top->_pRight);
			if (sz == 0)
			{
				sz = q.size();
				cout << endl;
			}
		}

	}
	// ����AVL���ĸ�����֤pRoot�Ƿ�Ϊ��Ч��AVL��
	bool _IsAVLTree(Node* pRoot)
	{
		if (pRoot == nullptr)
			return true;

		int leftHeight = _Height(pRoot->_pLeft);
		int rightHeight = _Height(pRoot->_pRight);
		int df = rightHeight - leftHeight;

		if (df != pRoot->_bf)
		{
			cout << pRoot->_data << endl;
			cout << "������" << endl;
			return false;
		}
		if (df > 1 || df < -1)
		{
			
			cout << "�쳣" << endl;
			cout << df << endl;
			cout << pRoot->_data << endl;
			return false;
		}

		return _IsAVLTree(pRoot->_pLeft) && _IsAVLTree(pRoot->_pRight);
	}
	int _Height(Node* pRoot)
	{
		if (pRoot == nullptr)
			return 0;

		int leftHeight = _Height(pRoot->_pLeft);
		int rightHeight = _Height(pRoot->_pRight);

		return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
	}
	// �ҵ���
	void RotateR(Node* pParent)
	{
		Node* subL = pParent->_pLeft;
		Node* subLR = subL->_pRight;
		
		pParent->_pLeft = subLR;
		if (subLR)
			subLR->_pParent = pParent;
		subL->_pRight = pParent;
		Node* prev = pParent->_pParent;
		pParent->_pParent = subL;

		if (pParent == _pRoot)
		{
			_pRoot = subL;
			_pRoot->_pParent = nullptr;
		}
		else
		{
			if (prev->_pLeft == pParent)
				prev->_pLeft = subL;
			else
				prev->_pRight = subL;
			subL->_pParent = prev;
		}
		subL->_bf = 0;
		pParent->_bf = 0;
	}
		
	// ����
	void RotateL(Node* pParent)
	{
		Node* subR = pParent->_pRight;
		Node* subRL = subR->_pLeft;

		pParent->_pRight = subRL;
		if (subRL)
			subRL->_pParent = pParent;

		// pParent ��һ�� �� root
		Node* prev = pParent->_pParent;
		subR->_pLeft = pParent;
		pParent->_pParent = subR;

		if (pParent == _pRoot)
		{
			_pRoot = subR;
			_pRoot->_pParent = nullptr;
		}

		else
		{
			if (prev->_pLeft == pParent)
				prev->_pLeft = subR;
			else
				prev->_pRight = subR;

			subR->_pParent = prev;
		}
		subR->_bf = 0;
		pParent->_bf = 0;
	}


	// ����˫��
	void RotateRL(Node* pParent)
	{
		//
		Node* subR = pParent->_pRight;
		Node* subRL = subR->_pLeft;
		int cout = subRL->_bf;
		RotateR(subR);
		RotateL(pParent);

		if (cout == 0)
		{
			pParent->_bf = 0;
			subR->_bf = 0;
			subRL->_bf = 0;
		}
		else if (cout == 1)
		{
			pParent->_bf = -1;
			subR->_bf = 0;
			subRL->_bf = 0;
		}
		else if (cout == -1)
		{
			pParent->_bf = 0;
			subR->_bf = 1;
			subRL->_bf = 0;
		}
		else
		{
			assert(false);
		}
	}
	// ����˫��
	void RotateLR(Node* pParent)
	{
		Node* subL = pParent->_pLeft;
		Node* subLR = subL->_pRight;
		int cout = subLR->_bf;
		RotateL(subL);
		RotateR(pParent);

		if (cout == 0)
		{
			pParent->_bf = 0;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else if (cout == 1)
		{
			pParent->_bf = 0;
			subL->_bf = -1;
			subLR->_bf = 0;
		}
		else if (cout == -1)
		{
			pParent->_bf = 1;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else
		{
			assert(false);
		}
	}

private:
	Node* _pRoot;
};

//#pragma once
//#include <assert.h>
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <time.h>
//
//using namespace std;
//
//template<class K, class V>
//struct AVLTreeNode
//{
//	pair<K, V> _kv;
//	AVLTreeNode<K, V>* _left;
//	AVLTreeNode<K, V>* _right;
//	AVLTreeNode<K, V>* _parent;
//
//	// ������-�������ĸ߶Ȳ�
//	int _bf;  // balance factor
//
//	AVLTreeNode(const pair<K, V>& kv)
//		:_kv(kv)
//		, _left(nullptr)
//		, _right(nullptr)
//		, _parent(nullptr)
//		, _bf(0)
//	{}
//
//	// AVL����û�й涨����Ҫ���ƽ������
//	// ֻ��һ��ʵ�ֵ�ѡ�񣬷������ƽ��
//};

//template<class K, class V>
//class AVLTree
//{
//	typedef AVLTreeNode<K, V> Node;
//public:
//	// Find
//	// Erase
//	bool Insert(const pair<K, V>& kv)
//	{
//		// 1���������Ĺ������
//		// 2�����Ƿ�Υ��ƽ��������Υ������Ҫ������ת
//		if (_root == nullptr)
//		{
//			_root = new Node(kv);
//			_root->_bf = 0;
//			return true;
//		}
//
//		Node* parent = nullptr;
//		Node* cur = _root;
//		while (cur)
//		{
//			if (cur->_kv.first < kv.first)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else if (cur->_kv.first > kv.first)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else
//			{
//				return false;
//			}
//		}
//
//		cur = new Node(kv);
//		if (parent->_kv.first < kv.first)
//		{
//			parent->_right = cur;
//		}
//		else
//		{
//			parent->_left = cur;
//		}
//
//		cur->_parent = parent;
//
//		// ...
//		// ����ƽ������
//		while (parent) // ��ԶҪ���¸�
//		{
//			if (cur == parent->_right)
//			{
//				parent->_bf++;
//			}
//			else
//			{
//				parent->_bf--;
//			}
//
//			// �Ƿ�������£�
//			if (parent->_bf == 0)  // 1 or -1  -�� 0  ����ڵ����ϰ����Ǳ�
//			{
//				// �߶Ȳ��䣬���½���
//				break;
//			}
//			else if (parent->_bf == 1 || parent->_bf == -1)
//				// 0  -�� 1 �� -1  ����ڵ㵼��һ�߱����
//			{
//				// �����ĸ߶ȱ��ˣ�������������
//				cur = cur->_parent;
//				parent = parent->_parent;
//			}
//			else if (parent->_bf == 2 || parent->_bf == -2)
//				// -1 or 1  -�� 2 �� -2  ����ڵ㵼�±�����һ���ֱ����
//			{
//				// ������ƽ�� -- ��Ҫ��ת����
//				if (parent->_bf == 2 && cur->_bf == 1) // ����
//				{
//					RotateL(parent);
//				}
//				else if (parent->_bf == -2 && cur->_bf == -1) // �ҵ���
//				{
//					RotateR(parent);
//				}
//				else if (parent->_bf == -2 && cur->_bf == 1) // ����˫��
//				{
//					RotateLR(parent);
//				}
//				else if (parent->_bf == 2 && cur->_bf == -1) // ����˫��
//				{
//					RotateRL(parent);
//				}
//
//				break;
//			}
//			else
//			{
//				// ����֮ǰAVL�ʹ��ڲ�ƽ��������|ƽ������| >= 2�Ľڵ�
//				assert(false);
//			}
//		}
//
//		return true;
//	}
//
//	void InOrder()
//	{
//		_InOrder(_root);
//	}
//private:
//	void RotateL(Node* parent)
//	{
//		Node* subR = parent->_right;
//		Node* subRL = subR->_left;
//
//		parent->_right = subRL;
//		if (subRL)
//			subRL->_parent = parent;
//
//		Node* ppNode = parent->_parent;
//
//		subR->_left = parent;
//		parent->_parent = subR;
//
//		if (parent == _root)
//		{
//			_root = subR;
//			_root->_parent = nullptr;
//		}
//		else
//		{
//			if (parent == ppNode->_left)
//			{
//				ppNode->_left = subR;
//			}
//			else
//			{
//				ppNode->_right = subR;
//			}
//
//			subR->_parent = ppNode;
//		}
//
//		// ����ƽ������
//		parent->_bf = 0;
//		subR->_bf = 0;
//	}
//
//	void RotateR(Node* parent)
//	{
//		Node* subL = parent->_left;
//		Node* subLR = subL->_right;
//
//		parent->_left = subLR;
//		if (subLR)
//			subLR->_parent = parent;
//
//		Node* ppNode = parent->_parent;
//
//		subL->_right = parent;
//		parent->_parent = subL;
//
//		if (parent == _root)
//		{
//			_root = subL;
//			_root->_parent = nullptr;
//		}
//		else
//		{
//			if (ppNode->_left == parent)
//			{
//				ppNode->_left = subL;
//			}
//			else
//			{
//				ppNode->_right = subL;
//			}
//			subL->_parent = ppNode;
//		}
//
//		subL->_bf = parent->_bf = 0;
//	}
//
//	void RotateLR(Node* parent)
//	{
//		Node* subL = parent->_left;
//		Node* subLR = subL->_right;
//		int bf = subLR->_bf;
//
//		RotateL(parent->_left);
//		RotateR(parent);
//
//		// ����ƽ������
//		if (bf == 0)
//		{
//			parent->_bf = 0;
//			subL->_bf = 0;
//			subLR->_bf = 0;
//		}
//		else if (bf == 1)
//		{
//			parent->_bf = 0;
//			subL->_bf = -1;
//			subLR->_bf = 0;
//		}
//		else if (bf == -1)
//		{
//			parent->_bf = 1;
//			subL->_bf = 0;
//			subLR->_bf = 0;
//		}
//		else
//		{
//			// subLR->_bf��תǰ��������
//			assert(false);
//		}
//	}
//
//	void RotateRL(Node* parent)
//	{
//		Node* subR = parent->_right;
//		Node* subRL = subR->_left;
//		int bf = subRL->_bf;
//
//		RotateR(parent->_right);
//		RotateL(parent);
//
//		if (bf == 0)
//		{
//			subRL->_bf = 0;
//			parent->_bf = 0;
//			subR->_bf = 0;
//		}
//		else if (bf == 1)
//		{
//			subRL->_bf = 0;
//			parent->_bf = -1;
//			subR->_bf = 0;
//		}
//		else if (bf == -1)
//		{
//			subRL->_bf = 0;
//			parent->_bf = 0;
//			subR->_bf = 1;
//		}
//		else
//		{
//			// subLR->_bf��תǰ��������
//			assert(false);
//		}
//	}
//
//	void _InOrder(Node* root)
//	{
//		if (root == nullptr)
//			return;
//
//		_InOrder(root->_left);
//		cout << root->_kv.first << " ";
//		_InOrder(root->_right);
//	}
//
//	int _Height(Node* root)
//	{
//		if (root == nullptr)
//			return 0;
//
//		int lh = _Height(root->_left);
//		int rh = _Height(root->_right);
//
//		return lh > rh ? lh + 1 : rh + 1;
//	}
//
//	bool _IsBalanceTree(Node* root)
//	{
//		// ����Ҳ��AVL��
//		if (nullptr == root)
//			return true;
//
//		// ����pRoot�ڵ��ƽ�����ӣ���pRoot���������ĸ߶Ȳ�
//		int leftHeight = _Height(root->_left);
//		int rightHeight = _Height(root->_right);
//		int diff = rightHeight - leftHeight;
//
//		// ����������ƽ��������pRoot��ƽ�����Ӳ���ȣ�����
//		// pRootƽ�����ӵľ���ֵ����1����һ������AVL��
//		if (abs(diff) >= 2)
//		{
//			cout << root->_kv.first << "�ڵ�ƽ�������쳣" << endl;
//			return false;
//		}
//
//		if (diff != root->_bf)
//		{
//			cout << root->_kv.first << "�ڵ�ƽ�����Ӳ�����ʵ��" << endl;
//			return false;
//		}
//
//		// pRoot��������������AVL���������һ����AVL��
//		return _IsBalanceTree(root->_left)
//			&& _IsBalanceTree(root->_right);
//	}
//
//public:
//
//	/*void InOrder()
//	{
//		_InOrder(_root);
//		cout << endl;
//	}*/
//
//	vector<vector<int>> levelOrder() {
//		vector<vector<int>> vv;
//		if (_root == nullptr)
//			return vv;
//
//		queue<Node*> q;
//		int levelSize = 1;
//		q.push(_root);
//
//		while (!q.empty())
//		{
//			// levelSize����һ��һ���
//			vector<int> levelV;
//			while (levelSize--)
//			{
//				Node* front = q.front();
//				q.pop();
//				levelV.push_back(front->_kv.first);
//				if (front->_left)
//					q.push(front->_left);
//
//				if (front->_right)
//					q.push(front->_right);
//			}
//			vv.push_back(levelV);
//			for (auto e : levelV)
//			{
//				cout << e << " ";
//			}
//			cout << endl;
//
//			// ��һ����꣬��һ��Ͷ�������
//			levelSize = q.size();
//		}
//
//		return vv;
//	}
//
//	bool IsBalanceTree()
//	{
//		return _IsBalanceTree(_root);
//	}
//
//	int Height()
//	{
//		return _Height(_root);
//	}
//private:
//	Node* _root = nullptr;
//};
//
//void TestAVLTree1()
//{
//	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//
//	int a[] = {10,9,8,7,6,5,4,3,2,1};
//	AVLTree<int, int> t;
//	for (auto e : a)
//	{
//		t.Insert(make_pair(e, e));
//	}
//	t.InOrder();
//}
//
//void TestAVLTree2()
//{
//	const size_t N = 1024 * 1024 * 10;
//	vector<int> v;
//	v.reserve(N);
//	srand(time(0));
//	for (size_t i = 0; i < N; ++i)
//	{
//		//v.push_back(rand());
//		v.push_back(i);
//	}
//
//	AVLTree<int, int> t;
//	for (auto e : v)
//	{
//		t.Insert(make_pair(e, e));
//	}
//
//	//t.levelOrder();
//	//cout << endl;
//	cout << "�Ƿ�ƽ��?" << t.IsBalanceTree() << endl;
//	cout << "�߶�:" << t.Height() << endl;
//
//
//	//t.InOrder();
//}