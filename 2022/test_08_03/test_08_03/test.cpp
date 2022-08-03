#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//
//	int ar[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	list<int> mylist(ar, ar + n);
//
//	list<int>::iterator pos = find(mylist.begin(), mylist.end(), 5);
//
//	reverse(mylist.begin(), pos);
//
//	reverse(pos, mylist.end());
//
//	list<int>::const_reverse_iterator crit = mylist.crbegin();
//
//	while (crit != mylist.crend())
//
//	{
//
//		//printf("%d ", *crit);
//		cout << *crit << " ";
//
//		++crit;
//	}
//
//	
//
//}

//template<class T>
//
//void removeDuplicates(list<T> &aList)
//{
//	T curValue;
//	list<T>::iterator cur, p;
//	cur = aList.begin();
//	while (cur != aList.end())
//	{
//		curValue = *cur;
//		p = ++cur;
//		//空白行 1
//		while (p != aList.end())
//		{
//			if (*p == curValue)
//			{
//				p = aList.erase(p);
//				//空白行 2
//			}
//			else
//			{
//				p++;
//			}
//		}
//	}
//}

//int main()
//{
//
//	int array[] = { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9 };
//	int n = sizeof(array) / sizeof(int);
//	list<int> mylist(array, array + n);
//	auto it = mylist.begin();
//	while (it != mylist.end())
//	{
//		if (*it != 0)
//			cout << *it << " ";
//		else
//			it = mylist.erase(it);
//
//		++it;
//	}
//	return 0;
//
//}
//#define Container deque<int>
////1.vector 2.list 3.deque
//int main()
//{
//	Container cont = { 1, 2, 3, 4, 5 };
//	Container::iterator iter, tempIt;
//	for (iter = cont.begin(); iter != cont.end();)
//	{
//		tempIt = iter;
//		++iter;
//		cont.erase(tempIt);
//	}
//}

//int main()
//{
//	stack<char> S;
//	char x, y;
//	x = 'n'; y = 'g';
//	S.push(x); //
//	S.push('i'); 
//	S.push(y);
//	S.pop();
//	S.push('r'); 
//	S.push('t');
//	S.push(x);
//	S.pop(); 
//	S.push('s');
//	while (!S.empty())
//	{
//		x = S.top();
//		S.pop();
//		cout << x;
//	};
//	cout << y;
//}

//int main()
//
//{
//
//	queue<char> Q;
//	char x, y;
//	x = 'n'; y = 'g';
//	Q.push(x); 
//	Q.push('i');
//	Q.push(y);
//	Q.pop(); 
//	Q.push('r'); 
//	Q.push('t');
//	Q.push(x);
//	Q.pop();
//	Q.push('s');
//	while (!Q.empty())
//	{
//		x = Q.front();
//		Q.pop();
//		cout << x;
//	};
//	cout << y;
//}

//int main()
//{
//	priority_queue<int> a;
//	priority_queue<int, vector<int>, greater<int> > c;
//	priority_queue<string> b;
//	for (int i = 0; i < 5; i++)
//	{
//		a.push(i); // 大堆
//		c.push(i); // 小堆
//	}
//	while (!a.empty())
//	{
//		cout << a.top() << ' ';
//		a.pop();
//	}
//	cout << endl;
//	while (!c.empty())
//	{
//		cout << c.top() << ' ';
//		c.pop();
//	}
//	cout << endl;
//	b.push("abc");
//	b.push("abcd");
//	b.push("cbd");
//	while (!b.empty())
//	{
//		string str = b.top();
//		cout <<  str << " ";
//		b.pop();
//	}
//	cout << endl;
//	return 0;
//}

//template<typename Type>
//Type Max(const Type &a, const Type &b)
//{
//	cout << "This is Max<Type>" << endl;
//	return a > b ? a : b;
//}
//
//template<>
//int Max<int>(const int &a, const int &b)
//{
//	cout << "This is Max<int>" << endl;
//	return a > b ? a : b;
//}
//
//template<>
//char Max<char>(const char &a, const char &b)
//{
//	cout << "This is Max<char>" << endl;
//	return a > b ? a : b;
//}
//int Max(const int &a, const int &b)
//{
//	cout << "This is Max" << endl;
//	return a > b ? a : b;
//}
//int main()
//{
//	Max(10, 20);
//	Max(12.34, 23.45);
//	Max('A', 'B');
//	Max<int>(20, 30);
//	return 0;
//
//}

