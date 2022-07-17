#pragma once 

#include <iostream>
#include <string.h>
#include <assert.h>

namespace bit
{
  class string
  {
    public:
      typedef char* iterator;
      typedef const char* const_iterator;
    public:

      string(const char* str = "")
        :_size(strlen(str))
      {
          _capacity = _size;
          _str = new char[_capacity + 1];
          strcpy(_str,str);
      }

      // 拷贝构造 非现代写法
      string(const string& str)
      {
        char* temp = new char[str._capacity + 1];
        strcpy(temp,str._str);
        _str = temp;
        _size = str._size;
        _capacity = str._capacity;
      }

      //   重载 =
      string& operator=(const string& str)
      {
        if(this != &str)
        {
          char* temp = new char[str._capacity + 1];
          strcpy(temp,str._str);
          delete[] _str;
          _str = temp;       
          _size = str._size;
          _capacity = str._capacity;
        }

        return *this;
      }

      ~string()
      {
        if(_str)
        {
          delete[] _str;
          _size = _capacity = 0;
        }
      }

      char& operator[](size_t pos)
      {
        assert(pos >= 0 && pos < _size);
        return _str[pos];
      }

      const char& operator[](size_t pos) const 
      {
        assert(pos >= 0 && pos < _size);
        return _str[pos];
      }

      string& insert(size_t pos,char c)
      {
        assert(pos >= 0 && pos <= _size);
        if(_size == _capacity)
        {
          size_t newcap = _capacity == 0 ? 4 : 2 * _capacity;
          reserve(newcap);
        }
        size_t it = _size + 1;
        while(it != pos)
        {
          _str[it] = _str[it-1];
          it--;
        }
        _str[pos] = c;
        ++_size;
        return *this;
      }

      string& insert(size_t pos,const char* str)
      {
        assert(pos <= _size);
        size_t len = strlen(str);
        reserve(len + _size);
        size_t it = _size + len;
        while(it - pos > len-1)  //   这里是有问题的
        {
          _str[it] = _str[it - len];
          it--;
        }
        for(size_t i = 0;i < len;i++)
        {
          _str[pos++] = *(str+i);
        }
        _size = _size + len;
        return *this;
      }
      // 迭代器
      iterator begin()
      {
        return _str;
      }

      size_t find(char ch,size_t pos = 0) const 
      {
        for(;pos < _size;++pos)
        {
          if(_str[pos] == ch)
          {
            return pos;
          }
        }
        return npos;
      }

      size_t find(const char* str,size_t pos = 0) const
      {
        const char* p = strstr(_str+pos,str);
        if(p == nullptr)
        {
          return npos;
        }
        return p - _str;
      }

      iterator end()
      {
        return _str + _size;
      }

      const_iterator cbegin() const 
      {
        return _str; 
      }

      const_iterator cend() const 
      {
        return _str + _size; 
      }

      string& earse(size_t pos,size_t len = npos)
      {
        assert(pos < _size);
        //  判断剩余的长度
        if(len == npos || len >= _size - pos)
        {
          _str[pos] = '\0';
          _size = pos;
        }
        else 
        {
          for(size_t i = pos+len;i<=_size;i++)
          {
            _str[i-len] = _str[i];
          }
          _size = _size - len;
        }
        
        return *this;
      }

      size_t size() const 
      {
        return _size;
      }

      size_t capacity() const 
      {
        return _capacity;
      }

      bool empty() const 
      {
        return _size == 0;
      }
       
      const char* c_str() const
      {
        return _str;
      }

      string& operator+=(const char ch)
      {
        push_back(ch);
        return *this;
      }

      void swap(string& str)
      {
        std::swap(_str,str._str);
        std::swap(_capacity,str._capacity); 
        std::swap(_size,str._size);
      }

      void clear()
      {
        _size = 0;
        _str[_size] = '\0';
      }

      void push_back(const char ch)
      {
        insert(_size,ch);

        /*判满
        if(_size == _capacity)
        {
          // 这有一个 bug
          size_t newcap = _capacity == 0 ? 4 : 2 * _capacity;
          char* temp = new char[newcap + 1];
          strcpy(temp,_str);
          delete[] _str;
          _str = temp;
          _capacity = newcap;
          
          size_t newcap = _capacity == 0 ? 4 : 2 * _capacity;
          reserve(newcap);

        }
        _str[_size ++] = ch;
        _str[_size] = '\0';
        */
      }
      
      void resize(size_t n,char ch = '\0')
      {
        assert(n >= 0);
        reserve(n);
        //  三种情况
        if(n >= _size)
        {
          memset(_str + _size,ch,n - _size);
          _size = n;
          _str[_size] = '\0';
        }
        else 
        {
          _str[n] = '\0';
          _size = n;
        }

      }

      void reserve(size_t n = 0)
      {
        if(n > _capacity)
        {
          char* temp = new char[n + 1];
          strcpy(temp, _str);
          delete[] _str;
          _str = temp;
          _capacity = n;
        }
      }

      string& operator+=(const char* str)
      {
        append(str);
        return *this;
      }

      string& append(const char* str)
      {
        insert(_size,str);
        /*size_t len = strlen(str);
        reserve(_size + len);
        strcpy(_str + _size,str);
        _size = _size + len;
        */
        return *this;
      }

      //  流插入 <<
      friend std::ostream& operator<<(std::ostream& out, string& s);
      //  流提取 >>
      friend std::istream& operator>>(std::istream& in,string& s);

      const static size_t npos; //这里  可以给缺省值 bug 不建议
    private:
      char* _str;
      size_t _size;     //   有效字符的长度
      size_t _capacity; //   能够存储 有效数组的长度
  };

  const size_t string:: npos = -1;
  
  //  流插入 <<
  std::ostream& operator<<(std::ostream& out, string& s)
  {
    //cout<< s.c_str() << endl;
    for(const char ch : s)
    {
      out << ch;
    }
    return out;
  }

  //  流提取 >>
  std::istream& operator>>(std::istream& in,string& s)
  {

    // 来个 优化区间
    s.clear();
    char buff[128] = {'\0'};
    char ch;
    ch = in.get();
    size_t i = 0;
    while(ch != ' ' && ch != '\n')
    {
      buff[i++] = ch;
      ch = in.get();
      if(i == 127)
      {
        s += buff;
        i = 0;
        memset(buff,'\0',128);
      }
    }

    s += buff;
    memset(buff,'\0',128);


   /* char ch;
    // cin  是识别不了 换行 空格的 
    // 要用一个函数
    
    ch = in.get();

    while(ch != ' ' && ch != '\n')
    {
      s += ch;
      ch = in.get();
    }
    */
    return in;
  }

  bool operator<(const string& s1,const string& s2)
  {
    return strcmp(s1.c_str(),s2.c_str()) < 0;
  }

  bool operator==(const string& s1,const string& s2)
  {
    return strcmp(s1.c_str(),s2.c_str()) == 0;
  }

  bool operator<=(const string& s1,const string& s2)
  {
    return s1 < s2 || s1 == s2;
  }

  bool operator>(const string& s1,const string& s2)
  {
    return !(s1 <= s2);
  }

  bool operator>=(const string& s1,const string& s2)
  {
    return !(s1 < s2);
  }

  bool operator!=(const string& s1,const string& s2)
  {
    return !(s1 == s2);
  }
}
