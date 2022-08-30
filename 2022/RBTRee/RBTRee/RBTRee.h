#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <utility>

using namespace std;

enum Colour
{
	RED,
	BLACK
};

template<class T>
struct RBTreeNode
{
	
	RBTreeNode<T>* _left;
	RBTreeNode<T>* _right;
	RBTreeNode<T>* _parent;

	
	T _t; // 这是第二个参数

	Colour _col;

	RBTreeNode(const T& t)
		:_left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _t(t)
		, _col(BLACK)
	{}
};

// 迭代器
template<class T, class Ref, class Ptr>
struct __RBTreeIterator
{
	//
	typedef RBTreeNode<T> Node;
	typedef __RBTreeIterator<T, Ref, Ptr> Self;
	Node* _node;

	__RBTreeIterator(Node* node)
		:_node(node)
	{}

	Ref operator*()
	{
		return _node->_t;
	}

	Ptr operator->()
	{
		return &(_node->_t);
	}

	// 前置 ++
	Self& operator++()
	{
		// 这里 就不判断  _node 为nullptr的情况了
		if (_node->_right == nullptr)
		{
			Node* cur = _node;
			Node* parent = cur->_parent;
			while (parent && parent->_left != cur)
			{
				cur = parent;
				parent = parent->_parent;
			}

			_node = parent;

		}
		else
		{
			Node* subLeft = _node->_right;
			while (subLeft->_left)
			{
				subLeft = subLeft->_left;
			}
			_node = subLeft;
		}
		return *this;
	}
	Self operator++(int)
	{
		Self ret(this->_node);
		++(this);
		return ret;
	}
	// 前置
	Self& operator--()
	{
		if (_node->_left == nullptr)
		{
			Node* cur = _node;
			Node* parent = cur->_parent;
			while (parent && parent->_left == cur)
			{
				cur = parent;
				parent = parent->_parent;
			}
			_node = parent;
		}
		else
		{ 
			Node* subLR = _node->_left;
			while (subLR->_right)
			{
				subLR->_right;
			}
			_node = subLR;
		}
		return *this;
	}
	Self operator--(int)
	{
		Self ret(this->_node);
		++(this);
		return ret;
	}
	bool operator!=(const Self& s) const
	{
		//这里比较 的 是 地址
		return _node != s._node;
	}

	bool operator==(const Self& s) const
	{
		return _node == s->_node;
	}
};

template<class K, class T, class KeyOfT>
class RBTree
{
	typedef RBTreeNode<T> Node;
public:
	typedef __RBTreeIterator<T, T&, T*> iterator;
	typedef __RBTreeIterator<T, const T&, const T*> const_iterator;
	iterator begin()
	{
		if (_root == nullptr)
		{
			return iterator(_root);
		}
		//最  左侧的
		Node* cur = _root;
		while (cur->_left)
		{
			cur = cur->_left;
		}
		return iterator(cur);
	}
	iterator end()
	{
		return iterator(nullptr);
	}

	const_iterator begin() const
	{
		if (_root == nullptr)
		{
			return const_iterator(_root);
		}
		//最  左侧的
		Node* cur = _root;
		while (cur->_left)
		{
			cur = cur->_left;
		}
		return const_iterator(cur);
	}

	const_iterator end() const
	{
		return const_iterator(nullptr);
	}

public:
	RBTree()
		: _root(nullptr)
	{}
	

	// 在AVL树中插入值为t的节点
	bool Insert(const T& t)
	{

		if (_root == nullptr)
		{
			_root = new Node(t);
			_root->_col = BLACK;
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		KeyOfT kot;
		while (cur)
		{

			//if (kv.first > cur->_kv.first)
			if (kot(t) > kot(cur->_t))
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (kot(t) < kot(cur->_t))
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}
		
		cur = new Node(t);
		cur->_col = RED;
		// 插入 
		//if (kv.first > parent->_kv.first)
		if (kot(t) > kot(parent->_t))
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
private:

	
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

private:
	Node* _root;
};