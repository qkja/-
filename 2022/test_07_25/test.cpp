#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class A
//{
//public:
//	virtual void func()
//	{
//		cout << "A:: func()" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	virtual void func(int s,int m)
//	{
//		cout << "B:: func()" << endl;
//	}
//
//	void func(int i)
//	{
//		cout << "B:: func(int i)" << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	A& a = b;
//	a.func();
//	//b.func(2);
//	return 0;
//}


//class Person {
//public:
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//class Student : public Person {
//public:
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//		delete[] _name;
//	}
//
//private:
//	char* _name = new char[10]{ 'j', 'a', 'c', 'k' };
//};
//
//int main()
//{
//
//	Person* ptr = new Person;
//	delete ptr; // ptr->destructor() + operator delete(ptr)
//
//	ptr = new Student;
//	delete ptr;  // ptr->destructor() + operator delete(ptr)
//
//	return 0;
//}