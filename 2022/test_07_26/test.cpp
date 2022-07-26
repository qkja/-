#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//class A
//{
//public:
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//private:
//	int _a;
//
//};
//int main()
//{
//	A a;
//	return 0;
//}

//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}

//class A
//{
//public:
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//private:
//	int _a;
//
//};
//class B : public A
//{
//	void func1()
//	{
//
//	}
//};
//
//int main()
//{
//
//	B b;
//	return 0;
//}

//class A
//{
//public:
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//private:
//	int _a;
//
//};
//class B : public A
//{
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//	virtual void func3()
//	{
//
//	}
//};
//
//int main()
//{
//
//	B b;
//	return 0;
//}
//
//class A
//{
//public:
//	virtual void func1()
//	{
//		cout << "A:: func1()" << endl;
//	}
//private:
//	int _a;
//
//};
//class B : public A
//{
//	void func1()
//	{
//		cout << "B:: func1()" << endl;
//
//	}
//
//};
//
//int main()
//{
//	B b;
//	A& a = b;
//	a.func1();
//	return 0;
//}

//class A
//{
//public:
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//private:
//	int _a;
//
//};
//class B : public A
//{
//	virtual void func1()
//	{
//
//	}
//	
//	virtual void func3()
//	{
//
//	}
//};
//
//int main()
//{
//
//	B b;
//	return 0;
//}

//class A
//{
//public:
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//private:
//	int _a;
//
//};
//class B : public A
//{
//	void func1()
//	{
//
//	}
//};
//
//int main()
//{
//
//	B b;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//};
//
//typedef void (*ViPointer)();
//
//class B : public A
//{
//	virtual void func1()
//	{
//		cout << "func1()" << endl;
//	}
//	virtual void func2()
//	{
//		cout << "func2()" << endl;
//	}
//	virtual void func3()
//	{
//		cout << "func3()" << endl;
//	}
//};
//
//void printViPointer(ViPointer* f)
//{
//	int i = 0;
//	while (f[i] != nullptr)
//	{
//		printf("[%d] : %p\n", i, f[i]);
//		f[i]();
//		i++;
//	}
//}
//int main()
//{
//
//	B b;
//	printViPointer((ViPointer*)(*(int*)(&b)));
//	return 0;
//}

//int main()
//{
//
//	B b;
//	printViPointer((ViPointer*)(*(int*)(&b))); 
//	
//	// &b                        VS 编译器 虚表指针在头部取地址 
//	// (int*)(&b))               强制类型转化 int* 因为是 32 ，所以指针 4个字节 
//	// *(int*)(&b)               解引用  得到 第一个 存放 虚函数的地址 的 地址
//	// (ViPointer*)(*(int*)(&b)) 前置类型转换 
//	return 0;
//}

//#include <iostream>
//#include <stdio.h>
//class A
//{
//public :
//	virtual void func()
//	{
//
//	}
//};
//
//int g_val1 = 1; // 已初始化
//int g_val2;     // 未初始化
//int main()
//{
//	// 栈区
//	int a = 10;
//
//	// 堆区
//	int* p1 = new int;
//
//	// 字符常量区
//	const char* ptr = "abdve";
//
//	printf("代码区              %p\n", main);
//	printf("字符常量区     %p\n", ptr);
//	printf("已初始化全局变量区    %p\n", &g_val1);
//	printf("未初始化全局变量区    %p\n", &g_val2);
//	printf("堆区                %p\n", p1);
//	printf("栈区                %p\n", &a);
//
//	// 打印 一下 虚函数表指针
//	A aa;
//	printf("虚表指针  %p\n", (*(int*)&aa));
//	delete p1;
//	return 0;
//}

//#include <iostream>
//#include <stdio.h>
//class A
//{
//public:
//	virtual void func1()
//	{
//
//	}
//};
//
//class B : public A
//{
//	virtual void func1()
//	{
//
//	}
//	virtual void func2()
//	{
//
//	}
//};
//
//int main()
//{
//	B b;
//	A a = b;
//
//	return 0;
//}


//class Person {
//public:
//	virtual void BuyTicket() { cout << "买票-全价" << endl; }
//
//	void Buy() { cout << "Person::Buy()" << endl; }
//};
//
//class Student : public Person {
//public:
//	//virtual void BuyTicket() { cout << "买票-半价" << endl; }
//
//	void Buy() { cout << "Student::Buy()" << endl; }
//};
//
//void Func1(Person* p)
//{
//	// 跟对象有关，指向谁调用谁 -- 运行时确定函数地址
//	p->BuyTicket();
//	// 跟类型有关，p类型是谁，调用就是谁的虚函数  -- 编译时确定函数地址
//	p->Buy();
//}
//
//int main()
//{
//	Person p;
//	Student s;
//
//	Func1(&p);
//	Func1(&s);
//
//	return 0;
//}

