#define _CRT_SECURE_NO_WARNINGS 1
#include "RBTRee.h"
namespace bit
{
	template<class K>

	class set
	{
		//������Ҫ����һ�� ���Եõ� �Ƚϵ�����
		struct SetKeyOfT
		{
			const K& operator()(const K& key)
			{
				return key;
			}
		};

	public:
		// ���������  ���� �Լ� �е��ɻ� z֪���� ����ͻ������ķ���
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator iterator;
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator const_iterator;
		
		// ��������� Ϊ�� ����  const �һ�û��Ū��
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