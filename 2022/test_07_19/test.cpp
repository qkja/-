#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

//class MyClass
//{
//public:
//	MyClass()
//		:_str("hello")
//	{
//		cout << "MyClass()" << endl;
//	}
//
//private:
//	string _str;
//};
//
//int main()
//{
//	MyClass m;
//	return 0;
//}

//class Person
//{
//public:
//	void operator=(Person& per)
//	{
//		cout << "void operator=()" << endl;
//	}
//protected:
//	string _name; // 姓名
//	string _sex; // 性别
//	int _age; // 年龄
//};
//class Student : public Person
//{
//public:
//	int _No; // 学号
//};
//
//
//int main()
//{
//	Student stu;
//	Person& per = stu;
//	pre.
//	return 0;
//}


//int main()
//{
//	Person per;
//	Student stu;
//	per = stu;
//	return 0;
//}


//
//int main()
//{
//	Person per;
//	Student stu;
//	per = stu;  
//
//	Person& p = stu;
//	Person* p = &stu;
//	return 0;
//}

//class Person
//{
//public:
//	string _name = "张三"; // 姓名
//	string _sex = "男"; // 性别
//	int _age = 18; // 年龄
//};
//class Student : protected Person
//{
//public:
//	int _No; // 学号
//};

//int main()
//{
//	Student stu;
//	Person& per = stu;
//	return 0;
//}

//int main()
//{
//	Student stu;
//	Person& per = stu;
//	Person* p = &stu;
//
//	cout << stu._age << endl;
//
//	per._age++;
//	cout << stu._age << endl;
//
//	p->_age++;
//	cout << stu._age << endl;
//	return 0;
//}

//class Person
//{
//protected:
//	string _name = "小李子"; // 姓名
//	int _num = 111; // 身份证号
//};
//
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << " 姓名:" << _name << endl;
//		cout << " 身份证号:" << Person::_num << endl;
//		cout << " 学号:" << _num << endl;
//	}
//protected:
//	int _num = 999; // 学号
//};
//
//int main()
//{
//	Student stu;
//	stu.Print();
//	return 0;
//}

//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		cout << "func(int i)->" << i << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	b.fun(10);
//	b.A::fun();
//	return 0;
//}

//class Person
//{
//public:
//	Person(const char* name = "peter")
//		:_name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& p)
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		return *this;
//	}
//
//protected:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		:_num(num)
//		,Person(name)  //  这 才是  最正确  的动作
//	{
//		cout << "Student()" << endl;
//	}
//
//	Student(const Student& s)
//		: _num(s._num)
//		, Person(s) //  会 发生 切片
//	{
//		cout << "Student(const Student& s)" << endl;
//	}
//
//	Student& operator = (const Student& s)
//	{
//		cout << "Student& operator= (const Student& s)" << endl;
//		if (this != &s)
//		{
//			Person::operator =(s);
//			_num = s._num;
//		}
//		return *this;
//	}
//
//protected:
//	int _num; //学号
//};
//
//int main()
//{
//	Student s1("jack", 18);
//	Student s2(s1);
//
//	return 0;
//}

//class Person
//{
//public:
//	Person(const char* name = "peter")
//		:_name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		return *this;
//	}
//
//protected:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		:_num(num)
//		, Person(name)  //  这 才是  最正确  的动作
//	{
//		cout << "Student()" << endl;
//	}
//
//	Student& operator=(const Student& s)
//	{
//		cout << "Student& operator= (const Student& s)" << endl;
//		if (this != &s)
//		{
//			Person::operator =(s);  // 会 发生 隐藏   突破类域
//			_num = s._num;
//		}
//		return *this;
//	}
//
//protected:
//	int _num; //学号
//};
//
//int main()
//{
//	Student s1("jack", 18);
//	Student s2("joker", 18);
//
//	s2 = s1;
//
//	return 0;
//}

