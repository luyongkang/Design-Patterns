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
	deque<T> c;//�ײ�����
};

//queueΪ������У�dequeΪ˫����У�queueʵ�����˸���deque������queue����deque��һ����������ֻ��ѡ����Ҫ�Ĺ���
//adapterģʽʹ�õ��Ǹ��ϡ�
#endif