#ifndef _QUEUE_
#define _QUEUE_

#include"deque.h"

template<typename T>
class queue
{
public:
	bool empty() const { return c.empty(); }
	size_t size() const { return c.size(); }
	reference front() { return c.front(); }
	reference back() { return c.back(); }	
	void push(const T& t) { c.push_back(t); }
	void pop() { c.pop_front(); }
protected:
	deque<T> c;//底层容器
};

//queue为单向队列，deque为双向队列，queue实际是阉割后的deque，所以queue就是deque的一个适配器，只挑选出需要的功能
//adapter模式使用的是复合。
#endif