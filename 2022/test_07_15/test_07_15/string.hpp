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
	A(T cap = T())  // 这样写允许的，内置类行也有构造函数
		:_cap(cap)
		, _p(nullptr)
	{
	}

	A(const A<T>& a)  //  最好这样写  这样写的话，在类外定义这个函数也不会报错
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

