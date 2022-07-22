#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include "vector.hpp"

using namespace std;

//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	auto it = find(v.begin(),v.end(), 2);
//	v.erase(it);
//	*it = 10;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	auto it = find(v.begin(), v.end(), 2);
//	v.erase(it);
//
//	return 0;
//}

int main()
{
	bit::vector<int> v(10,2);
	
	for (int ch : v)
	{
		cout << ch << " ";
	}
	cout << endl;
	v.erase(v.end()-1);
	for (int ch : v)
	{
		cout << ch << " ";
	}
	return 0;
}