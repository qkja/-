#include "Date.h"

void test6()
{
  Date d1(2022,7,7);
  d1 -= -10000;
  d1.Print();
  d1 += (-10000);
  d1.Print();

  d1 = d1 - (-10000);
  d1.Print();
  d1 = d1 + (-10000);
  d1.Print();
}

int main()
{
  test6();
  return 0;
}



















/*void test5()
{
  Date d1(2022,7,7);
  d1 -= 10000;
  d1.Print();
  Date d2(d1);
  d1 += 10000;
  d2.Print();
  cout << d2 - d1 << endl;
  cout << d1 - d2 << endl;
  //d1 += 10000;
  
}

int main()
{
  test5();
  return 0;
}
void test4()
{
  Date d1(400,2,13);
  Date d2;
  Date d3;
  d3 = d2 = d1;

  d2.Print();
  d3.Print();
}

int main()
{
  test4();
  return 0;
}

void test3()
{
  Date d1(400,2,30);
  d1.Print();
}

int main()
{
  test3();
  return 0;
}
void test2()
{
  Date d1(1032,11,23);
  Date d2(1032,11,15);
  if(d1 > d2)
  {
    cout << " > " << endl;
  }
}

int main()
{
  test2();
  return 0;
}

void test1()
{
  Date d1(2022,7,6);
  Date d2(2022,7,6);
  if(d1 == d2)
  {
    cout << " == " << endl;
  }

}

int main()
{
  test1();
  return 0;
}
void test1()
{

  Date d1(2022,7,6);
  Date d2(2022,7,6);

  if(d1 == d2)
  {
    cout << "==" << endl;
  }
}

void test2()
{
  Date d1(1000,10,3);
  Date d2(888,21,4);
  if(d1 > d2)
  {
    cout << ">" << endl;
  }
}

void test3()
{
  Date d1(400,2,-10);
  cout << "dddddddddd" << endl;
}

void test4()
{
  Date d1(1400,2,12);
  Date d2(1300,1,10);
  cout << (d1 == d2) << endl;
  cout << (d1 < d2) << endl;
  cout << (d1 <= d2) << endl;
  cout << (d1 > d2) << endl;
  cout << (d1 >= d2) << endl;
  cout << (d1 != d2) << endl;
}

int main()
{
  //test1();
  //test2();
  //test3();
  test4();
  return 0;
}*/
