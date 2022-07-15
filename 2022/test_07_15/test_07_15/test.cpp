#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//int main()
//{
//	string s("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
//	int size = s.size();
//	cout << size << endl;
//	s.reserve(15);
//	return 0;
//}

//int main()
//{
//	string s("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
//	cout << "原始 size " << s.size() << endl;
//	cout << "原始 capacity() " << s.capacity() << endl;
//	s.reserve(15);
//
//
//	cout << "size " << s.size() << endl;
//	cout << "capacity() " << s.capacity() << endl;
//	return 0;
//}

//int main()
//{
//	string s;
//	cout << "size " << s.size() << endl;
//	cout << "capacity() " << s.capacity() << endl;
//
//	s.resize(20);
//	s.push_back('a');
//	s.push_back('a');
//	s.push_back('a');
//	s.push_back('a');
//	cout << s << endl;
//	/*cout << "size " << s.size() << endl;
//	cout << "capacity() " << s.capacity() << endl;*/
//	return 0;
//}

//int main()
//{
//	string s;
//	s.push_back('a');
//	s.push_back('b');
//
//	s.resize(20,'1');
//	cout << s << endl;
//	return 0;
//}

//int main()
//{
//	string s("hello");
//	s[16];
//	return 0;
//}

//int main()
//{
//	string s("hello");
//	s.append("qkj");
//	cout << s << endl;
//	string s2("你好啊");
//	s.append(s2);
//	cout << s << endl;
//	return 0;
//}

//int main()
//{
//	string s("hello");
//	string s2("你好啊");
//
//
//	s.append(s2.begin(),s2.end());
//	cout << s << endl;
//	return 0;
//}
//int main()
//{
//	string s("hello");
//	s += "aaaa";
//	cout << s << endl;
//
//	s += 'c';
//	cout << s << endl;
//	string s2("hahahah");
//
//	s += s2;
//	cout << s << endl;
//	return 0;
//}4

//int main()
//{
//	string s("hello");
//	s.reserve(100);
//	s.clear();  //  只改变  size 缩容不缩容看编译器
//	return 0;
//}

//namespace bit
//{
//	template < class T = char)
//	class basic_string
//	{
//	public:
//		basic_string(const T*& str)
//			:_str(new T[strlen(str)+1])
//		{
//			strcpy(_str, str);
//		}
//	private:
//		T* _str;
//		size_t _capacity;
//		size_t _size;
//	};
//
//	/*typedef class basic_string<char> string;
//
//	void test_string1()
//	{
//		string s("hello");
//	}*/
//}
//
//int main()
//{
//	//bit::test_string1();
//	return 0;
//}

//template<class T>
//class A
//{
//public:
//	A(T cap = T())  // 这样写允许的，内置类行也有构造函数
//		:_cap(cap)
//		, _p(nullptr)
//	{
//	}
//
//	A(const A<T>& a)  //  最好这样写  这样写的话，在类外定义这个函数也不会报错
//	{
//
//	}
//
//	~A()
//	{
//		if (_p)
//		{
//			delete[] p;
//			_cap = 0;
//		}
//	}
//
//private:
//	T _cap;
//	T* _p;
//};
//
//namespace bit
//{
//	template<class T = char)
//	class A
//	{
//	public:
//
//	private:
//
//	};
//
//	
//}

//template<class T = char)
//class A
//{
//public:
//
//private:
//
//};


//namespace bit
//{
//	template<class T>
//	class basic_string
//	{
//	public:
//		basic_string(const T* str = "")
//			:_str(new T[strlen(str)+1])
//		{
//			strcpy(_str, str);
//			_size = strlen(str);
//			_capacity = _size;
//		}
//		~basic_string()
//		{
//			cout << "1" << endl;
//			delete[] _str;
//		}
//
//		basic_string<T>(const basic_string& a)
//		{
//			_str = new T[strlen(a._str) + 1];
//			
//			strcpy(_str, a._str);
//			_capacity = a._capacity;
//			_size = a._size;
//		}
//
//		/*basic_string<T>(const T& a)
//		{
//			_str = a._str;
//			_capacity = a._capacity;
//			_size = a._size;
//		}*/
//
//	private:
//		T* _str;
//		size_t _capacity;
//		size_t _size;
//	};
//
//	typedef basic_string<char> string;
//
//	void test_string1()
//	{
//		string s("hello");
//	}
//	void test_string2()
//	{
//		string s1("hello");
//		string s2(s1);
//	}
//}

