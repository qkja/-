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
}

void test_set()
{

}
int main()
{
	test_map();
	//test_set();
	return 0;
}