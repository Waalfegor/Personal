#include "Object.h"

using namespace std;

Object::Object(Object* parent, string name)
{
	this->parent = NULL;
	this->name = "root";
	set_parent(parent);
	set_name(name);
}

void Object::set_parent(Object* p_parent)
{
	if (parent)
	{
		for (int i = 0; i < parent->children.size(); i++)
		{
			if (parent->children[i] == this)
				parent->children.erase(children.begin() + i);
		}
	}
	parent = p_parent;
	if (parent)
		parent->children.push_back(this);
}

Object* Object::get_parent()
{
	return this->parent;
}

void Object::set_name(string name)
{
	this->name = name;
}

string Object::get_name()
{
	return name;
}

void Object::print()
{
	if (!parent) cout << get_name();
	vector<Object*>::iterator children_iterator;
	if (children.empty()) return;
	cout << endl << name;
	children_iterator = children.begin();
	while (children_iterator != children.end())
	{
		cout << " " << (*children_iterator)->get_name();
		children_iterator++;
	}
	children_iterator--;
	(*children_iterator)->print();
}

Object::~Object()
{
	for (int i = 0; i < children.size(); i++)
	{
		delete children[i];
	}
}
