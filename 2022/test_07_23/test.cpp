#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//class A
//{
//public:
//	virtual	void Print();
//private:
//
//};
//void A::Print()
//{
//	cout << "aaaa" << endl;
//}
//
//class B : public A
//{
//public:
//	void Print()
//	{
//		cout << "bbbb" << endl;
//
//	}
//};
//
//int main()
//{
//	B b;
//	A& a = b;
//	a.Print();
//	return 0;
//}

//class A 
//{ public: 
//virtual	void test(float a) { cout << a; } 
//}; 
//class B :public A 
//{ public:
//	void test(int b) { cout << b; } 
//}; 
//void main() 
//{ 
//	A* a = new A; 
//	B* b = new B; 
//	a = b; 
//	a->test(1.1);
//}

//int main()
//
//{
//
//	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(100);
//
//	v.resize(20);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(50);
//
//	v.resize(5);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//}
//int main()
//
//{
//
//	int ar[] = { 1,2,3,4,0,5,6,7,8,9 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	vector<int>::iterator it = v.begin();
//
//	while (it != v.end())
//
//	{
//
//		if (*it != 0)
//
//			cout << *it;
//
//		else
//
//			v.erase(it);
//
//		it++;
//
//	}
//
//	return 0;
//
//}

//int main()
//{
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	//int ret1 = v[3];
//	int ret2 = v.at(3);
//	//auto it = v.begin();
//	//cout << (void*)it << endl;
//	//v.erase(it);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//
//		switch (y)
//		{
//		default: printf("hello");
//
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (c > b)
//				printf("%d %d %d\n", a, c, b);
//
//			else
//				printf("%d %d %d\n", a, b, c);
//		}
//		// c a b
//		else
//		{
//			printf("%d %d %d\n", c, a, b);
//		}
//	}
//	//b a
//	else
//	{
//
//		if (b > c)
//		{
//			if (c > a)
//				printf("%d %d %d\n", b, c, a);
//			else
//				printf("%d %d %d\n", b, a, c);
//		}
//		else
//		{
//			printf("%d %d %d\n", c, b, a);
//
//		}
//	}
//	
//	return 0;
//}

//class A
//{
//public:
//	virtual void func1()
//	{
//		cout << "class A:: func1()" << endl;
//	}
//
//	void func2()
//	{
//		cout << "void func2()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void func1()
//	{
//		cout << "class B:: func1()" << endl;
//	}
//};

//int main()
//{
//	A a;
//	B b;
//	A* p = &a;
//
//	p->func1();
//	p->func2();
//	return 0;
//}
//class Person
//{
//public:
//	Person(string& name)
//		:_name(name)
//	{
//
//	}
//	void buyTicket()
//	{
//		cout << _name << " 普通人 票价 100 ￥" << endl;
//	}
//protected:
//	string _name;
//};
//
//class Soldier : public Person
//{
//public:
//	Soldier(string& name)
//		:Person(name)
//	{
//
//	}
//	void buyTicket()
//	{
//		cout << _name << " 军人 优先购买 票价 100 ￥" << endl;
//	}
//};
//
//class Student:public Person
//{
//public:
//	Student(string& name)
//		:Person(name)
//	{
//
//	}
//	void buyTicket()
//	{
//		cout << _name << " 学生 半价 50 ￥" << endl;
//	}
//};
//
//int main()
//{
//	
//	while (true)
//	{
//		cout << "=====================" << endl;
//		cout << "1 学生 2 军人 3 普通人" << endl;
//		int ret = -1;
//		cout << "请选择 " ;
//		cin >> ret;
//		string name;
//		cout << "请输入你的名字: " << endl;
//		cin >> name;
//		switch (ret)
//		{
//		case 1:
//		{
//			Student s(name);
//			s.buyTicket();
//		}
//			break;
//		case 2:
//		{
//			Soldier s(name);
//			s.buyTicket();
//		}
//			break;
//
//		case 3:
//		{
//			Person s(name);
//			s.buyTicket();
//		}
//			break;
//		default:
//			cout << "输入错误，请重新输入" << endl;
//			break;
//		}
//	}
//
//	return 0;
//}


class A
{
public:
	virtual void func()
	{
		cout <<"A:: void func()" << endl;
	}
};

class B : public A 
{
public:
	virtual void func()
	{
		cout << "B:: void func()" << endl;
	}
};

int main()
{
	B b;
	A& a = b;
	a.func();
	return 0;
}
