#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include <cassert>
#include "Date.h"
#include<vector>
#include <algorithm>

using namespace std;

//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}

//int main()
//{
//	Date d1(2022, 7, 18);
//	Date d2(2022, 7, 17);
//	cout << Less(d1, d2) << endl;
//	return 0;
//}


//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//
//template<>
//bool Less(Date* left, Date* right)
//{
//	cout << "bool Less(Date* left, Date* right)" << endl;
//	return *left < *right;
//}
//
//int main()
//{
//	
//	Date* p1 = new Date(2022, 7, 18);
//	Date* p2 = new Date(2022, 7, 19);
//	cout << Less(p1, p2) << endl;
//
//	delete p1;
//	delete p2;
//	return 0;
//}

//template<class T1, class T2>
//class Data
//{
//public:
//	Data() { cout << "Data<T1, T2>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//template<>
//class Data<int, char>
//{
//public:
//	Data() { cout << "Data<int, char>" << endl; }
//private:
//	int _d1;
//	char _d2;
//};
//
//template <class T1>
//class Data<T1, int>
//{
//public:
//Data() {cout<<"Data<T1, int>" <<endl;}
//private:
//T1 _d1;
//int _d2;
//};
//
//int main()
//{
//	Data<int, int> d1;
//	Data<char, int> d2;
//	Data<double, int> d3;
//	Data<float, int> d4;
//	return 0;
//}


//template<class T>
//struct Less
//{
//	bool operator()(const T& x, const T& y) const
//	{
//		return x < y;
//	}
//};
//int main()
//{
//	Date d1(2022, 7, 7);
//	Date d2(2022, 7, 6);
//	Date d3(2022, 7, 8);
//
//	vector<Date*> v2;
//	/*v2.push_back(1);
//	v2.push_back(&d1);*/
//	v2.push_back(&d1);
//	v2.push_back(&d2);
//	v2.push_back(&d3);
//	
//	//sort(v2.begin(), v2.end(), Less<Date*>());
//	vector<int*> v3;
//	v3.push_back(new int(1));
//	v3.push_back(new int(1));
//	v3.push_back(new int(1));
//	return 0;
//}

//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//public:
//	string _name = "peter"; // 姓名
//	int _age = 18; // 年龄
//};
//
//class Student : public Person
//{
//protected:
//	int _stuid; // 学号
//};
//
//int main()
//{
//	Student stu;
//	stu._name = "张三";
//	stu._age = 20;
//	stu.Print();
//	return 0;
//}

//class Person
//{
//private:
//	string _name = "peter"; // 姓名
//	int _age = 18; // 年龄
//};
//
//class Student : public Person
//{
//public:
//	void func()
//	{
//		cout << _name << endl;
//	}
//};
//
//int main()
//{
//	Student stu;
//	stu.func();
//	return 0;
//}

//class Person
//{
//protected:
//	string _name = "peter"; // 姓名
//	int _age = 18; // 年龄
//};
//
//class Student : public Person
//{
//public:
//
//};

//int main()
//{
//	Person p;
//	Student s;
//
//	p = s;
//
//	return 0;
//}


int main()
{

	return 0;
}