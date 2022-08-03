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
//	int _bf;   // 节点的平衡因子
//};
//
//
//// AVL: 二叉搜索树 + 平衡因子的限制
//template<class T>
//class AVLTree
//{
//	typedef AVLTreeNode<T> Node;
//public:
//	AVLTree()
//		: _pRoot(nullptr)
//	{}
//	// 在AVL树中插入值为data的节点
//	bool Insert(const T& data)
//	{
//		// 先插入  
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
//				// 这里 我们不允许 插入相同的 值
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
//		// 否则
//		if (data < parent->_data)
//		
//			parent->_pLeft = cur;
//		else
//			parent->_pRight = cur;
//
//		cur->_pParent = parent;
//
//		// 更新平衡因子
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
//					// 右旋
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
//	// AVL树的验证
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
//	// 层序遍历
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
//	// 根据AVL树的概念验证pRoot是否为有效的AVL树
//	//bool _IsAVLTree(Node* pRoot);
//
//	size_t _Height(Node* pRoot);
//	// 右单旋
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
//		//pParent 有可能不是 根
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
//	// 左单旋
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
//	// 右左双旋
//	void RotateRL(Node* pParent);
//	// 左右双旋
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
	int _bf;   // 节点的平衡因子
};

#pragma once
#include <iostream>
#include <assert.h>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
// AVL: 二叉搜索树 + 平衡因子的限制
template<class T>
class AVLTree
{
	typedef AVLTreeNode<T> Node;
public:
	AVLTree()
		: _pRoot(nullptr)
	{}

	// 在AVL树中插入值为data的节点
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

		//更新  平衡因子
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

			// 检查
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
				if (cur->_bf == 1 && parent->_bf == 2) // 左单旋
				{
					RotateL(parent);
				}
				else if (cur->_bf == -1 && parent->_bf == -2) // 有单旋
				{
					RotateR(parent);
				}
				else if (cur->_bf == 1 && parent->_bf == -2) // 左右双旋
				{
					RotateLR(parent);
				}
				else if (cur->_bf == -1 && parent->_bf == 2) // 右左双旋
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

	// AVL树的验证
	bool IsAVLTree()
	{
		return _IsAVLTree(_pRoot);
	}
	

	// 中序遍历
	void Inorder()
	{
		_Inorder(_pRoot);
	}

	// 层序遍历
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
	// 根据AVL树的概念验证pRoot是否为有效的AVL树
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
			cout << "不符合" << endl;
			return false;
		}
		if (df > 1 || df < -1)
		{
			
			cout << "异常" << endl;
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
	// 右单旋
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
		
	// 左单旋
	void RotateL(Node* pParent)
	{
		Node* subR = pParent->_pRight;
		Node* subRL = subR->_pLeft;

		pParent->_pRight = subRL;
		if (subRL)
			subRL->_pParent = pParent;

		// pParent 不一定 是 root
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


	// 右左双旋
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
	// 左右双旋
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
//	// 右子树-左子树的高度差
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
//	// AVL树并没有规定必须要设计平衡因子
//	// 只是一个实现的选择，方便控制平衡
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
//		// 1、搜索树的规则插入
//		// 2、看是否违反平衡规则，如果违反就需要处理：旋转
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
//		// 更新平衡因子
//		while (parent) // 最远要更新根
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
//			// 是否继续更新？
//			if (parent->_bf == 0)  // 1 or -1  -》 0  插入节点填上矮的那边
//			{
//				// 高度不变，更新结束
//				break;
//			}
//			else if (parent->_bf == 1 || parent->_bf == -1)
//				// 0  -》 1 或 -1  插入节点导致一边变高了
//			{
//				// 子树的高度变了，继续更新祖先
//				cur = cur->_parent;
//				parent = parent->_parent;
//			}
//			else if (parent->_bf == 2 || parent->_bf == -2)
//				// -1 or 1  -》 2 或 -2  插入节点导致本来高一边又变高了
//			{
//				// 子树不平衡 -- 需要旋转处理
//				if (parent->_bf == 2 && cur->_bf == 1) // 左单旋
//				{
//					RotateL(parent);
//				}
//				else if (parent->_bf == -2 && cur->_bf == -1) // 右单旋
//				{
//					RotateR(parent);
//				}
//				else if (parent->_bf == -2 && cur->_bf == 1) // 左右双旋
//				{
//					RotateLR(parent);
//				}
//				else if (parent->_bf == 2 && cur->_bf == -1) // 右左双旋
//				{
//					RotateRL(parent);
//				}
//
//				break;
//			}
//			else
//			{
//				// 插入之前AVL就存在不平衡子树，|平衡因子| >= 2的节点
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
//		// 更新平衡因子
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
//		// 更新平衡因子
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
//			// subLR->_bf旋转前就有问题
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
//			// subLR->_bf旋转前就有问题
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
//		// 空树也是AVL树
//		if (nullptr == root)
//			return true;
//
//		// 计算pRoot节点的平衡因子：即pRoot左右子树的高度差
//		int leftHeight = _Height(root->_left);
//		int rightHeight = _Height(root->_right);
//		int diff = rightHeight - leftHeight;
//
//		// 如果计算出的平衡因子与pRoot的平衡因子不相等，或者
//		// pRoot平衡因子的绝对值超过1，则一定不是AVL树
//		if (abs(diff) >= 2)
//		{
//			cout << root->_kv.first << "节点平衡因子异常" << endl;
//			return false;
//		}
//
//		if (diff != root->_bf)
//		{
//			cout << root->_kv.first << "节点平衡因子不符合实际" << endl;
//			return false;
//		}
//
//		// pRoot的左和右如果都是AVL树，则该树一定是AVL树
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
//			// levelSize控制一层一层出
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
//			// 上一层出完，下一层就都进队列
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
//	cout << "是否平衡?" << t.IsBalanceTree() << endl;
//	cout << "高度:" << t.Height() << endl;
//
//
//	//t.InOrder();
//}