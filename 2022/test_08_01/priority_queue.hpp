//优先级队列  -- 在 堆上
#include <vector>
#include <iostream>
#include <assert.h>

namespace bit
{
  template<class T>
  struct less
  {
    bool operator()(const T& t1,const T& t2)
    {
      return t1 < t2;
    }
  };

  template<class T,class Container = std::vector<T>,class Compare = less<T>>
  class priority_queue
  {
    public:
      // 建堆
      void push(const T& x)
      {
        _con.push_back(x);
        adjustUp(_con.size()-1);
      }

      void pop()
      {
        assert(!_con.empty());
        std::swap(_con[0],_con[size()-1]);
        _con.pop_back();
        adjustDwon(0);
      }
      const T& top()
      {
        return _con[0];
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

      //大堆 用  小于  
      //小堆 用  大于
      void adjustDwon(int parent)
      {
        int child = 2*parent + 1;
        while(child < size())
        {
          if(child < size() && Compare.(_con[child],_con(child+1)))
          //if(child+1 < size() && _con[child] < _con[child+1])
          {
            child++;
          }

          if(Compare(_con[parent], _con[child]))
          {
            std::swap(_con[parent],_con[child]);
            parent = child;
            child = 2*child + 1;
          }
          else 
          {
            break;
          }
        }

      }
      void adjustUp(int child)
      {
        // 先 建大堆
        int parent = (child-1)/2;
        while(child > 0)
        {
          if (Compare(_con[parent] , _con[child]))
          {
            std::swap(_con[parent],_con[child]);
            child = parent;
            parent = (child-1)/2;
          }
          else 
          {
            break;
          }
        }
      }
    private:
      Container _con;
  };
}
