#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <set>
#include <vector>

using namespace std;

//int main()
//{
//	vector<int> v1;
//	vector<char> v2(10,'a');
//	return 0;
//}

//int main()
//{
//	set<int> s;
//	s.insert(0);
//	s.insert(1);
//	s.insert(2);
//	s.insert(3);
//
//	return 0;
//}

//struct MyStruct
//{
//	MyStruct(const T& t = T())
//	:_t(t)
//	{
//	}
//	T _t;
//};
//template<class T>
//
//class A
//{
//public:
//	typedef  MyStruct<T> Node;
//public:
//
//	A()
//	{
//		Node* newNode = new Node;
//	}
//};
//
//int main()
//{
//	A<int> a;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v1(20,15);
//	v1.reserve(10);
//	cout << "capacity: " << v1.capacity() << endl;
//
//	v1.reserve(100);
//	cout << "capacity: " << v1.capacity() << endl;
//	return 0;
//}


//int main()
//{
//	vector<int> v1(20, 15);
//	v1.resize(10, 0);
//	cout << "size: " << v1.size() << endl;
//
//	v1.resize(100, 0);
//	cout << "size: " << v1.size() << endl;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v1(20, 15);
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	vector<int>::iterator it = v1.begin();
//	while (it != v1.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	return 0;
//}
template<class T>
class Vector
{
public:
	typedef T* iterator;
	typedef const T* const_iterator;

	Vector()
		:_start(nullptr)
		, _finish(nullptr)
		, _endOfStoage(nullptr)
	{
	}
private:
	iterator _start;
	iterator  _finish;
	iterator _endOfStoage;
}