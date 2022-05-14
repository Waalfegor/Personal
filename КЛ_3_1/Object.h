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

	////////////////////////////////////////////////////////// Egorep

	int status;

protected:

	std::vector<Object*> children;
	/////////////////////////////////////////////////////////


public:
	
	Object(Object*, string = "root");
	Object(Object*, string name, int status); // egorep

	void set_parent(Object*);
	Object* get_parent();
	void set_name(string);
	string get_name();
	void print();
	
	///////////////////////////////////
	void set_status(int status);
	void print_status_tree();
	void add_child(Object* h);
	Object* get_by_name(std::string name);
	//////////////////////////////////

	~Object();

};
#endif