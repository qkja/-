#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//class Person
//{
//protected:
//	string _name = "小李子"; // 姓名
//	int _num = 111; // 身份证号
//	void Print1()
//	{
//		cout << "Person :: Print()" << endl;
//	}
//};
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << "Student :: Print()" << endl;
//		Print1();
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

//#define N 100
//template<class T,size_t N>
//class stack
//{
//private:
//	T[N];
//	size_t top;
//};
//
//int main()
//{
//	stack<int> s1;
//	stack<double> s2;
//	return 0;
//}

//template<class T, size_t N>
//class stack
//{
//private:
//	T[N];
//	size_t top;
//};
//
//int main()
//{
//	stack<int,100> s1;
//	stack<double,50> s2;
//	return 0;
//}
//#include <array>

//int main()
//{
//	array<int, 100> arr;
//	cout << sizeof(arr) << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v(100, 0);  // 还可初始化
//	array<int, 100> arr;    // 随机值
//	cout << sizeof(v) << endl; 
//	cout << sizeof(arr) << endl;
//	return 0;
//}

//int main()
//{
//	
//	array<int, 100> arr1;    // 随机值
//	int arr2[100];
//
//	arr2[100];
//	arr1[100];
//	return 0;
//}

#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//template<class T, size_t N>
//class stack
//{
//private:
//
//	T _elem[N];
//	size_t top;
//};
//int main()
//{
//	stack<int, 100> s1;
//	return 0;
//}

//template<class T, size_t N>
//class stack
//{
//public:
//	void f()
//	{
//		N = 100;
//	}
//private:
//	T _elem[N];
//	size_t top;
//};
//
//int main()
//{
//	stack<int, 50> s;
//	return 0;
//}