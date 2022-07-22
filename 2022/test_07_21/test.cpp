#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
//#include "string.hpp"
using namespace std;

//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int i = 0;
//        for (int j = 1; j < nums.size(); j++)
//        {
//            if (nums[j] != nums[i])
//            {
//                i++;
//                nums[i] = nums[j];
//            }
//        }
//        return i + 1;
//    }
//};

//int main()
//{
//    Solution s;
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(2);
//    s.removeDuplicates(v);
//    return 0;
//}

//int main()
//{
//	vector<int> v(10);
//
//	return 0;
//}

//namespace bit
//
//{
//
//    template<class T>
//
//    class vector
//
//    {
//
//    public:
//
//        // Vector的迭代器是一个原生指针
//
//        typedef T* iterator；
//
//            typedef const T* const_iterator；
//
//            iterator begin()；
//
//            iterator end()；
//
//            const_iterator cbegin()；
//
//            const_iterator cend() const；
//
//
//
//            // construct and destroy
//
//            vector()；
//
//            vector(int n, const T& value = T())；
//
//            template<class InputIterator>
//
//        vector(InputIterator first, InputIterator last)；
//
//            vector(const vector<T>& v)；
//
//            vector<T>& operator= (vector<T> v)；
//
//            ~vector()；
//
//            // capacity
//
//            size_t size() const ；
//
//            size_t capacity() const；
//
//            void reserve(size_t n)；
//
//            void resize(size_t n, const T& value = T())；
//
//
//
//            ///////////////access///////////////////////////////
//
//            T& operator[](size_t pos)；
//
//            const T& operator[](size_t pos)const；
//
//
//
//            ///////////////modify/////////////////////////////
//
//            void push_back(const T& x)；
//
//            void pop_back()；
//
//            void swap(vector<T>& v)；
//
//            iterator insert(iterator pos, const T& x)；
//
//            iterator erase(Iterator pos)；
//
//    private:
//
//        iterator _start; // 指向数据块的开始
//
//        iterator _finish; // 指向有效数据的尾
//
//        iterator _endOfStorage; // 指向存储容量的尾
//
//    };
//
//}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	auto it = v.begin();
	while (it != v.end())
	{
		if (*it % 2 == 0)
		{
			it = v.insert(it, 20);
			it++;
		}
		it++;
	}
	for (int val : v)
	{
		cout << val << " ";
	}
	cout << endl;
	return 0;
}