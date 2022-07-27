#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//
//private:
//
//};
//class MyClass1:public MyClass
//{
//public:
//
//private:
//
//};
//
//int main()
//{
//	cout << sizeof(MyClass) << endl;
//	cout << sizeof(MyClass1) << endl;
//	return 0;
//}

//class A
//{
//
//public:
//
//  void f() { cout << "A::f()" << endl; }
//
//  int a;
//
//};
//
//
//
//class B : public A
//
//{
//
//public:
//
//	void f(int a) { cout << "B::f()" << endl; }
//
//	int a;
//
//};
//
//
//
//int main()
//
//{
//
//	B b;
//
//	b.f();
//
//	return 0;
//
//}

//class A
//
//{
//
//public:
//
//  A() { cout << "A::A()" << endl; }
//
//  ~A() { cout << "A::~A()" << endl; }
//
//  int a;
//
//};
//
//
//
//class B : public A
//
//{
//
//public:
//
//	B() { cout << "B::B()" << endl; }
//
//	~B() { cout << "B::~B()" << endl; }
//
//	int b;
//
//};
//
//
//
//void f()
//
//{
//
//	B b;
//
//}

//class A
//
//{
//
//public:
//
//  A() :m_iVal(0) { test(); }
//
//  virtual void func() { std::cout << m_iVal << " "; }
//
//  void test() { func(); }
//
//public:
//
//  int m_iVal;
//
//};
//
//
//
//class B : public A
//
//{
//
//public:
//
//    B() { test(); }
//
//    virtual void func()
//
//    {
//
//        ++m_iVal;
//
//        std::cout << m_iVal << " ";
//
//    }
//
//};
//
//
//
//int main(int argc, char* argv[])
//
//{
//
//    A* p = new B;
//
//    p->test();
//
//    return 0;
//
//}

class A

{

public:

  virtual void f()

  {

    cout << "A::f()" << endl;

  }

};



class B : public A

{

public:

    virtual void f()

    {

        cout << "B::f()" << endl;

    }

};

int main()
{
    A* pa = (A*)new B;

    pa->f();
}