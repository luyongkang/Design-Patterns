#include<iostream>
#include<vector>
using namespace std;

class Component
{
public:
	Component(int val):value(val){}
	virtual void add(Component*){}//不用写实现因为可能有些子类中不需要这个函数，直接继承调用函数不会有改变
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
//组合模式，可以用于文件系统比如，文件夹为composite类，文件为primitive类