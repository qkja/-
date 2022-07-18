#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include <iostream>
#include <cassert>
//using namespace std;
//#define PI 3.14
using std::cout;
using std::cin;
using std::endl;

class Date
{
public:
	//构造函数
	Date(int year = 1, int month = 1, int day = 1);

	~Date()
	{
		_year = 0;
		_month = 0;
		_day = 0;
	}
	void Print()
	{
		cout << _year << "-";
		cout << _month << "-";
		cout << _day << endl;;
	}
	//  重载 ==  > < >= != 

	bool operator==(const Date& d);
	bool operator>(const Date& d);
	bool operator!=(const Date& d)
	{
		return !operator==(d);
	}
	bool operator<=(const Date& d)
	{
		return (*this < d) || (*this == d);
	}

	bool operator<(const Date& d)
	{
		return !(*this >= d);
	}
	bool operator>=(const Date& d)
	{
		//   函数 复用
		return *this == d || *this > d;
	}


	// 重载  + = - += -= ++ -- 
	Date& operator=(const Date& d);
	Date& operator+=(const int day);
	Date operator+(const int day);
	Date operator-(const int day);
	Date& operator-=(const int day);
	Date operator++(int day);
	Date& operator++();

	Date operator--(int day);
	Date& operator--();

	//Date* operator&();
	const Date* operator&() const;
	int operator-(const Date d);


private:
	bool IsLeapYear(int year)
	{
		assert(year > 0);
		if ((year % 4 == 0 && year % 100 != 0)
			|| year % 400 == 0)
		{
			return true;
		}
		return false;
	}
	int MonthDays(const int year,const int month)
	{
		static int monthDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && IsLeapYear(year))
		{
			return 29;
		}
		return  monthDays[month];
	}
private:
	int _year;
	int _month;
	int _day;
};