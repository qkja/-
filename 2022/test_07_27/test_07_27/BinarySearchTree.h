#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::swap;
using std::string;

namespace key
{

	template<class T>
	struct BSTreeNOde
	{
	public:
		BSTreeNOde(const T& x = T())
			:left(nullptr)
			, right(nullptr)
			, _key(x)
		{
		}

		BSTreeNOde* left;
		BSTreeNOde* right;
		T _key;
	};

	template<class T>
	class BSTree
	{
	public:
		typedef BSTreeNOde<T> Node;

	private:
		void DestoryTree(Node* root)
		{
			if (root == nullptr)
				return;

			DestoryTree(root->left);
			DestoryTree(root->right);
			delete root;
		}

		Node* CopyTree(Node* root)
		{
			if (root == nullptr)
			{
				return nullptr;
			}
			Node* copyNode = new Node(root->_key);

			copyNode->left = CopyTree(root->left);
			copyNode->right = CopyTree(root->right);
			return copyNode;
		}

	public:
		BSTree()
			:_root(nullptr)
		{}

		BSTree<T>& operator=(BSTree b)
		{
			swap(_root, b._root);
			return *this;
		}
		~BSTree()
		{
			DestoryTree(_root);
			_root = nullptr;
		}
		BSTree(const BSTree& b)
			:_root(nullptr)
		{
			_root = CopyTree(b._root);
		}

		bool insert(const T& val)
		{
			if (_root == nullptr)
			{
				_root = new Node(val);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = _root;
			while (cur != nullptr)
			{
				if (val > cur->_key)
				{
					parent = cur;
					cur = cur->right;
				}
				else if (val < cur->_key)
				{
					parent = cur;
					cur = cur->left;
				}
				else
				{
					return false;
				}
			}

			// 判断一些插入 左  还是  右
			if (parent->_key < val)
				parent->right = new Node(val);
			else
				parent->left = new Node(val);

			return true;
		}

		bool erase(const T& val)
		{
			if (_root == nullptr)
				return false;
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur != nullptr)
			{
				if (val > cur->_key)
				{
					parent = cur;
					cur = cur->right;
				}
				else if (val < cur->_key)
				{
					parent = cur;
					cur = cur->left;
				}
				else
				{
					// 三种情况
					// cur 左 右  左一个 为空 或者 都为空
					if (cur->left == nullptr)
					{
						// 首先 要判断 删除的节点是 头节点   这样  parent = nullptr
						if (cur == _root)
						{
							_root = cur->left;
							delete cur;
							return true;
						}

						// 判断 要删除的 节点  是 父节点的左子树 还是 右子树
						if (cur == parent->left)
						{
							// 主意 这里不能置为空 你不确定 cur 有没有 右子树
							parent->left = cur->right;
						}
						else
						{
							parent->right = cur->right;
						}
						delete cur;
						return true;
					}
					// cur 一个 右为空
					else if (cur->right == nullptr)
					{
						// 还是 要判断的
						if (cur == _root)
						{
							_root = cur->right;
							delete cur;
							return true;
						}

						if (cur == parent->left)
						{
							// 主意 这里不能置为空 你不确定 cur 有没有 右子树
							parent->left = cur->right;
						}
						else
						{
							parent->right = cur->right;
						}
						delete cur;
						return true;
					}
					else
					{
						Node*  minParent = cur;
						Node*  minRight = cur->right;
						while (minRight->left)
						{
							minParent = minRight;
							minRight = minRight->left;
						}
						// 交换
						swap(minRight->_key, cur->_key);

						// 删除 所在的节点
						if (minParent->left == minRight)
						{
							minParent->left = minRight->right;
						}
						else
						{
							minParent->right = minRight->right;
						}
						delete minRight;
					}
				}
			}
			return false;
		}
		Node* find(const T& key)
		{
			if (_root == nullptr)
				return nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (key > cur->_key)
				{
					cur = cur->right;
				}
				else if (key < cur->_key)
				{
					cur = cur->left;
				}
			    else
		      	{
					return cur;
			    }
			}
			return nullptr;
		}

		void inorder()
		{
			_inorderR(_root);
		}


		
		bool insertR(const T& val)
		{
			return _insertR(_root, val);
		}

		bool eraseR(const T& val)
		{
			return _eraseR(_root, val);
		}
		Node* findR(const T& key)
		{
			return _findR(_root, key);
		}
	private:
		Node* _findR(Node* root,const T& key)
		{
			if (root == nullptr)
				return nullptr;

			if (key > root->_key)
				return _findR(root->right,key);

			else if (key < root->_key)
				return _findR(root->left, key);

			else
				return root;
		}

		bool _eraseR(Node*& root,const T& val)
		{
			if (root == nullptr)
			{
				return false;
			}
			if (root->_key > val)
			{
				_eraseR(root->left, val);
			}
			else if (root->_key < val)
			{
				_eraseR(root->right, val);
			}
			// 找到了
			else
			{
				// 还分为 四种 情况
				if (root->left == nullptr)
				{
					Node* cur = root;
					root = root->right;
					delete cur;
				}
				else if (root->right == nullptr)
				{
					Node* cur = root;
					root = root->left;
					delete cur;

				}
				else
				{
					Node* minRight = root->right;
					while (minRight->left != nullptr)
					{
						minRight = minRight->left;
					}

					// 覆盖
					root->_key = minRight->_key;
					//swap(root->_key, minRight->_key);

					return _eraseR(root->right, minRight->_key);
				}
				return true;
			}
			return false;
		}










