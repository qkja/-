#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <utility>

using namespace std;

enum Colour
{
	RED,
	BLACK
};

template<class K,class V>
struct RBTreeNode
{
	
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;

	
	pair<K, V> _kv;

	Colour _col;

	RBTreeNode(const pair<K, V>& kv)
		:_left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _kv(kv)
		, _col(BLACK)
	{}
};

template<class K,class V>
class RBTree
{
	typedef RBTreeNode<K, V> Node;
public:
	RBTree()
		: _root(nullptr)
	{}

	// 在AVL树中插入值为data的节点
	bool Insert(const pair<K,V>& kv)
	{
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_col = BLACK;
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;

		while (cur)
		{

			if (kv.first > cur->_kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (kv.first < cur->_kv.first)
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
		cur->_col = RED;
		// 插入 
		if (kv.first > parent->_kv.first)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}
		cur->_parent= parent;

		// 修改 颜色
		while (parent && parent->_col == RED)
		{
			Node* grandfather = parent->_parent;
			if (parent == grandfather->_left)
			{
				Node* uncle = grandfather->_right;
				//情况1： 叔叔存在  且为红 不旋转
				if (uncle && uncle->_col == RED)
				{
					parent->_col = BLACK;
					uncle->_col = BLACK;
					grandfather->_col = RED;

					cur = grandfather;
					parent = cur->_parent;
				}
				// 叔叔 不存在 或者 存在且为黑 
				else
				{
				
					// 单旋
					if (cur == parent->_left)
					{
						RotateR(grandfather);
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					// 双旋
					else
					{
						RotateLR(grandfather);
						grandfather->_col = RED;
						cur->_col = BLACK;
					}
					break;
				}
				
			}
			else
			{
				Node* uncle = grandfather->_left;
				// 叔叔存在  且为红 不旋转
				if (uncle && uncle->_col == RED)
				{
					parent->_col = BLACK;
					uncle->_col = BLACK;
					grandfather->_col = RED;

					cur = grandfather;
					parent = cur->_parent;
				}
				else
				{

					// 单旋
					if (cur == parent->_right)
					{
						RotateL(grandfather);
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					// 双旋
					else
					{
						RotateRL(grandfather);
						grandfather->_col = RED;
						cur->_col = BLACK;
					}
					break;

				}
			}
		}
		_root->_col = BLACK;
		return true;
	}

	

	// 中序遍历
	void Inorder()
	{
		_Inorder(_root);
	}

	// 层序遍历
	void levelOrder()
	{
		_levelOrder(_root);
	}

	void Height()
	{
		cout << "最长路径" << _maxHeight(_root) << endl;
		cout << "最短路径" << _minHeight(_root) << endl;
	}
	bool IsBalanceTree()
	{
		// 检查红黑树几条规则

		Node* pRoot = _root;
		// 空树也是红黑树
		if (nullptr == pRoot)
			return true;

		// 检测根节点是否满足情况
		if (BLACK != pRoot->_col)
		{
			cout << "违反红黑树性质二：根节点必须为黑色" << endl;
			return false;
		}

		// 获取任意一条路径中黑色节点的个数 -- 比较基准值
		size_t blackCount = 0;
		Node* pCur = pRoot;
		while (pCur)
		{
			if (BLACK == pCur->_col)
				blackCount++;

			pCur = pCur->_left;
		}

		// 检测是否满足红黑树的性质，k用来记录路径中黑色节点的个数
		size_t k = 0;
		return _IsValidRBTree(pRoot, k, blackCount);
	}

private:

	bool _IsValidRBTree(Node* pRoot, size_t k, const size_t blackCount)
	{
		//走到null之后，判断k和black是否相等
		if (nullptr == pRoot)
		{
			if (k != blackCount)
			{
				cout << "违反性质四：每条路径中黑色节点的个数必须相同" << endl;
				return false;
			}
			return true;
		}

		// 统计黑色节点的个数
		if (BLACK == pRoot->_col)
			k++;

		// 检测当前节点与其双亲是否都为红色
		if (RED == pRoot->_col && pRoot->_parent && pRoot->_parent->_col == RED)
		{
			cout << "违反性质三：存在连在一起的红色节点" << endl;
			return false;
		}

		return _IsValidRBTree(pRoot->_left, k, blackCount) &&
			_IsValidRBTree(pRoot->_right, k, blackCount);
	}

	void _Inorder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		_Inorder(root->_left);
		cout << root->_kv.first << ":" << root->_kv.second <<" ";
		_Inorder(root->_right);

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
			cout << top->_kv.first << " ";
			q.pop();
			if (top->_left)
				q.push(top->_left);
			if (top->_right)
				q.push(top->_right);
			if (sz == 0)
			{
				sz = q.size();
				cout << endl;
			}
		}

	}
	// 右左 双旋
	void RotateRL(Node* parent)
	{
		RotateR(parent->_right);
		RotateL(parent);
	}
	//左右 双旋
	void RotateLR(Node* parent)
	{
		RotateL(parent->_left);
		RotateR(parent);
	}
	
	// 左旋
	void RotateL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;

		parent->_right = subRL;
		if (subRL)
			subRL->_parent = parent;

		
		Node* prev = parent->_parent;
		subR->_left = parent;
		parent->_parent = subR;

		if (prev == nullptr)
		{
			_root = subR;
			_root->_parent = nullptr;
		}
		else
		{
			if (prev->_left == parent)
				prev->_left = subR;
			else
				prev->_right = subR;

			subR->_parent = prev;
		}
	}
	// 右旋
	void RotateR(Node* parent)
	{
		Node*subL = parent->_left;
		Node*subLR = subL->_right;

		parent->_left = subLR;
		if (subLR)
			subLR->_parent = parent;
		subL->_right = parent;

		Node* prev = parent->_parent;

		parent->_parent = subL;

		if (prev == nullptr)
		{
			_root = subL;
			_root->_parent = nullptr;
		}
		else
		{
			//在判断  
			if (prev->_left == parent)
				prev->_left = subL;
			else
				prev->_right = subL;
			subL->_parent = prev;
		}
	}

	int _maxHeight(Node* root)
	{
		if (root == nullptr)
			return 0;
		int left = _maxHeight(root->_left);
		int right = _maxHeight(root->_right);

		return left > right ? left + 1 : right + 1;
	}

	int _minHeight(Node* root)
	{
		if (root == nullptr)
			return 0;
		int left = _minHeight(root->_left);
		int right = _minHeight(root->_right);

		return left < right ? left + 1 : right + 1;
	}

private:
	Node* _root;
};