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

		typedef typename RBTree<K, K, SetKeyOfT>::itreator itreator;
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator const_iterator;
	public:
		void insert(const K&data)
		{
			t.Insert(data)
		}

	private:
		RBTree<K, K, SetKeyOfT> t;
	};
}