		bool _insertR(Node*& root, const T& val)
		{
			if (root == nullptr)
			{
				root = new Node(val);
			}

			// 
			if (val > root->_key)
				_insertR(root->right, val);
			else if (val < root->_key)
				_insertR(root->left, val);
			else
				return false;

			return true;
		}

		/*bool _insertR(Node*& root, const T& val)
		{
			if (root == nullptr)
			{
				root = new Node(val);
			}

			if (root->_key > val)
			{
				_insertR(root->left, val);
			}
			else if (root->_key < val)
			{
				_insertR(root->right, val);
			}
			else
			{
				return false;
			}
			return true;
		}*/

		void _inorderR(Node* root)
		{
			if (root == nullptr)
				return;
			_inorderR(root->left);
			cout << root->_key << " ";
			_inorderR(root->right);
		}

	private:
		Node* _root;
	};
}


namespace key_value
{

	template<class K, class V>

	struct BSTreeNode
	{
	public:
		BSTreeNode(const K k, const V v)
			:left(nullptr)
			, right(nullptr)
			, _key(k)
			, _value(v)
		{
		}

		BSTreeNode* left;
		BSTreeNode* right;
		K _key;
		V _value;
	};

	template<class K, class V>
	class BSTree
	{
		typedef BSTreeNode<K, V> Node;
	public:
		bool Insert(const K& key, const V& value)
		{
			if (_root == nullptr)
			{
				_root = new Node(key, value);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = _root;
			while (cur != nullptr)
			{
				if (key > cur->_key)
				{
					parent = cur;
					cur = cur->right;
				}
				else if (key < cur->_key)
				{
					parent = cur;
					cur = cur->left;
				}
				else
				{
					return false;
				}
			}

			// 判断一些插入 左  还是  右
			if (parent->_key < key)
				parent->right = new Node(key, value);
			else
			    parent->left = new Node(key, value);

			return true;
		}



		Node* Find(const K& key)
		{

			if (_root == nullptr)
				return nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (key > cur->_key)
				{
					cur = cur->right;
				}
				else if (key < cur->_key)
				{
					cur = cur->left;
				}
				else
				{
					return cur;
				}
			}
			return nullptr;
		}
		
		bool Erase(const K& key)
		{
			if (_root == nullptr)
				return false;
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur != nullptr)
			{
				if (key > cur->_key)
				{
					parent = cur;
					cur = cur->right;
				}
				else if (key < cur->_key)
				{
					parent = cur;
					cur = cur->left;
				}
				// 找到了 要删除的节点了
				else
				{
					//  左子树 为空  或者  左子树  和  右子树  都为空
					if (cur->left == nullptr)
					{
						// 首先 要判断 删除的节点是 头节点   这样  parent = nullptr
						if (cur == _root)
						{
							_root = cur->left;
							delete cur;
							return true;
						}

						// 判断 要删除的 节点  是 父节点的左子树 还是 右子树
						if (cur == parent->left)
						{
							// 主意 这里不能置为空 你不确定 cur 有没有 右子树
							parent->left = cur->right;
						}
						else
						{
							parent->right = cur->right;
						}
						delete cur;
						return true;
					}
					// cur 一个 右为空
					else if (cur->right == nullptr)
					{
						// 还是 要判断的
						if (cur == _root)
						{
							_root = cur->right;
							delete cur;
							return true;
						}

						if (cur == parent->left)
						{
							parent->left = cur->right;
						}
						else
						{
							parent->right = cur->right;
						}
						delete cur;
						return true;
					}
					// 左子树  和  右子树  都为空
					else
					{
						Node*  minParent = cur;
						Node*  minRight = cur->right;
						while (minRight->left)
						{
							minParent = minRight;
							minRight = minRight->left;
						}
						// 交换 或者  直接覆盖
						std::swap(minRight->_key, cur->_key);

						// 删除 所在的节点
						if (minParent->left == minRight)
						{
							minParent->left = minRight->right;
						}
						else
						{
							minParent->right = minRight->right;
						}
						delete minRight;
					}
				}
			}
			return false;
		}
		void _InOrder(Node* root)
		{
			if (root == nullptr)
				return;
			_InOrder(root->left);
			cout << root->_key << ":" << root->_value;
			_InOrder(root->right);
		}
		void InOrder()
		{
			_InOrder(_root);
		}
	private:
		Node* _root = nullptr;
	};

	void TestBSTree()
	{
		BSTree<string, string> dict;
		dict.Insert("insert", "插入");
		dict.Insert("erase", "删除");
		dict.Insert("left", "左边");
		dict.Insert("string", "字符串");
		string str;
		while (cin >> str)
		{
			auto ret = dict.Find(str);
			if (ret)
			{
				cout << str << ":" << ret->_value << endl;
			}
			else
			{
				cout << "单词拼写错误" << endl;
			}
		}

		string strs[] = { "苹果", "西瓜", "苹果", "樱桃", "苹果", "樱桃", "苹果", "樱桃", "苹果" };
		// 统计水果出现的次
		BSTree<string, int> countTree;
		for (auto str : strs)
		{
			auto ret = countTree.Find(str);
			if (ret == NULL)
			{
				countTree.Insert(str, 1);
			}
			else
			{
				ret->_value++;
			}
		}
		countTree.InOrder();
	}
}