#include"Subject.h"

void Subject::attach(Observer* obs)
{
	m_views.push_back(obs);
}

void Subject::set_val(int value)
{
	m_value = value;
	notify();
}

void Subject::notify()
{
	for (int i = 0; i < m_views.size(); ++i)
	{
		m_views.at(i)->update(this, m_value);
	}
}

