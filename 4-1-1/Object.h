#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Object
{
private:
	string name;
	Object* parent;
	vector<Object*> children;
public:
	Object(Object*, string = "root");
	void set_parent(Object*);
	Object* get_parent();
	void set_name(string);
	string get_name();
	void print();
	~Object();
};
#endif