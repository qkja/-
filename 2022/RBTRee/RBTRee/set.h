#define _CRT_SECURE_NO_WARNINGS 1
#include "RBTRee.h"
namespace bit
{
	template<class K>

	class set
	{
		//我们需要传入一个 可以得到 比较的类型
		struct SetKeyOfT
		{
			const K& operator()(const K& key)
			{
				return key;
			}
		};

	public:
		// 这个第三个  参数 自己 有点疑惑 z知道了 这是突破类域的方法
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator iterator;
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator const_iterator;
		
		// 这个迭代器 为何 加上  const 我还没有弄懂
		iterator begin() const
		{
			return t.begin();
		}

		iterator end() const
		{
			return t.end();
		}
	public:
		void insert(const K&data)
		{
			t.Insert(data);
		}
		
	private:
		RBTree<K, K, SetKeyOfT> t;
	};
}