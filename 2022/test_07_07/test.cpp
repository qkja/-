#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <assert.h>
//using namespace std;
//class MyClass
//{
//public:
//	MyClass(int a = 1,int b = 2,int c = 3);
//	~MyClass();
//	MyClass(MyClass& myclass);
//	inline void Print()
//	{
//		cout << "_a = " << _a;
//		cout << "_b = " << _b;
//		cout << "_c = " << _c;
//		cout << endl;
//	}
//private:
//	int _a;
//	int _b;
//	int _c;
//};
//
//MyClass::MyClass(MyClass& myclass)
//{
//	
//	_a = myclass._a;
//	_b = myclass._b;
//	_c = myclass._c;
//}
//
//MyClass::MyClass(int a , int b , int c )
//{
//	_a = a;
//	_b = b;
//	_c = c;
//}

//MyClass::~MyClass()
//{
//	_a = 0;
//	_b = 0;
//	_c = 0;
//}

//int main()
//{
//	MyClass m1(1, 2, 3);
//	MyClass m2(m1);
//	//m2(m1);
//	m1.Print();
//	m2.Print();
//	return 0;
//}

//class A
//{
//public:
//	A(int cap = 4)
//	{
//		int* pa = (int*)malloc(sizeof(int) * cap);
//		assert(pa);
//		_array = pa;
//	}
//	~A()
//	{
//		free(_array);
//		_array = nullptr;
//	}
//public:
//	int* _array;
//};
//void func(A _bb)
//{
//	cout << _bb._array << endl;
//}

//int main()
//{
//	A _aa;
//	func(_aa);
//
//	cout << _aa._array << endl;
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	inline bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._
//}

//int main()
//{
//	Date d1(2022, 5, 18);
//	Date d2(2022, 5, 18);
//
//	if (d1 == d2)
//	{
//		cout << "==" << endl;
//	}
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		_a = 1;
//		_b = 2;
//	}
//	~A()
//	{
//		_a = 0;
//		_b = 0;
//	}
//public:
//	int _a;
//	int _b;
//};

//int main()
//{
//	A a1;
//	A a2(a1);
//	return 0;
//}
//void func()
//{
//	cout << "1" << endl;
//}

#include "test.h"
