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
		void insert(const pair<K, V>& data)
		{
			t.Insert(data);
		}

	private:
		RBTree<K, pair<K, V>, MapKeyOfT> t;
	};
}