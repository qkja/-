#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>

using namespace std;

class Person
{
public:
	void Print()
	{
		cout << "�ҽ�" << _name << ",����" << _age << "����" << endl;
	}
	// ���� ����  ���������������Ǹ� this û�㣩�� ���캯��
	Person(const char* name, const int age)
	{
		strcpy(_name, name);
		_age = age;
	}

private:
	int _age;
	char _name[20];
};

//class A
//{
//public:
//	A(int a)
//	{
//
//	}
//};

//class B
//{
//
//};
//
//int main()
//{
//	B b;
//	return 0;
//}

//int main()
//{
//	A _a;
//
//	return 0;
//}

//int main()
//{
//	Person per1("����", 18);
//	
//	per1.Print();
//	return 0;
//}

//class A
//{
//public:
//	// ȫȱʡ
//	A(int a = 10)
//	{
//		_a = a;
//	}
//
//	
//public:
//	int _a;
//};
//
//int main()
//{
//	A a();    
//	a.Print();
//	return 0;
//}

//class A
//{
//public:
//	// ȫȱʡ
//	A(int a = 10)
//	{
//		cout << "ȫȱʡ" << endl;
//	}
//	//�޲�
//	A()
//	{
//		cout << "�޲�" << endl;
//	}
//};
//
//int main()
//{
//	//A a;
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		_a = 0;
//		_d = 0.0;
//	}
//private:
//	int _a;
//	double _d;
//};
//
//class B
//{
//public:
//	B()
//	{
//
//	}
//	A _aa;
//};
//
//int main()
//{
//	B b;
//	return 0;
//}

//class A
//{
//public:
//	A(int cap = 4)
//	{
//		int* arr = (int*)malloc(sizeof(int) * cap);
//		assert(arr);
//		a = arr;
//		memset(arr, 0, sizeof(int) * cap);
//		_cap = cap;
//	}
//	/*~A()
//	{
//		_cap = 0;
//		free(a);
//		a = nullptr;
//	}*/
//private:
//	int* a;
//	int _cap;
//};

//void func(A a)
//{
//
//}
//
//int main()
//{
//	A a;
//	func(a);
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//	{
//
//	}
//	/*A(int cap = 4)
//	{
//		int* arr = (int*)malloc(sizeof(int) * cap);
//		assert(arr);
//		a = arr;
//		memset(arr, 0, sizeof(int) * cap);
//		_cap = cap;
//	}
//
//	~A()
//	{
//		_cap = 0;
//		free(a);
//		a = nullptr;
//	}*/
//	
//private:
//	int* a;
//	int _cap;
//};
//
//class B
//{
//public:
//	B()
//	{
//
//	}
//
//private:
//	A _aa;
//};
//
//int main()
//{
//	B b;
//
//	return 0;
//}

//class A
//{
//public:
//	
//	A(int cap = 4)
//	{
//		int* arr = (int*)malloc(sizeof(int) * cap);
//		assert(arr);
//		a = arr;
//		memset(arr, 0, sizeof(int) * cap);
//		_cap = cap;
//	}
//
//	~A()
//	{
//		cout << "�Զ������͵���������" << endl;
//		_cap = 0;
//		free(a);
//		a = nullptr;
//	}
//
//private:
//	int* a;
//	int _cap;
//};
//
//class B
//{
//public:
//	B()
//	{
//
//	}
//
//private:
//	A _aa;
//};
//
//int main()
//{
//	B b;
//
//	return 0;
//}

class A
{
public:

	
	~A()
	{
		cout << "�Զ������͵���������" << endl;
	}
};

class B
{
private:
	A _aa;
};

int main()
{
	B b;

	return 0;
}