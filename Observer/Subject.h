#ifndef _SUBJECT_
#define _SUBJECT_
#include<vector>
class Observer;

class Subject
{
public:
	void attach(Observer* obs);
	void set_val(int value);
	void notify();
private:
	int m_value;
	std::vector<Observer*> m_views;
};

class Observer
{
public:
	virtual void update(Subject* sub, int value) = 0;
};

//观察者模式的思想就是有一份数据subject，有很多observer来展现，所以可以声明很多observer的派生类来以不同的形式展现数据
#endif
