#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <string.h>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//
//using namespace std;
//typedef map<string, int>::iterator countMap;
//void sentencesTOwords(const string& sentences, vector<string>& v)
//{
//	//A blockhouse is a small castle that 
//	//has four openings through which to shoot.
//
//	//string str;
//	string::const_iterator it = sentences.cbegin();
//	int begin = 0;
//	string str;
//	while (begin < sentences.length())
//	{
//
//
//		size_t pos = sentences.find(' ', begin);
//
//		if (pos == string::npos || pos > sentences.length())
//		{
//			str.append(it + begin, sentences.cend());
//			str.pop_back();
//			v.push_back(str);
//			//cout << pos << endl;
//			break;
//		}
//		else
//		{
//			//cout << pos << endl;
//			str.append(it + begin, it + pos);
//			v.push_back(str);
//			str.clear();
//			begin = pos + 1;
//		}
//	}
//}
//
//struct Compare
//{
//	bool operator()(countMap it1, countMap it2)
//	{
//		return (it1->second > it2->second)
//			|| ((it1->second == it2->second)) && it1->first < it2->first;
//	}
//};
//
//void bigTOsmall(string& str)
//{
//	for (char& ch : str)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//			ch = ch + 'a' - 'A';
//	}
//}
//
//int main()
//{
//	vector<string> v;
//	string s;
//
//	std::getline(std::cin, s);
//	bigTOsmall(s);
//	sentencesTOwords(s, v);
//	map<string, int> m;
//	for (string& str : v)
//	{
//		// 修改 
//
//		m[str]++;
//	}
//	
//	//来一个  vector
//	vector<countMap> vCount;
//	countMap it = m.begin();
//	while (it != m.end())
//	{
//		vCount.push_back(it);
//		it++;
//	}
//	sort(vCount.begin(), vCount.end(), Compare());
//	for (auto e : vCount)
//	{
//		cout << e->first<<":" << e->second << endl;
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	map<string, int> m;
//	m.insert(make_pair("qkj", 1));
//	m.insert(make_pair("QKJ", 1));
//	auto it1 = m.begin();
//	auto it2 = ++m.begin();
//	int ret = stricmp(it1->first.c_str(), it2->first.c_str());
//	cout << ret << endl;
//	return 0;
//}


int main()
{
	vector<string> v;
	string s;
}