//int main()
//{
//	//bit::test_string1();
//	//bit::test_string2();
//	return 0;
//}
//using std::string;

//int main()
//{
//	string s1("hello");
//	string s2(" qkj");
//	s1.insert(5, s2);
//	cout << s1 << endl;
//
//	s1.insert(2, "xxxxxx");
//	cout << s1 << endl;
//	string::iterator it = s1.begin();
//
//	s1.insert(it + 2, '1');
//	cout << s1 << endl;
//	s1.erase(1);
//	cout << s1 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello");
//	string s2("qkj");
//	cout << s1 << endl;
//	cout << s2 << endl;
//	
//	s1.swap(s2);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello");
//	const char* str = s1.c_str();
//	cout << str << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello");
//	size_t pos = s1.find("lo", 2); // 从  下标 3 开始
//	if (pos != string::npos)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//	return 0;
//}
//int main()
//{
//	string s1("hello");
//	string s2 = s1.substr(1, 2);
//	cout << s2 << endl;
//	return 0;
//}
//using std::cin;
//int main()
//{
//	string s;
//	cin >> s;
//	cout << s << endl;
//	return 0;
//}

//int main()
//{
//	string s;
//	std::getline(cin,s);
//	cout << s << endl;
//	return 0;
//}

//int main()
//{
//	string url = "https://m.cplusplus.com/reference/string/string/getline/";
//	
//	size_t pos1 = url.find("://", 0);
//	string str1 = url.substr(0, pos1);
//	cout << str1 << endl;
//
//	size_t pos2 = url.find('/', pos1 + 3);
//	string str2 = url.substr(pos1 + 3, pos2 - pos1 - 3);
//	cout << str2 << endl;
//
//	string str3 = url.substr(pos2 + 1);
//	cout << str3 << endl;
//
//	return 0;
//}

//int main(int argc, char *argv[])
//{
//
//	string a = "hello world";
//	string b = a;
//	if (a.c_str() == b.c_str())
//	{
//		cout << "true" << endl;
//	}
//	else 
//		cout << "false" << endl; // 1
//
//	string c = b;
//	c = "";
//	if (a.c_str() == b.c_str())
//	{
//		cout << "true" << endl;
//	}
//	else 
//		cout << "false" << endl; // 1
//
//	a = "";
//	if (a.c_str() == b.c_str())
//	{
//		cout << "true" << endl;
//	}
//
//	else 
//		cout << "false" << endl;
//	return 0;
//
//}

//int main()
//{
//
//	string strText = "How are you?";
//
//	string strSeparator = " ";
//
//	string strResult;
//
//	int size_pos = 0;
//
//	int size_prev_pos = 0;
//
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//		size_prev_pos = ++size_pos;
//
//	}
//
//	if (size_prev_pos != strText.size())
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//	}
//
//	cout << endl;
//
//	return 0;
//
//}

