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

	// ��AVL���в���ֵΪdata�Ľڵ�
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
		// ���� 
		if (kv.first > parent->_kv.first)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}
		cur->_parent= parent;

		// �޸� ��ɫ
		while (parent && parent->_col == RED)
		{
			Node* grandfather = parent->_parent;
			if (parent == grandfather->_left)
			{
				Node* uncle = grandfather->_right;
				//���1�� �������  ��Ϊ�� ����ת
				if (uncle && uncle->_col == RED)
				{
					parent->_col = BLACK;
					uncle->_col = BLACK;
					grandfather->_col = RED;

					cur = grandfather;
					parent = cur->_parent;
				}
				// ���� ������ ���� ������Ϊ�� 
				else
				{
				
					// ����
					if (cur == parent->_left)
					{
						RotateR(grandfather);
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					// ˫��
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
				// �������  ��Ϊ�� ����ת
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

					// ����
					if (cur == parent->_right)
					{
						RotateL(grandfather);
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					// ˫��
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



	// �������
	void Inorder()
	{
		_Inorder(_root);
	}

	// �������
	void levelOrder()
	{
		_levelOrder(_root);
	}

private:

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
	// ���� ˫��
	void RotateRL(Node* parent)
	{
		RotateR(parent->_right);
		RotateL(parent);
	}
	//���� ˫��
	void RotateLR(Node* parent)
	{
		RotateL(parent->_left);
		RotateR(parent);
	}
	
	// ����
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
	// ����
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
			//���ж�  
			if (prev->_left == parent)
				prev->_left = subL;
			else
				prev->_right = subL;
			subL->_parent = prev;
		}
	}

	int _Height()
	{

	}

private:
	Node* _root;
};