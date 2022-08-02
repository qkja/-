#include <deque>
#include <iostream>

namespace bit
{
  template <class T,class Container = std::deque<T>>
    //  是一个 双端  队列
  class stack   
  {
    public:
      void push(const T& x)
      {
        _con.push_back(x);
      }

      void pop()
      {
        _con.pop_back();
      }
      const T& top()
      {
        return _con.back();
      }

      bool empty()
      {
        return _con.empty();
      }
      size_t size()
      {
        return _con.size();
      }
    private:
      Container _con;
  };
}
