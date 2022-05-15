#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//
//int main()
//{
//	String s1("hello");
//	String s2(s1);
//}

//class A
//{
//public :
//	A(int c = 10)
//	{
//
//	}
//	int a;
//	int b;
//};
//
//class B
//{
//public:
//	void Print()
//	{
//		cout << "ºÍ¡¢" << endl;
//	}
//	void Print2()
//	{
//		cout << &_aa << endl;
//	}
//private:
//
//	int cap;
//	A _aa;
//};
//
//void func(B ba)
//{
//	//cout << &ba << endl;
//	ba.Print2();
//}
//
//int main()
//{
//	B b;
//	B b1(b);
//	//cout << &b << endl;
//	b.Print2();
//	//cout << &b1 << endl;
//	b1.Print2();
//
//	//b.Print2();
//	//func(b);
//	//cout << &b << endl;
//
//	return 0;
//}

//int main()
//{
//	B b;
//	b.Print();
//	return 0;
//}

//int main()
//{
//	char* arr[] = { "111","222","444","555" };
//
//	return 0;
//}
class A
{
public :
	A(int cap = 10)
	{
		arr = (int*)malloc(sizeof(int) * cap);
		_cap = cap;
	}
	~A()
	{
		free(arr);
		arr = nullptr;
	}
	int* arr;
	int _cap;
};

void func(A _a)
{
	cout << _a.arr << endl;
}

int main()
{
	A _a(10);
	func(_a);

	//cout << _a.arr << endl;

	//A _aa(_a);
	//cout << _a.arr << endl;
	//cout << _aa.arr << endl;
	return 0;
}