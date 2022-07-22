#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include <assert.h>
#include <string.h>


//  vector 的底层模板实现   
//  迭代器的失效

namespace bit
{
	template<class T>
	class Vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		Vector()
      :_start(nullptr)
       ,_finish(nullptr)
       ,_endOfStoage(nullptr)
    {
    }


    void swap(Vector<T>& v)
    {
      std::swap(_start, v._start);
      std::swap(_finish, v._finish);
      std::swap(_endOfStoage, v._endOfStoage);
    }

    Vector(int n, const T& value = T())
      :_start(nullptr)
       ,_finish(nullptr)
       ,_endOfStoage(nullptr)
    {
      Vector<T> vv;
      for(int i=0;i<n;i++)
      {
        vv.push_back(value);
      }
      swap(vv);
    }

    ~Vector()
    {
      if(_start)
      {
        delete[] _start;
        _finish = nullptr;
        _endOfStoage = nullptr;
      }
    }

    template<class InputIterator>
    Vector(InputIterator first, InputIterator last)
      :_start(nullptr)
       ,_endOfStoage(nullptr)
       ,_finish(nullptr)
    {
      Vector<T> vv;
      while(first != last)
      {
        vv.push_back(*first);
        first++;
      }
      swap(vv);
    }

    //拷贝构造   深拷贝
  
    Vector(const Vector<T>& v)
      :_start(nullptr)
       ,_finish(nullptr)
       ,_endOfStoage(nullptr)
    {
      // 现代写法
      Vector<T> vv;
      for(const T& val : v)
      {
        vv.push_back(val);
      }
      
      swap(vv);
    }

    // 计算长度
		size_t size() const 
    {
      return _finish - _start;
    }
  
    //  计算 容量
  
    size_t capacity() const 
    {
      return _endOfStoage - _start;
    }
                                //  严格 的编译器 可能不过  内置类型也有构造函数
    void resize(size_t n,const T& val = T())
    {
      // 三种 情况
      reserve(n);

      if(n > size())
      {
        while(size() < n)
        {
          // 
          *_finish = val;
          _finish++;
        }
      }
      else 
      {
        _finish = _start + n;
      }

    }

    iterator erase(iterator pos)
    {
      assert(pos >= _start && pos < _finish);
      iterator it = pos + 1;
      while(it != _finish)
      {
        *(it-1) = *it;
        it++;
      }
      _finish--;
      return pos;
    }

    iterator insert(iterator pos, const T& x)
    {
        assert(pos >= _start && pos <= _finish);
        if(_finish == _endOfStoage)
        {
          size_t len = pos - _start; // 记录 防止失效
          size_t newCap = _endOfStoage - _start == 0 ? 4 : 2 * capacity();
          reserve(newCap);
          // 更新 pos 
          pos = _start + len;
        }
        //  开始  插入数据
        iterator it = _finish;
        while(it != pos)
        {
          *it = *(it - 1);
          it--;
        }
        *pos = x;
        _finish++;
        return pos;
    }


    void reserve(size_t n = 0)
    {
      size_t oldsize = size();
    
      if(n > capacity())
      {
        // 开一块空间
        T* tmp = new T[n];
        // 判断  就空间有没有 数据
        if(_start)
        {
          memcpy(tmp,_start,size()*sizeof(T));
          delete[] _start;
        }

        _start = tmp;
        _finish = tmp + oldsize;
        _endOfStoage = tmp + n;
      }

    }

    void pop_back()
    {
      if(size() != 0)   //  这里 最好不要用 空来判断  害怕clear
      {
        --_finish;
      }
    }

    T& operator[](size_t pos)
    {
      assert(pos >= 0 && pos < size());
      return *(_start+pos);
    }
    const T& operator[](size_t pos) const
    {
      assert(pos >= 0 && pos < size());
      return *(_start+pos);
    }

    // 尾插 等着 复用  insert
    void push_back(const T& val)
    {


      insert(_finish,val);


      //  如何  插入 
      /*if(_finish == _endOfStoage)
      {
        size_t newCap = _endOfStoage - _start == 0 ? 4 : 2 * capacity();
        reserve(newCap);
      }

      // 可以了
      *_finish = val;
      _finish++;
      */
    }
    
    void clear()
    {
      _finish = _start;
    }

    // 不缩容

    //  迭代器
    iterator begin()
    {
      return _start;
    }

    const_iterator begin() const
    {
      return _start;
    }

    iterator end()
    {
      return _finish;
    }

    const_iterator end() const
    {
      return _finish;
    }


  private:
		iterator _start;
		iterator _finish;
		iterator _endOfStoage;
	};
}
