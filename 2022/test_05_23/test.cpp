#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class A
{
public:
	/*explicit A(int a)
		:_a(a)
	{
		cout << "a" << endl;
		_a++;
	}*/
	/*A(int a)
		:_a(a)
	{
		cout << "a" << endl;
	}*/

	A(int a)
		//:_a(a)
	{
		cout << "a" << endl;
		_a++;
	}
private:
	static int _a;
};
//int A::_a = 0;

int main()
{
	A _a(1);
	//A _aa = 2;
	//const A& _aa = 1;
	return 0;
}