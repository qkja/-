#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class Person
//{
//	void print()
//	{
//		cout << "�ҽ�" << _name << ",����" << _age << "����";
//		cout << endl;
//	}
//
//	void set(const char* name, int age)
//	{
//		_age = age;
//		strcpy(_name, name);
//	}
//
//	int _age;
//	char _name[20];
//};
//
//struct Student
//{
//	void print()
//	{
//		cout << "�ҽ�" << _name << ",����" << _age << "����";
//		cout << endl;
//	}
//
//	void set(const char* name, int age)
//	{
//		_age = age;
//		strcpy(_name, name);
//	}
//
//	int _age;
//	char _name[20];
//};
//
//int main()
//{
//	Student per;
//	per._age = 10;
//	return 0;
//}

//class Person
//{
//public :
//	/*void print()
//	{
//		cout << "�ҽ�" <<_name << ",����" << _age << "����";
//		cout << endl;
//	}*/
//
//	void print()
//	{
//		cout << "�ҽ�" << this->_name << ",����" << this->_age << "����";
//		cout << endl;
//	}
//
//	void set(const char* name, int age)
//	{
//		_age = age;
//		strcpy(_name, name);
//	}
//private:
//
//	int _age;
//	char _name[20];
//};
//
//
//int main()
//{
//	Person per1;
//	per1.set("����",18);
//	per1.print();
//
//	return 0;
//}

//class A
//{
//public:
//	void print()
//	{
//		cout << "this " << this << endl;
//	}
//};
//
//
//int main()
//{
//	A a;
//	a.print();
//	cout << "&a   " << &a << endl;
//	return 0;
//}

class B
{
public:

	void print()
	{
		cout <<  this << endl;
	}
};

int main()
{
	B* b = nullptr;
	b->print();
	return 0;
}