//class Solution 
//{
//public:
//	bool isLetter(char ch)
//	{
//		return (ch >= '0' && ch <= '9') || ((ch >= 'a'  && ch <= 'z') || (ch >= 'A'  && ch <= 'Z'));
//
//	}
//	bool isSame(char ch1, char ch2)
//	{
//		if (isLetter(ch1) && isLetter(ch2) && ch1 == ch2)
//		{
//			return true;
//		}
//		// 要是  ch1 大
//		if ((ch1 >= 'a'  && ch1 <= 'z') && isLetter(ch1 - 32) && (ch1 - 32) == ch2)
//		{
//			return true;
//		}
//
//		if ((ch2 >= 'a'  && ch2 <= 'z') && isLetter(ch2 - 32) && (ch2 - 32) == ch1)
//		{
//			return true;
//		}
//
//		return false;
//	}
//
//	bool isPalindrome(string s) {
//		int left = 0;
//		int right = s.size() - 1;
//		while (left < right)
//		{
//			while (left < right && !isLetter(s[left]))
//			{
//				left++;
//			}
//
//			while (left < right && !isLetter(s[right]))
//			{
//				right--;
//			}
//
//			// 开始判断
//			if (left < right &&!isSame(s[left], s[right]))
//			{
//				return false;
//			}
//			left++;
//			right--;
//		}
//		return true;
//	}
//
//	void reverseStrChild(string::iterator first, string::iterator last)
//	{
//		while (first < last)
//		{
//			std::swap(*first, *last);
//			first++;
//			last--;
//		}
//	}
//
//	string reverseStr(string s, int k) {
//		int ret = 2*k;
//		auto it = s.begin();
//		while (ret <= s.size())
//		{
//			//
//			reverseStrChild(it, it + k - 1);
//			it = it + 2*k;
//			ret += 2 * k;
//		} 
//		
//		// 计算剩余
//		int len = s.end() - it;
//		if (len < k)
//		{
//			reverseStrChild(it, s.end() - 1);
//		}
//		else
//		{
//
//			reverseStrChild(it, it + k - 1);
//		}
//		//如果剩余字符少于 k 个，则将剩余字符全部反转。
//		//如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
//
//		return s;
//	}
//
//
//	void reverseString(vector<char>& s) {
//		int left = 0;
//		int right = s.size() - 1;
//		while (left < right)
//		{
//			std::swap(s[left], s[right]);
//			left++;
//			right--;
//		}
//	}
//
//
//	int StrToInt(string str) {
//		int ret = 1;
//		int cout = 0;
//		int flag = 1;
//		for (size_t i = 0; i < str.size(); i++)
//		{
//			if (i == 0)
//			{
//				if (str[0] == '-')
//				{
//					flag = -1;
//				}
//				else if (str[0] == '+')
//				{
//					flag = 1;
//				}
//				else
//				{
//					cout = cout * 10 + (str[i] - '0');
//				}
//			}
//			else
//			{
//				if (str[i] >= '0' && str[i] <= '9')
//				{
//					cout = cout * 10 + (str[i] - '0');
//				}
//				else
//				{
//					return 0;
//				}
//			}
//		}
//
//
//
//		return cout * flag;
//	}
//
//	string addStrings(string num1, string num2) {
//		string::reverse_iterator rit1 = num1.rbegin();
//		string::reverse_iterator rit2 = num2.rbegin();
//		string s;
//		int ret = 0;
//		while (rit1 != num1.rend() && rit2 != num2.rend())
//		{
//			int ret1 = *rit1 - '0';
//			int ret2 = *rit2 - '0';
//			char ch = (ret1 + ret2 + ret) % 10 + '0';
//			s.insert(s.begin(), ch);
//			ret = (ret1 + ret2 + ret) / 10;
//			rit1++;
//			rit2++;
//		}
//		if (rit1 == num1.rend() && rit2 == num2.rend())
//		{
//			if (ret == 1)
//			{
//				s.insert(s.begin(), '1');
//				ret = 0;
//			}
//		}
//		else if (rit1 == num1.rend())
//		{
//			while (rit2 != num2.rend())
//			{
//				int ret2 = *rit2 - '0';
//				char ch = (ret2 + ret) % 10 + '0';
//				s.insert(s.begin(), ch);
//				ret = (ret2 + ret) / 10;
//				rit2++;
//			}
//		}
//		else 
//		{
//			while (rit1 != num1.rend())
//			{
//				int ret1 = *rit1 - '0';
//				char ch = (ret1 + ret) % 10 + '0';
//				s.insert(s.begin(), ch);
//				ret = (ret1 + ret) / 10;
//				rit1++;
//			}
//		}
//		if (ret == 1)
//		{
//			s.insert(s.begin(), '1');
//		}
//		return s;
//	}
//	int firstUniqChar(string s) {
//		int tab[26] = { 0 };
//		for (char ch : s)
//		{
//			tab[ch - 'a'] ++;
//		}
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			if (tab[s[i] - 'a'] == 1)
//				return i;
//		}
//		return -1;
//	}
//	/*string multiply(string num1, string num2) {
//		string::reverse_iterator rit1 = num1.rbegin();
//		string::reverse_iterator rit2 = num2.rbegin();
//		string s;
//		int ret = 0;
//		while (rit1 != num1.rend() && rit2 != num2.rend())
//		{
//			int ret1 = *rit1 - '0';
//			int ret2 = *rit2 - '0';
//			int sum = ret1*ret2 + ret;
//			char ch = sum % 10 + '0';
//			s.insert(s.begin(), ch);
//			ret = sum / 10;
//			rit1++;
//			rit2++;
//		}
//		if (rit1 == num1.rend() && rit2 == num2.rend())
//		{
//			if (ret != 0)
//			{
//				s.insert(s.begin(), ret + '0');
//				ret = 0;
//			}
//		}
//		else if (rit1 == num1.rend())
//		{
//			while (rit2 != num2.rend())
//			{
//				int ret2 = *rit2 - '0';
//				char ch = (ret2 + ret) % 10 + '0';
//				s.insert(s.begin(), ch);
//				ret = (ret2 + ret) / 10;
//				rit2++;
//			}
//		}
//		else
//		{
//			while (rit1 != num1.rend())
//			{
//				int ret1 = *rit1 - '0';
//				char ch = (ret1 + ret) % 10 + '0';
//				s.insert(s.begin(), ch);
//				ret = (ret1 + ret) / 10;
//				rit1++;
//			}
//		}
//		if (ret == 1)
//		{
//			s.insert(s.begin(), '1');
//		}
//	}*/
//	string func(const string& num2,char ch )
//	{
//		string::const_reverse_iterator crit = num2.crbegin();
//		int ret = 0;
//		string s;
//		while (crit != num2.crend())
//		{
//			int cout = *crit - '0';
//			int mul = cout * (ch - '0') + ret;
//			char ch = mul%10 + '0';
//			s.insert(s.begin(), ch);
//			ret = mul / 10;
//			crit++;
//		}
//		if (ret != 0)
//			s.insert(s.begin(), ret + '0');
//		return s;
//	}
//
//	string multiply(string num1, string num2) {
//		int cout = 1;
//		string s = "";
//		for (int i = 0; i < num1.size(); i++)
//		{
//			string str = func(num2, num1[num1.size()-1 - i]);
//			int j = i;
//			while (j != 0)
//			{
//				j--;
//				str.push_back('0');
//			}
//			s = addStrings(s, str);
//		}
//		return s;
//	}
//
//};

