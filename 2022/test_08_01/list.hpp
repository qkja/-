#include <iostream>
namespace bite
{

  // List的节点类

  template<class T>

  struct ListNode

  {

    ListNode(const T& val = T());

    ListNode<T>* _pPre;

    ListNode<T>* _pNext;

    T _val;

  };



  //List的迭代器类

  template<class T, class Ref, class Ptr>

  class ListIterator
  {

    typedef ListNode<T>* PNode;

    typedef ListIterator<T, Ref, Ptr> Self;

  public:

    ListIterator(PNode pNode = nullptr)；

    ListIterator(const Self& l)；

    T& operator*()；

    T* operator->()；

    Self& operator++()；

    Self operator++(int)；

    Self& operator--();

    Self& operator--(int);

    bool operator!=(const Self& l)
	{
		return _pNode != t._pNode;
	}

    bool operator==(const Self& l)
	{
		 return !(*this != t);
	}
  private:

    PNode _pNode; // 这是一个指针

  };



  //list类

  template<class T>

  class list

  {

    typedef ListNode<T> Node;

    typedef Node* PNode;

  public:

    typedef ListIterator<T, T&, T*> iterator;

    typedef ListIterator<T, const T&, const T&> const_iterator;

  public:

    ///////////////////////////////////////////////////////////////

    // List的构造

    list();

    list(int n, const T& value = T());

    template <class Iterator>

    list(Iterator first, Iterator last);

    list(const list<T>& l);

    list<T>& operator=(const list<T> l);

    ~list();



    ///////////////////////////////////////////////////////////////

    // List Iterator

    iterator begin();

    iterator end();

    const_iterator begin();

    const_iterator end();



    ///////////////////////////////////////////////////////////////

    // List Capacity

    size_t size()const;

    bool empty()const;



    ////////////////////////////////////////////////////////////

    // List Access

    T& front();

    const T& front()const;

    T& back();

    const T& back()const;



    ////////////////////////////////////////////////////////////

    // List Modify

    void push_back(const T& val){insert(end(), val);}

    void pop_back(){erase(--end());}

    void push_front(const T& val){insert(begin(), val);}

    void pop_front(){erase(begin());}

    // 在pos位置前插入值为val的节点

    iterator insert(iterator pos, const T& val)    
    {                                                                                                           
      // 记录 迭代器 对应的 节点指针    
      Node* ppos = pos._node;    
      Node* cur = new Node(val);    
    
      // 记录 前一个 节点    
      Node* prev = ppos->_prev;    
    
      cur->_next = ppos;    
      ppos->_prev = cur;    
      cur->_prev = prev;    
      prev->_next = cur;    
    
      return cur;    
    } 

    // 删除pos位置的节点，返回该节点的下一个位置

	iterator erase(iterator pos)                                                           
	{                                                                                      
		Node* ppos = pos._node;                                                              
		// 不能 删哨兵位                                                                     
		assert(pos != _head);                                                                
		Node* prev = ppos->_prev;                                                            
		Node* next = ppos->_next;                                                            

		prev->_next = next;                                                                                       
		next->_prev = prev;
		delete ppos;
		return iterator(next);
	}

    void clear();

    void swap(List<T>& l);

  private:

    void CreateHead();

    PNode _pHead;

  };

};

namespace bit
{



  //  迭代器
  //  T  T&  T*
  template<class T,class Ref,class Ptr>
  struct _list_iterator 
  {
    typedef _list_node<T> Node;
    typedef _list_iterator<T,Ref,Ptr> self;
    Node* _node;

  

    Ptr operator->()
    {
      return &_node->_data;
    }

    Ref operator*()
    {
      return _node -> _data;
    }

   

  };

  template<class T> //  这个 就是一个模板
  class list
  {
  public:
    typedef _list_node<T> Node;
    typedef _list_iterator<T,T&,T*> iterator;
    typedef _list_iterator<T,const T& ,const T*> const_iterator;
    //  要有 构造函数  作为 一个  标记位
  
  

    // 在指定的位置插入数据
    
    // 尾插

    // 迭代器
   
    const_iterator begin() const 
    {
      return const_iterator(_head->_next);
    }

    const_iterator end() const 
    {
      return const_iterator(_head);
    }

