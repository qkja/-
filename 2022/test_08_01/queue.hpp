#include <deque>
#include <iostream>
#include <list>

namespace bit
{
  template<class T,class Container = std::deque<T>>
    class queue
    {
      public:
        void push(const T& x)
        {
          _con.push_back(x);
        }

        void pop()
        {
          _con.popfront();
        }

        const T& top()
        {
          return _con.front();
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