class Solution {
public:
	void reverse(string& s,int left,int right)
	{
		while (left < right)
		{
			std::swap(s[left], s[right]);
			left++;
			right--;
		}
	}
	bool isSpace(char ch)
	{
		return ch == ' ';
	}
	string reverseWords(string s) {
		int j = 0;
		int i = 0; // 
		while (i < s.size())
		{
			while (i < s.size() && !isSpace(s[i]))
			{
				i++;
			}
			reverse(s, j, i - 1);
			j = i + 1;
			i++;
		}
		//reverse(s, j, i - 1);
		return s;
	}
};

int main()
{
	Solution S;
	string s1("God Ding");
	cout << S.reverseWords(s1) << endl;
	return 0;
}


//int main()
//{
//	Solution S;
//	string s1("123");
//	string s2("456");
//	cout << S.multiply(s1, s2) << endl;
//	return 0;
//}

//int main()
//{
//	/*Solution s;
//	string s1 = "abc";
//	cout << s.reverseStr(s1, 3) << endl;*/
//	cout << 'a' - 'A' << endl;
//	return 0;
//}

//int main()
//{
//	string s;
//	int ret = 0;
//	std::getline(cin, s);
//	int pos = s.rfind(' ');
//	if (pos == string::npos)
//		cout << s.size() << endl;
//	else
//		cout << s.size() - pos - 1 << endl;
//	return 0;
//}

//int main()
//{
//	string s("hello bit");
//	
//	int pos = s.rfind(' ',s.size() - 1);
//
//	cout << s.size() - pos << endl;
//	return 0;
//}