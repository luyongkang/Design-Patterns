#ifndef _DEQUE_
#define _DEQUE_

template<typename T>
class deque
{
public:
	bool empty() const 
	{
		//todo
		return false;
	}

	size_t size() const
	{
		//todo
		return 0;
	}
	reference front()	//为什么不加const，因为返回的是指向数据的指针或引用或迭代器，是可以通过其修改数据的所以不加const。
	{
		//todo
		return ...;
	}

	reference back()
	{
		//todo 
		return ...;
	}

	void push_back(T t)
	{
		//todo 
		return;
	}

	void pop_front()
	{
		//todo
		return;
	}

	//..................
private:
	//todo 添加data
};
#endif