//class Person
//{
//public:
//	Person(const char* name = "peter")
//		:_name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person()" << endl;
//	}
//
//
//protected:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		:_num(num)
//		, Person(name)  //  这 才是  最正确  的动作
//	{
//		cout << "Student()" << endl;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//
//protected:
//	int _num; //学号
//};
//
//int main()
//{
//	Student s1("jack", 18);
//	Student s2("joker", 18);
//
//	s2 = s1;
//
//	return 0;
//}
//class Student;
//class Person
//{
//public:
//	friend void func(Person& per, Student& stu);
//	Person(const char* name = "peter")
//		:_name(name)
//	{
//		cout << "Person()" << endl;
//	}
//private:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		:_num(num)
//		, Person(name)  //  这 才是  最正确  的动作
//	{
//		cout << "Student()" << endl;
//	}
//protected:
//	int _num; //学号
//};
//
//void func(Person& per,Student& stu)
//{
//	cout << per._name << endl;
//}
//
//int main()
//{
//	Student stu("jack", 18);
//
//	return 0;
//}

//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name; // 姓名
//};
//class Student : public Person
//{
//protected:
//	int _stuNum; // 学号
//};
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//int main()
//{
//	Person p;
//	Student s;
//	Display(p, s);
//	return 0;
//}
//class Person
//{
//public:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//protected:
//	int _num; //学号
//};
//class Teacher : public Person
//{
//protected:
//	int _id; // 职工编号
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程
//};
//int main()
//{
//	Assistant a;
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//	//a._name = "peter";
//	return 0;
//}

//int main()
//{
//	Assistant a;
//	return 0;
//}
//class Person
//{
//public:
//	string _name; // 姓名
//	int arr[100000];
//};
//int main()
//{
//	cout << sizeof(Assistant) << endl;
//	return 0;
//}

//int main()
//{
//	Assistant a;
//
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//	return 0;
//}

//class A
//{
//public:
//	int _a;
//};
////class B : public A
//class B : virtual public A
//{
//public:
//	int _b;
//};
////class C : public A
//class C : virtual public A
//{
//public:
//	int _c;
//};
//class D : public B, public C
//{
//public:
//	int _d;
//};
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//
//	d._b = 3;
//	d._c = 4;
//
//	d._d = 5;
//	return 0;
//}

//int main()
//{
//	cout << sizeof(D) << endl;
//	return 0;
//}




//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//
//	d._b = 3;
//	d._c = 4;
//
//	d._d = 5;
//	return 0;
//}

//int main()
//{
//	D d;
//	B b = d;  
//	C c = d;
//	return 0;
//}

//class Person
//{
//public:
//	static int _count; // 统计人的个数。
//};
//int Person::_count = 0;
//class Student : public Person
//{
//};
//class Graduate : public Student
//{
//};
//int main()
//{
//	cout << &Person::_count << endl;
//	cout << &Student::_count << endl;
//	cout << &Graduate::_count << endl;
//	return 0;
//}

﻿/*class A
{
public:
  void f() { cout << "A::f()" << endl; }
  int a;
};

class B : public A

{
public:

	void f(int a) { cout << "B::f()" << endl; }
	int a;
};

int main()
{
	B b;
	b.f();
	return 0;
}*/

﻿/*class Base1{ public: int _b1; };

class Base2 { public: int _b2; };

class Derive : public Base1, public Base2

					{
					public: int _d;
					};



					int main() {



						Derive d;

						Base1* p1 = &d;

						Base2* p2 = &d;

						Derive* p3 = &d;

						return 0;

					}*/
//class A
//{
//public:
//
//	A() { cout << "A::A()" << endl; }
//	~A() { cout << "A::~A()" << endl; }
//	int a;
//};
//
//class B : public A
//{
//public:
//	B() { cout << "B::B()" << endl; }
//	~B() { cout << "B::~B()" << endl; }
//	int b;
//};
//
//void f()
//{
//	B b;
//}

//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1; // 1
//	b += 2; // 5
//	return (a + b + c); // 2+2+3+1
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}

//int main()


//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}