//template<class T1, class T2>
//class Data
//{
//public:
//	Data() { cout << "Data<T1, T2>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//template <class T1>
//class Data<T1, int>
//{
//public:
//	Data() { cout << "Data<T1, int>" << endl; }
//private:
//	T1 _d1;
//	int _d2;
//};
//template <typename T1, typename T2>
//class Data <T1*, T2*>
//{
//public:
//	Data() { cout << "Data<T1*, T2*>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//template <typename T1, typename T2>
//class Data <T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//		: _d1(d1)
//		, _d2(d2)
//	{
//		cout << "Data<T1&, T2&>" << endl;
//	}
//private:
//	const T1 & _d1;
//	const T2 & _d2;
//};
//int main()
//{
//	Data<double, int> d1;
//	Data<int, double> d2;
//	Data<int *, int*> d3;
//	Data<int&, int&> d4(1, 2);
//	return 0;
//}

//class MinStack {
//public:
//	MinStack() {
//
//	}
//
//	void push(int val) {
//	
//		if (s1.empty())
//		{	
//			s1.push(val);
//			minStack.push(val);
//		}
//		else
//		{
//			s1.push(val);
//			// 拿到  最小站的头元素
//			int top = minStack.top();
//			if (val <= top)
//			{
//				//minStack.pop();
//				minStack.push(val);
//			}
//		}
//	}
//
//	void pop() {
//		if (s1.empty())
//		{
//			return;
//		}
//		int val = s1.top();
//		s1.pop(); 
//		if (val == minStack.top())
//		{
//			minStack.pop();
//		}
//	}
//
//	int top() {
//		return s1.top();
//	}
//
//	int getMin() {
//		return minStack.top();
//	}
//private:
//	stack<int> s1;
//	stack<int> minStack;
//};

//class Solution {
//public:
//	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//		//[1,2,3,4,5],[4,5,3,2,1]
//		stack<int> s;
//		int j = 0;
//		for (int i = 0; i < pushV.size(); i++)
//		{
//			// 首先 入
//			s.push(pushV[i]);
//
//			while (!s.empty() && s.top() == popV[j])
//			{
//				s.pop();
//				j++;
//			}
//		}
//		return s.empty();
//	}
//};

//class Solution {
//public:
//	int evalRPN(vector<string>& tokens) {
//		int count = 0;
//		stack<int> s;
//		for (const string& str : tokens)
//		{
//			if (strcmp(str.c_str(), "+") == 0)
//			{
//				int right = s.top();
//				s.pop();
//				int left = s.top();
//				s.pop();
//				int total = left + right;
//				s.push(total);
//			}
//			else if (strcmp(str.c_str(), "-") == 0)
//			{
//				int right = s.top();
//				s.pop();
//				int left = s.top();
//				s.pop();
//				int total = left - right;
//				s.push(total);
//			}
//			else if (strcmp(str.c_str(), "*") == 0)
//			{
//				int right = s.top();
//				s.pop();
//				int left = s.top();
//				s.pop();
//				int total = left *  right;
//				s.push(total);
//			}
//			else if (strcmp(str.c_str(), "/") == 0)
//			{
//				int right = s.top();
//				s.pop();
//				int left = s.top();
//				s.pop();
//				int total = left / right;
//				s.push(total);
//			}
//			else
//			{
//				int ret = std::stoi(str);
//				s.push(ret);
//			}
//		}
//
//		count = s.top();
//		s.pop();
//		return count;
//	}
//};

class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		// 建小堆  
		auto it = nums.begin();
		priority_queue<int,vector<int>,greater<int>> p;
		for (int i = 0; i < nums.size(); i++)
		{
			if (i < k)
			{
				// 入堆
				p.push(nums[i]);
			}
			else
			{
				int ret = p.top();
				if (ret < nums[i])
				{
					p.pop();
					p.push(nums[i]);
				}
			}
		}

		
		return p.top();
	}
};

int main()
{
	string str = "1";
	int ret = std::stoi(str);
	cout << ret << endl;
	return 0;
}