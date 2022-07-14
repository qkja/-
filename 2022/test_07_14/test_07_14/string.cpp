#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//int main()
//{
//	cout << "string    : " << sizeof(char) << endl;
//	cout << "u16string : " << sizeof(char16_t) << endl;
//	cout << "u32string : " << sizeof(char32_t) << endl;
//	cout << "wstring   : " << sizeof(wchar_t) << endl;
//	return 0;
//}

//int main()
//{
//	string s1("hello");
//	const string s2("hello");
//
//	/*try
//	{
//
//	}
//	catch ()*/
//
//	/*char& ch = s1[5];
//	if (ch == '\0')
//	{
//		cout << "dd" << endl;
//	}*/
//	//const char& ch = s2[5];
//	/*if (ch == '\0')
//	{
//		cout << "dd" << endl;
//	}*/
//	return 0;
//}

//int main()
//{
//	string s = "abcdef";
//	string::iterator it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	return 0;
//}

//class Solution {
//public:
//	string reverseOnlyLetters(string s) {
//		int l = 0;
//		int r = s.size() - 1;
//		while (l < r)
//		{
//			//
//			while (l < r && !((s[l] >= 'a' && s[l] <= 'z') || (s[l] >= 'A' && s[l] <= 'Z')))
//			{
//				l++;
//			}
//
//
//			while (l < r && !((s[r] >= 'a' && s[r] <= 'z') || (s[r] >= 'A' && s[r] <= 'Z')))
//			{
//				r--;
//			}
//			if (l < r)
//			{
//				std::swap(s[l], s[r]);
//				l++;
//				r--;
//			}
//		}
//		return s;
//	}
//};

//int main()
//{
//	string s("hello");
//	string::reverse_iterator it = s.rbegin();
//	while (it != s.rend())
//	{
//		cout << *it << endl;
//		it++;
//	}
//	//cout << it;
//	return 0;
//}

//int main()
//{
//	string s;
//	size_t cap = s.capacity();
//
//	for (int i = 0; i < 100; i++)
//	{
//		s.push_back('a');
//		if (s.capacity() != cap)
//		{
//			cap = s.capacity();
//			cout << "new capacity : " << cap;
//			cout << endl;
//		}
//	}
//
//
//	//string s("hello");
//	////string::const_reverse_iterator it = s.rbegin();
//	//cout << s.max_size() << endl;
//	//cout << s.capacity() << endl;
//	return 0;
//}

//int main()
//{
//	cout << "string    : " << sizeof(char) << endl;
//	cout << "u16string : " <<  sizeof(char16_t) << endl;
//	cout << "u32string : " <<  sizeof(char32_t) << endl;
//	cout << "wstring   : " <<  sizeof(wchar_t) << endl;
//	return 0;
//}

//int main()
//{
//	string s("hello");
//	return 0;
//}

//int main()
//{
//	string s("hello string");
//	return 0;
//}

//int main()
//{
//	string s(10,'a');
//	return 0;
//}
//int main()
//{
//	string s1("hello");
//	string s2(s1);
//	return 0;
//}

//int main()
//{
//	string s("hello");
//	for (size_t i = 0; i < s.size(); i++)
//	{
//		cout << s[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	return 0;
//}
//int main()
//{
//	string s("hello");
//	cout << s.capacity() << endl;
//	return 0;
//}

//int main()
//{
//	string s("hello");
//	string::iterator it = s.begin();
//	while (it != s.end())
//	{
//		(*it)++;
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//	return 0;
//}
//void func(const string& str)
//{
//	string::const_iterator it = str.cbegin();
//	while (it != str.cend())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//int main()
//{
//	string s("hello");
//	func(s);
//	return 0;
//}


//int main()
//{
//	string str("hello");
//	string::reverse_iterator rit = str.rbegin();
//	while (rit != str.rend())
//	{
//		cout << *rit << " ";
//		rit++;
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	string str("hello");
//	string::const_reverse_iterator rit = str.crbegin();
//	while (rit != str.crend())
//	{
//		cout << *rit << " ";
//		rit++;
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	string str("hello");
//	for (auto& ch : str)
//	{
//		ch++;
//		cout << ch << " ";
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	string s;
//	cout << s.max_size() << endl;
//	return 0;
//}

//#include <iostream>    
//#include <string>    
//using namespace std;
//
//int main()
//{
//	string s;
//	size_t cap = s.capacity();
//	cout << "capacity : " << cap << endl;
//	for (int i = 0; i < 100; i++)
//	{
//		s.push_back('a');
//		if (s.capacity() != cap)
//		{
//			cap = s.capacity();
//			cout << "new capacity : " << cap;
//			cout << endl;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	string s;
//	s.push_back('a');
//	s.push_back('b');
//	s.push_back('c');
//	s.push_back('d');
//	cout << s << endl;
//	return 0;
//}

//int main()
//{
//	string s("hello");
//	s.reserve(30);
//	return 0;
//}