#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include "vector.hpp"

using namespace std;

//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	auto it = find(v.begin(),v.end(), 2);
//	v.erase(it);
//	*it = 10;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	auto it = find(v.begin(), v.end(), 2);
//	v.erase(it);
//
//	return 0;
//}

//int main()
//{
//	bit::vector<int> v(10,2);
//	
//	for (int ch : v)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//	v.erase(v.end()-1);
//	for (int ch : v)
//	{
//		cout << ch << " ";
//	}
//	return 0;
//}

//class Solution {
//public:
//	bit::vector<bit::vector<int>> generate(int numRows) {
//		bit::vector<bit::vector<int>> vv(numRows);
//
//		for (int i = 0; i<numRows; i++)
//		{
//			vv[i].resize(i + 1, 0);
//		}
//		// 遍历  vv
//		for (size_t i = 0; i < vv.size(); i++)
//		{
//			for (size_t j = 0; j < vv[i].size(); j++)
//			{
//				cout << vv[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//		for (int i = 0; i<numRows; i++)
//		{
//			for (int j = 0; j<vv[i].size(); j++)
//			{
//				if (j == 0 || j == vv[i].size() - 1)
//				{
//					vv[i][j] = 1;
//				}
//				else
//				{
//					vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
//				}
//			}
//		}
//		for (size_t i = 0; i < vv.size(); i++)
//		{
//			for (size_t j = 0; j < vv[i].size(); j++)
//			{
//				cout << vv[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//		return vv;
//	}
//};

//int main()
//{
//	Solution s;
//	bit::vector<bit::vector<int>> v = s.generate(5);
//
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		for (size_t j = 0; j < v[i].size(); j++)
//		{
//		cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//	/*for (size_t i = 0; i < v.size(); i++)
//	{
//		for (size_t j = 0; j < v[i].size(); j++)
//		{
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//	return 0;
//}
//int main()
//{
//	/*Solution s;
//	bit::vector<bit::vector<int>> v = s.generate(5);
//
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		for (size_t j = 0; j < v[i].size(); j++)
//		{
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//	bit::vector<int> v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	for (int val : v)
//	{
//		cout << val;
//	}
//	return 0;
//}

//int main()
//{
//	bit::vector<int> v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	return 0;
//}

class Solution {
public:
	/*int singleNumber(vector<int>& nums) {
		int len = 32;
		int ret = 0;
		for (int i = 0; i < 32; i++)
		{
			int cout = 0;
			for (int j = 0; j < nums.size(); j++)
			{
				cout += (nums[j] >> i) & 1;
			}
			if (cout % 3 != 0)
			{
				ret |= 1 << i;
			}
		}
		return ret;
	}*/
	int singleNumberChild(int n)
	{
		for (int i = 0; i < 32; i++)
		{
			if (((n >> i) & 1) != 0)
			{
				return 1 << i;
			}
		}
		return 0;
	}

	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int cond = -1;
		int cnt = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (cnt == 0)
			{
				cond = numbers[i];
				cnt++;  
			}
			else
			{
				if (cond == numbers[i])
					cnt++;
				else
					cnt--;
			}
		}

		return cond;  //  说了 有解
	}

	vector<int> singleNumber(vector<int>& nums) {
		//  第一步 
		int ret = 0;
		for (const int& val : nums)
		{
			ret ^= val;
		}
		vector<int> v(2);
		//找到 最后 一个  1
		int flag = singleNumberChild(ret);
		for (int i = 0; i < nums.size(); i++)
		{
			if ((nums[i] & flag) == 0)
			{
				v[0] ^= nums[i];
			}
			else
			{
				v[1] ^= nums[i];
			}
		}
		return v;
	}

	int max(int x, int y)
	{
		return x > y ? x : y;
	}

    int FindGreatestSumOfSubArray(vector<int> array) {

		int total = array[0];
		int maxSum = array[0];
		for (int i = 1; i<array.size(); i++){
			if (total >= 0)
				total += array[i];
			else
				total = array[i];
			if (total > maxSum)
				maxSum = total;
		}
		return maxSum;
	}
};

int main()
{
	Solution s;
	int ret = s.singleNumberChild(4);
	cout << ret << endl;
	return 0;
}
// 0000 0100