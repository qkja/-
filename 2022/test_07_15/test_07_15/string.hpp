#define _CRT_SECURE_NO_WARNINGS 1
template<class T>
class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};


template<class T = char>
class B
{
public:
	B(T a)
	{

	}
private:

};

template<class T>
class A
{
public:
	A(T cap = T())  // ����д����ģ���������Ҳ�й��캯��
		:_cap(cap)
		, _p(nullptr)
	{
	}

	A(const A<T>& a)  //  �������д  ����д�Ļ��������ⶨ���������Ҳ���ᱨ��
	{

	}

	~A()
	{
		if (_p)
		{
			delete[] p;
			_cap = 0;
		}
	}

private:
	T _cap;
	T* _p;
};

