#include "Date.h"

int Date::isLegitimate(int year,int month)
{
  
  static int monthDay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  assert(month > 0 && month < 13);
  //判断闰年
  if(isLeap(year) && month == 2)
  {
    return 29;
  }
  return  monthDay[month];
  //得到月份判断
  //判断天数
  
}

bool Date::isLeap(int year)
{
  assert(year > 0);
  return (year % 4 == 0 && year %100 != 0)
    || year % 400 == 0;
}

Date::Date(const Date& d)
{
  _year = d._year;
  _month = d._month;
  _day = d._day;
}

Date::~Date()
{
  _year = 0;
  _month = 0;
  _day = 0;
}

void Date::Print()
{
  cout << _year << "-" << _month << "-" << _day;
  cout << endl; 
}

bool Date:: operator>(const Date& d)
{
  return (_year > d._year)
    ||(_year == d._year && _month > d._month)
    ||(_year == d._year && _month == d._month && _day > d._day);
}

bool Date::operator>=(const Date& d)
{
  return *this > d || *this == d;
}

bool Date::operator<(const Date& d)
{
  return !(*this >= d);
}

bool Date::operator<=(const Date& d)
{
  return !(*this > d);
}
bool Date::operator!=(const Date& d)
{
  return !(*this ==  d);
}


Date& Date::operator=(const Date& d)
{
  if(this != &d)
  {
    _year = d._year;
    _month = d._month;
    _day = d._day;
  }
  return *this;
}
// 重置 + 
Date& Date::operator+(const int day)
{
  //先判断  day 是否是 小于零
  if(day < 0)
  {
    return (*this)-(-day);
  }
  // 第一步 先把 day加到 _day上
  _day+=day;
  while(_day > isLegitimate(_year,_month))
  {
    _day -= isLegitimate(_year,_month);
    
    if(_month == 12)
    {
      _month = 1;
      _year += 1;
    }
    else 
    {
      _month += 1;
    }
  }

  return *this;
}


Date& Date::operator+=(const int day)
{
  //判断 是不是 小于 0
  if(day < 0)
  {
    return  (*this) - (-day);
  }
  return (*this) = (*this) + day;
}

int Date:: operator-(const Date& d)
{
  // 给一个 数  来计数
  int count = 0;
  int flag = 1;
  // 不能修改原来的，这里用一个第三方
  Date ret(*this);
  if(ret > d)
  {
    flag = -1;
  }
  while(ret != d)
  {
    ret += flag;
    count++;
  }
  return flag*count;
  
}

Date& Date::operator-(const int day)
{
  // day 的大小 
  if(day < 0)
  {
    return (*this) + (-day);
  }
  _day -= day;
  //开始判断  _day 
  while(_day <= 0)
  {
    // 找上一个月的
    if(_month == 1)
    {
      _month = 12;
      _year -= 1;
    }
    else 
    {
      _month -= 1;
    }
    int days = isLegitimate(_year,_month);
    _day += days;
  }
  return *this;
} 

Date& Date::operator-=(const int day)
{
  if(day < 0)
  {
    return (*this)+(-day);
  }
  return (*this) = (*this) - day;
}
