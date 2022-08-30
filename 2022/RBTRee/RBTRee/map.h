#define _CRT_SECURE_NO_WARNINGS 1

#include "RBTRee.h"
namespace bit
{
	template<class K,class V>
	class map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<K,V>& p)
			{
				return p.first;
			}
		};
	public:
		typedef typename RBTree<K, pair<K, V>, MapKeyOfT>::iterator iterator;
		typedef typename RBTree<K, pair<K, V>, MapKeyOfT>::const_iterator const_iterator;
		iterator begin()
		{
			return t.begin();
		}

		iterator end()
		{
			return t.end();
		}

		const_iterator begin() const
		{
			return t.begin();
		}

		const_iterator end() const
		{
			return t.end();
		}

	public:
		void insert(const pair<K, V>& data)
		{
			t.Insert(data);
		}

	private:
		RBTree<K, pair<K, V>, MapKeyOfT> t;
	};
}