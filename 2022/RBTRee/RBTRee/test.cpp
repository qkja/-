#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "map.h"
#include "set.h"

using namespace std;

void test_map()
{
	bit::map<int, int> m;
	m.insert(make_pair(1, 1));
	m.insert(make_pair(2, 2));
	m.insert(make_pair(3, 3));
	m.insert(make_pair(4, 4));
	const bit::map<int, int>& m2 = m;

	//bit::map<int, int>::const_iterator it = m2.begin();
	bit::map<int, int>::iterator it = m.begin();
	while (it != m.end())
	{
		it->second = it->second + 1;
		cout << it->first <<":" << it->second << endl;
		++it;
	}

}

void test_set()
{
	bit::set<int> s;
	s.insert(10);
	s.insert(2);
	s.insert(13);
	s.insert(-4);
	s.insert(5);
	s.insert(4);
	s.begin();
	bit::set<int>::const_iterator it = s.begin();

	while (it != s.end())
	{
		cout << *it << endl;
		++it;
	}
}
int main()
{
	test_map();
	//test_set();
	return 0;
}