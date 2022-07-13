#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//	{
//		_day = day;
//	}
//
//	void Print() const
//	{
//		cout << _year << "-" << _month << "-" << _day;
//		cout << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}


//class MyClass
//{
//public:
//	MyClass(int a = 10, int b = 20)
//		:_a(a)
//		, _b(b)
//	{
//	}
//
//private:
//	const int _a;
//	int& _b;
//};

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2 = 2;
//	int _a1 = 2;
//};
//
//int main() 
//{
//	A aa(1);
//	aa.Print();
//} 


//A.输出1 1
//B.程序崩溃
//C.编译不通过
//D.输出1 随机值

//class A
//{
//public:
//	A()
//	{
//		cout << "测试" << endl;
//	}
//private:
//	int _a;
//	int* _p;
//};
//
//int main()
//{
//	A aa;
//	return 0;
//}

//int main()
//{
//	cout << (nullptr == 0) << end;
//	return 0;
//}

//class A
//{
//public:
//	explicit A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{ 
//	A aa = 10;
//	return 0;
//}


//class A
//{
//public:
//    A()
//	{
//	}
//	static void func()
//	{
//		cout << "static void" << endl;
//	}
//
//public:
//	static int a;
//};
//int A::a = 10;


//int main()
//{
//	A aa;
//	cout << aa.a << endl;
//	cout << A::a << endl;
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//	}
//	static void func()
//	{
//		cout << "static void func" << endl;
//	}
//};
//int main()
//{
//	A a;
//	a.func();
//	A::func();
//	return 0;
//}


//class A
//{
//public:
//	A()
//	{}
//	class B
//	{
//	public:
//		B()
//		{}
//
//	private:
//		int _a;
//	};
//
//private:
//	int _a;
//};
//
//int main()
//{
//
//}

//class A
//{
//	friend class B;  // B是我们的朋友
//public:
//	A();
//	
//
//private:
//	int _a;
//	int _b;
//};
//
//class B
//{
//public:
//	B();
//	void fun()
//	{
//		cout << _a._a << _a._b << endl;
//	}
//
//private:
//	A _a;
//};

//class A
//{
//public:
//	A()
//	{}
//	class B
//	{
//	public:
//		B()
//		{}
//
//	private:
//		int _a; // 可以同名
//	};
//
//private:
//	int _a;
//};

//int main()
//{
//	A::B b;
//	cout << sizeof(A) << endl;
//	return 0;
//}

//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int isLeap(const int& year, const int& month)
//{
//	if (month <= 2)
//	{
//		return 0;
//	}
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int func(const int& year, const int& month, const int& day)
//{
//	int ret = day;
//	static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	for (int i = 0; i < month; i++)
//	{
//		ret += monthDays[i];
//	}
//	ret += isLeap(year, month);
//	return ret;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	cin >> year >> month >> day;
//	cout << func(year, month, day) << endl;
//	return 0;
//}

//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//
//private:
//
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}
//
//static MyClass my;
//int main()
//{
//
//}

//int main()
//{
//	char arr[] = "abcd";
//	const char* str = "abcd";
//	cout << sizeof(str) << endl;
//	cout << strlen(str) << endl;
//	return 0;
//}