//class A
//{
//public:
//
//};
//
//class B
//{
//public:
//
//};
//
//class C
//{
//public:
//
//
//private:
//
//};
//


//class Base1 {
//public:
//	virtual void func1() { cout << "Base1::func1" << endl; }
//	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
//	int b1;
//};
//
//class Base2 {
//public:
//	virtual void func1() { cout << "Base2::func1" << endl; }
//	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
//	int b2;
//};
//
//class Derive : public Base1, public Base2 {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
//	int d1;
//};
//
//typedef void(*VFPTR) ();
//void PrintVTable1(VFPTR vTable[])
//{
//	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; i< 3; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}

//void PrintVTable2(VFPTR vTable[])
//{
//	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; i < 2; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}

//int main()
//{
//	Derive d;
//
//	PrintVTable1((VFPTR*)(*(int*)&d));
//	PrintVTable2((VFPTR*)(*((int*)((char*)&d + sizeof(Base1)))));
//	return 0;
//}

//int main()
//{
//	Derive d;
//	return 0;
//}

//class Base1 {
//public:
//	virtual void func1() { cout << "Base1::func1" << endl; }
//	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
//	int b1;
//};
//
//class Base2 {
//public:
//	virtual void func1() { cout << "Base2::func1" << endl; }
//	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
//	int b2;
//};
//
//class Derive : public Base1, public Base2 {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
//	int d1;
//};
//
//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Derive d;
//	printf(" 真实的地址 0X%x\n", &Derive::func1);
//
//	PrintVTable((VFPTR*)(*(int*)&d));
//	PrintVTable((VFPTR*)(*((int*)((char*)&d + sizeof(Base1)))));
//
//	return 0;
//}

//}
//class A
//{
//public:
//	A()
//	{
//		_a = 1;
//	}
//
//	virtual inline void f1()
//	{
//		cout << "A::f1()" << endl;
//	}
//
//	virtual void f2();
//
//private:
//	int _a;
//};
//
//class B : public A
//{
//public:
//	virtual void f1()
//	{
//		cout << "B::f1()" << endl;
//	}
//
//	virtual void f2();
//};
//
//void A::f2()
//{
//	cout << "A::f2()" << endl;
//}
//
//void B::f2()
//{
//	cout << "B::f2()" << endl;
//}
//
//// 多态 调用
//void Func1(A* ptr)
//{
//	ptr->f1();
//	ptr->f2();
//}
//
//// 普通调用
//void Func2(A ptr)
//{
//	ptr.f1();
//	ptr.f2();
//}
//
//int main()
//{
//	A aa;
//	B bb;
//	Func1(&aa);
//	Func1(&bb);
//
//	Func2(aa);
//	Func2(bb);
//
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//
//	}
//   virtual	void func()
//   {}
//};
//int main()
//{
//	A a;
//	return 0;
//}

//class A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _a;
//};
//
//class B : virtual public A
//{
//public:
//	virtual void func()
//	{}
//
//	virtual void func1()
//	{}
//public:
//	int _b;
//};
//
//class C : virtual public A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	return 0;
//}

//class A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _a;
//};
//
//class B : virtual public A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _b;
//};
//
//class C : virtual public A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	return 0;
//}

//class A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _a;
//};
//
//class B : virtual public A
//{
//public:
//	virtual void func()
//	{}
//
//public:
//	int _b;
//};
//
//class C : virtual public A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	return 0;
//}

//class A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _a;
//};
//
//class B : virtual public A
//{
//public:
//	virtual void func()
//	{
//		cout << "B:: void func()" << endl;
//	}
//
//	virtual void func1()
//	{
//		cout << "B:: void func1()" << endl;
//	}
//public:
//	int _b;
//};

//class C : virtual public A
//{
//public:
//	virtual void func()
//	{}
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	virtual void func()
//	{
//		cout << "D:: void func()" << endl;
//	}
//public:
//	int _d;
//};
//
//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	D d;
//	PrintVTable((VFPTR*)(*(int*)&d));
//
//	return 0;
//}

class A
{
public:
	void func()
	{}
public:
	long long _p;
	int _a;
};

class B : virtual public A
{
public:
	int _b;
};
int main()
{
	cout << sizeof(A) << endl;

	cout << sizeof(B) << endl;
	return 0;
}