#include<iostream>
#include<vector>
using namespace std;

class Component
{
public:
	Component(int val):value(val){}
	virtual void add(Component*){}//����дʵ����Ϊ������Щ�����в���Ҫ���������ֱ�Ӽ̳е��ú��������иı�
private:
	int value;
};

class Primitive:public Component
{
public:
	Primitive(int val):Component(val){}

};

class Composite:public Component
{
public:
	Composite(int val):Component(val){}
	void add(Component* elem) override
	{
		c.push_back(elem);
	}
private:
	vector<Component*> c;
};
//���ģʽ�����������ļ�ϵͳ���磬�ļ���Ϊcomposite�࣬�ļ�Ϊprimitive��