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

//�۲���ģʽ��˼�������һ������subject���кܶ�observer��չ�֣����Կ��������ܶ�observer�����������Բ�ͬ����ʽչ������
#endif
