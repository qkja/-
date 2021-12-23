#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define DIV(a, b) a / b

f(char* x, char* y)
{
	do 
	{ 
		x++, y++;
	} 
	while ((*x == *y) != '\0');
}

#include <stdio.h>
int main()
{
    int s = 0, n;
    for (n = 0; n < 4; n++) {
        switch (n) {
        default:
            s += 4;//4123233123
        case 1:
            s += 1;
        case 2:
            s += 2;
        case 3:
            s += 3;
        }
    }
    printf("%d\n", s);
}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d", a | b);
//	/*int a[10] = { 0 };
//	int x = 0; 
//	int* pa = a;*/
//	/*int x = 0;
//	int y = 0;
//	int v = DIV(x + 5, y - 5);
//	printf("%d", v);*/
//	return 0;
//}

//struct A1 {
//    virtual ~A1() {}
//};
//struct A2 {
//    virtual ~A2() {}
//};
//struct B1 : A1, A2 {};
//
//int main() {
//    B1 d;
//    A1* pb1 = &d;
//    A2* pb2 = dynamic_cast<A2*>(pb1);  //L1
//    A2* pb22 = static_cast<A2*>(pb1);  //L2
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = (a = 2, b = 3, b++, a + b);
//	printf("%d", c);
//	return 0;
//}