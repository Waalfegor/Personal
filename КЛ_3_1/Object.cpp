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
	if (parent) parent->children.push_back(this);
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

void Object::print_child()
{
	if (!this->children.size()) return;        

	for (int i = 0; i < this->children.size(); ++i)
	{
		if(i >= 1) cout << "\n";
		cout << "        " << this->children[i]->get_name();
	}
}

void Object::print()
{
	if (!this->children.size()) return;

	cout << this->name;//  Выводим имя данной вершины         

	for (int i = 0; i < this->children.size(); ++i) //  Выводим имена детей
	{
		cout << "\n";
		cout << "    " << this->children[i]->get_name() << "\n";
		this->children[i]->print_child();
	}
}

void Object::set_status(int status)
{
	this->status = status;
}

void Object::print_status_tree()
{
	cout << "The object " << this->name;
	if (this->status != 0) cout << " is ready"; //  Ïðîâåðÿåì, ãîòîâ ëè îáúåêò, è âûâîäèì ñîîòâåòñòâóþùóþ èíôîðìàöèþ         
	else cout << " is not ready";
	if (this->children.size()) cout << "\n";
	for (int i = 0; i < this->children.size(); ++i) //  Âûâîäèì èìåíà äåòåé, ðàçäëåÿÿ èõ äâóìÿ ïðîáåëàìè         
	{
		this->children[i]->print_status_tree();
		if (i != this->children.size() - 1) cout << "\n";
	}
	return;
}

void Object::add_child(Object* h)
{
	this->children.push_back(h);
	return;
}

Object* Object::get_by_name(std::string name)
{
	if (this->name == name)
	{
		return this;
	}
	for (int i = 0; i < this->children.size(); ++i)
	{
		Object* b = children[i]->get_by_name(name);
		if (b != NULL)
			return b;
	}
	return nullptr;
}

Object::~Object()
{
	for (int i = 0; i < children.size(); i++)
	{
		delete children[i];
	}
}
