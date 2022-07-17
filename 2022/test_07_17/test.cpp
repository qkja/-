#include <iostream>
#include "string.hpp"

using std::cout;
using std::cin;
using std::endl;

void test_string1()
{
  bit::string s1("hello");
  bit::string s2;
  cout << s1.c_str() << endl;
  cout << s2.c_str() << endl;
}

void test_string2()
{
  bit::string s1("hello");
  bit::string s2 = " word";
  cout << s1.c_str() << endl;
  cout << s2.c_str() << endl;

  s2 = s1;

  cout << s1.c_str() << endl;
  cout << s2.c_str() << endl;
  bit::string s3(s2);
  cout << s3.c_str() << endl;
  cout << s2.c_str() << endl;
}

void test_string3()
{
  bit::string s1("hello");
  cout << s1.capacity() << endl;
  cout << s1.size() << endl;
  char& ch = s1[0];
  ch = '1';
  cout << s1.c_str() << endl;
  ch = 'h';
  cout << s1.c_str() << endl;

}

void test_string4()
{
  bit::string s1;
  cout << s1.c_str() << endl;
  s1 += 'h';
  cout << s1.c_str() << endl;
  s1 += 'h';
  cout << s1.c_str() << endl;
  s1 += 'h';
  cout << s1.c_str() << endl;
  s1 += 'h';
  cout << s1.c_str() << endl;
  s1 += 'h';
  cout << s1.c_str() << endl;
  cout << s1.size() << endl;
  cout << s1.capacity() << endl;
}

void test_string5()
{
  bit::string s1;
  s1 += "bit ";
  s1.append("hello");
  cout << s1.c_str() << endl;

  cout << s1.size() << endl;
  cout << s1.capacity() << endl;
}


void test_string6()
{
  bit::string s1;
  s1.resize(10,'1');
  cout << s1.c_str() << endl;
  cout << s1.size() << endl;

  cout << s1.capacity() << endl;
  s1.resize(2);
  cout << s1.c_str() << endl;
  cout << s1.size() << endl;
  cout << s1.capacity() << endl;
}

void test_string7()
{
  bit::string s1("hello");
  bit::string::iterator it = s1.begin();
  while(it != s1.end())
  {
    cout << *it << " "; 
    (*it)++;
    it++;
  }
  cout << endl;
  for(auto ch : s1)
  {
    cout << ch << " ";
  }
  cout << endl;
  bit::string s2("bit");
  s1.swap(s2);
  cout << s1.c_str() << endl;
  cout << s2.c_str() << endl;
}

void test_string8()
{
  bit::string s1("hello");
  cout << s1.size() << endl;
  cout << s1.capacity()<< endl;
  s1.insert(s1.size(),'1');

  cout << s1.c_str() << endl;
}

void test_string9()
{
  bit::string s1("hello");
  s1.push_back('1');
  s1.push_back('2');
  s1.push_back('3');
  s1.push_back('4');
  s1.push_back('5');
  s1.push_back('6');
  s1.push_back('7');
  s1.push_back('8');
  s1.push_back('9');
  s1.push_back('0');

  cout << s1.c_str() << endl;
}

void test_string10()
{
  bit::string s1;
  s1 += "hello";
  cout << s1.c_str() << endl;
}
void test_string11()
{
  bit::string s1;
  s1.insert(0,"abcdefghigk");
  cout << s1.c_str() << endl;
  s1.earse(5,1);
  cout << s1.c_str() << endl;
}

void test_string12()
{
  bit::string s1;
  s1 += "hello bit";
  size_t pos = s1.find('c');
  if(pos != bit::string::npos)
  {
    cout << pos << endl;
    s1.earse(pos,1);
    cout << s1.c_str() << endl;
  }
  else 
  {
    cout << "没有这个字符" << endl;
  }
}

void test_string13()
{
  bit::string s1;
  bit::string s2;
  cin >> s1;
  cin >> s2;
  cout << s1 << endl;
  cout << s2 << endl;;
}

int main()
{
  //test_string1();
  //test_string2();
  //test_string3();
  //test_string4();
  //test_string5();
  //test_string6();
  //test_string7();
  //test_string8();
  //test_string9();
  //test_string10();
  test_string13();
  return 0;
}
