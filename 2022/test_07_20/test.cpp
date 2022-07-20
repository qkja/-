#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>


using namespace std;

//int main()
//{
//	string s("1111");
//	int val = stoi(s);
//	cout << val << endl;
//	return 0;
//}

//  ÕýÊ½ ½Ó´¥   vector



int main()
{
	vector<int> v;
	vector<int> v1(10,5);

	auto it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	/*v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);

	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}*/
	return 0;
}