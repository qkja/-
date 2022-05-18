#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>

using namespace std;
//void func(int b)
//{
//	cout << "&a" << &b << endl;
//}
//int main()
//{
//	int a = 10;
//	func(a);
//	cout <<"&a" << &a << endl;
//	return 0;
//}


//void func(int* pb)
//{
//	free(pb);
//}
//int main()
//{
//	int* arr = nullptr;
//	arr = (int*)malloc(sizeof(int) * 4);
//	func(arr);
//	free(arr);
//	return 0;
//}
//class A
//{
//public:
//	A(int a = 0,double d = 0.0)
//	{
//		_a = a;
//		_d = d;
//	}
//	A(const A& a)
//	{
//		_a = a._a;
//		
//	}
//	~A()
//	{
//		_a = 0;
//		_d = 0.0;
//	}
//
////private:
//public:
//	int _a;
//	double _d;
//};
//void func(A _bb)
//{
//
//}
//
//int main()
//{
//	A _aa(1, 3.0);
//	cout<< "_aa._a = " << _aa._a;
//	cout<< "   _aa._d = " << _aa._d << endl;
//
//	A _bb(_aa);
//
//	cout << "_bb._a = " << _bb._a;
//	cout << "   _bb._d = " << _bb._d << endl;
//	return 0;
//}
//int main()
//{
//	A _aa;
//	func(_aa);
//
//	cout << _aa._array << endl;
//	return 0;
//}

//class A
//{
//public:
//	A(int cap = 4)
//	{
//		int* pa = (int*)malloc(sizeof(int) * cap);
//		assert(pa);
//		_array = pa;
//	}
//	~A()
//	{
//		free(_array);
//		_array = nullptr;
//	}
//public:
//	int* _array;
//};
//void func(A _bb)
//{
//	cout << _bb._array << endl;
//}

//int main()
//{
//	A _aa;
//	func(_aa);
//
//	cout << _aa._array << endl;
//	return 0;
//}

//int main()
//{
//	A _aa;
//	A _bb(_aa);
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0, double d = 0.0)
//	{
//		_a = a;
//		_d = d;
//	}
//	A(const A& a)
//	{
//		_a = a._a;
//		_d = a._d;
//	}
//	~A()
//	{
//		_a = 0;
//		_d = 0.0;
//	}
//
//private:
//	int _a;
//	double _d;
//};

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	bool operator==(const Date& d)
//	{
//		//在这里 年月日都相等  才是 相等
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//public:
//	int _year;
//	int _month;
//	int _day;
//};
////返回值类型 operator操作符(参数列表)
//
//int main()
//{
//	Date d1(2022, 5, 18);
//	Date d2(2022, 5, 18);
//	cout << "d1" << &d1 << endl;
//	cout << "d2" << &d2 << endl;
//	/*if (d1.operator==(d2))
//	{
//		cout << "==" << endl;
//	}*/
//	/*if (d1 == d2)
//	{
//		cout << "==" << endl;
//	}*/
//	
//	return 0;
//}

//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "-";
//		cout << _month << "-";
//		cout << _day << endl;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//public:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 10, 18);
//	Date d2;
//	d2 = d1;
//	d2.Print();
//	return 0;
//}

//int main()
//{
//	Date d1(2022, 5, 18);
//	Date d2(2022, 5, 18);
//	cout << "&d1 " << &d1 << endl;
//	cout << "&d2 " << &d2 << endl;
//	if (d1 == d2)
//	{
//
//	}
//	return 0;
//}

class Date
{
public:
	void Print()
	{
		cout << _year << "-";
		cout << _month << "-";
		cout << _day << endl;
	}
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
public:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2022, 10, 18);
	Date d2 = d1;
	d2.Print();
	return 0;
}