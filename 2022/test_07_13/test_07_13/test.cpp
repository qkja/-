#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <memory>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::allocator;

//class stack
//{
//public:
//	stack()
//		:_elem(nullptr)
//		, _size(0)
//		, _top(0)
//	{
//
//	}
//
//	~stack()
//	{
//		if (_elem)
//		{
//			delete[] _elem;
//			_top = 0;
//			_size = 0;
//		}
//	}
//	//  向  内存池中 申请空间
//	void* operator new(size_t n)
//	{
//		void* p = nullptr;
//		p = allocator<ListNode>().allocate(1);
//		cout << "memory pool allocate" << endl;
//		return p;
//	}
//	void operator delete(void* p)
//	{
//		allocator<ListNode>().deallocate((ListNode*)p, 1);
//		cout << "memory pool deallocate" << endl;
//	}
//
//
//
//private:
//	int* _elem;
//	int _size;
//	int _top;
//};
//
//
//int main()
//{
//
//	return 0;
//}

//struct ListNode
//{
//	ListNode* _next;
//	ListNode* _prev;
//	int _data;
//
//	// 申请空间的是后去内存 池
//	void* operator new(size_t n)
//	{
//		void* p = nullptr;
//		p = allocator<ListNode>().allocate(1);
//		cout << "memory pool allocate" << endl;
//		return p;
//	}
//	void operator delete(void* p)
//	{
//		allocator<ListNode>().deallocate((ListNode*)p, 1);
//		cout << "memory pool deallocate" << endl;
//	}
//};
//class List
//{
//public:
//	List()
//	{
//		_head = new ListNode;
//		_head->_next = _head;
//		_head->_prev = _head;
//	}
//	~List()
//	{
//		ListNode* cur = _head->_next;
//		while (cur != _head)
//		{
//			ListNode* next = cur->_next;
//			delete cur;
//			cur = next;
//		}
//		delete _head;
//		_head = nullptr;
//	}
//private:
//	ListNode* _head;
//};
//
//int main()
//{
//	List l1;
//	return 0;
//}

//int main()
//{
//	ListNode* list = new ListNode[300];
//
//	delete[] list;
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* a = (A*)operator new(sizeof(A));
//
//	// 定位 new
//	new(a)A (1);
//	return 0;
//}

//class A
//{
//public:
//	A(const char* str = "")
//		:_str(new char[strlen(str) + 1])
//	{
//		strcpy(_str, str);
//	}
//
//	A(const A& a)
//	{
//		A tmp(a._str);     // 我实例化一个 对象
//		std::swap(_str, tmp._str);
//	}
//private:
//	char* _str;
//};
//
//int main()
//{
//	A a("abcd");
//	A aa(a);
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0, int b = 0)
//		:_a(a)
//		, _b(b)
//	{
//	}
//
//	A(const A& a)
//	{
//		A tmp(a._a, a._b);
//		std::swap(_a, tmp._a);
//		std::swap(_b, tmp._b);
//	}
//private:
//	int _a;
//	int _b;
//};
//
//int main()
//{
//	A a(1, 2);
//	A aa(a);
//
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << " 构造函数 " << endl;
//	}
//
//	~A()
//	{
//		cout << " 析构函数 " << endl;
//	}
//	void Print()
//	{
//		cout << " void Print() " << endl;
//	}
//private:
//
//};
//
//int main()
//{
//	A().Print();  //  作用域 就这一行
//
//	return 0;
//}

#include <iostream>
#include <memory>
using std::cout;
using std::cin;
using std::endl;
using std::allocator;
//class Widget
//{
//public:
//	Widget()
//	{
//
//	}
//	Widget(const Widget& w)
//	{
//		cout << "Widget(const Widget& w)" << endl;
//	}
//
//private:
//
//};
//
//Widget f(Widget u)
//{
//	Widget v(u);
//	Widget w = v;
//	return w;
//}

//int main()
//{
//	Widget x;
//	Widget y = f(f(x));
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		//cout << "A(int a = 0)" << endl;
//	}
//	A(const A&a)
//	{
//		cout << "A(const A&a)" << endl;
//	}
//	void operator=(const A&a)
//	{
//		cout << "void operator=(const A&a)" << endl;
//
//	}
//private:
//	int _a;
//};
//A func()
//{
//	A b;
//	return b;
//}
//
//int main()
//{
//	A b = func();
//	return 0;
//}

//int main()
//{
//	A a;
//	A bb(a);
//	bb(bb);
//	return 0;
//}

//template<class T>
//class A
//{
//public:
//	A(T cap = T())  // 这样写允许的，内置类行也有构造函数
//		:_cap(cap)
//		, _p(nullptr)
//	{
//	}
//
//	A(const A<T>& a)  //  最好这样写  这样写的话，在类外定义这个函数也不会报错
//	{
//
//	}
//
//	~A()
//	{
//		if (_p)
//		{
//			delete[] p;
//			_cap = 0;
//		}
//	}
//
//private:
//	T _cap;
//	T* _p;
//};

//template
//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//
//private:
//
//};

//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}

//template<T1, T2>
//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//
//private:
//
//};

//template<class T1, T2>
//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//
//private:
//
//};

//template<class T1, class T2>
//
//template<typename T1, T2>
//
//template<typename T1, typename T2>
//
template<class T1, typename T2>
class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};
//
//<typename T1, class T2>
