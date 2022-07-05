#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//using namespace bit;
//namespace bit
//{
//	int a;
//	int b;
//	namespace qkj
//	{
//		int a;
//	}
//}

//int main()
//{
//	cout << "hello world" << endl;
//	a = 2;
//	qkj::a = 1;
//	cout << bit::a << endl;
//	cout << bit::qkj::a << endl;
//	return 0;
//}

//int main()
//{
//	//int a;
//	//cin >> a;
//	//cout << a;
//	return 0;
//}

void func(int a, int b = 2, int c = 3)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
//void f(auto a)
//{
//	cout << a;
//}

//int main()
//{
//	//func(1);
//	//auto arr[1] = { 1 };
//	return 0;
//}

//class A
//{
//public:
//
//	A()
//	{
//	}
//	void Print()
//	{
//		cout << "ÄãºÃ£¬ÊÀ½ç" << endl;
//	}
//	~A()
//	{
//		cout << "hello";
//	}
//private:
//	int* _p;
//	int a;
//	double c;
//};
//
//int main()
//{
//	A a;
//
//	return 0;
//}


//int main()
//{
//	A a();
//	//a.Print();
//	return 0;
//}

class A
{
public:
	A()
	{

	}
private:
	int* _p;
	int _a;
	double _d;
};

//int main()
//{
//	A a;
//	return 0;
//}