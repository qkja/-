#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
struct A {

	long a1;

	short a2;

	int a3;

	int* a4;

};
class Widget
{
public :
	Widget()
	{
    }
	Widget(const Widget& w)
	{
		cout << 1 << endl;
	}
};

Widget f(Widget u)
{

	Widget v(u);

	Widget w = v;

	return w;

}
int main()
{

	Widget x;

	Widget y = f(f(x));
	return 0;
}
//
//int main()
//{
//	cout << sizeof(struct A) << endl; // 2
//
//	//cout << sizeof(long ) << endl;  // 8
//	//cout << sizeof(short) << endl; // 2
//	return 0;
//}