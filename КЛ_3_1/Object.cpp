#include "Object.h"
using namespace std;
Object::Object(Object* parent, string name)
{
	this->parent = NULL;
	this->name = "root";
	set_parent(parent);
	set_name(name);
}

Object::Object(Object*, string name, int status)
{
	this->parent = parent; 
	this->name = name;      
	this->status = status;
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
void Object::print() // изменил
{
	if (!this->children.size()) return;

	cout << this->name;
	for (int i = 0; i < this->children.size(); ++i)
	{
		cout << "\n";// заменить на \n\t
		cout << "\t";
		cout << this->children[i]->get_name();
	}
	bool w = false;
	for (int i = 0; i < this->children.size(); ++i)
	{
		if (this->children[i]->children.size() && !w)
		{
			cout << " ";
			w = true;
		}
		this->children[i]->print();
	}
	return;
}

void Object::set_status(int status)
{
	this->status = status;
}

void Object::print_status_tree()
{
	cout << "The object " << this->name;
	if (this->status != 0) cout << " is ready"; //  Проверяем, готов ли объект, и выводим соответствующую информацию         
	else cout << " is not ready";
	if (this->children.size()) cout << "\n";
	for (int i = 0; i < this->children.size(); ++i) //  Выводим имена детей, раздлеяя их двумя пробелами         
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