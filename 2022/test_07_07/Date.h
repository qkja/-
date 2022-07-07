#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
    if(year > 0 
        && month > 0 
        && month < 13
        && day <= isLegitimate(year,month)
        )
    {
      _year = year;
      _month = month;
      _day = day;
    }
    else 
    {
      // 这里应该抛出一个异常 
      // 现在我还不太会
      //assert(NULL);
      cout << "输入不合法" << endl;
    }
  }

  int isLegitimate(int year,int month);
  bool isLeap(int year);




  //析构函数
  ~Date();
  // 拷贝构造
  Date(const Date& d);

  void Print();


	inline bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

  // 逻辑运算符 重载
  bool operator>(const Date& d);
  bool operator>=(const Date& d);
  bool operator<(const Date& d);
  bool operator<=(const Date& d);
  bool operator!=(const Date& d);

  // 算数运算符 重载
  Date& operator=(const Date& d);
  Date& operator+=(const int day);
  Date& operator+(const int day);
  
  int operator-(const Date& d);
  Date& operator-(const int day);
  Date& operator-=(const int day);
  
private:
	int _year;
	int _month;
	int _day;
};


