#include "Application.h"
#include "Secondary.h"

using namespace std;

void Application::build_Tree()
{
	Object* curr_parent, * curr_child(NULL);
	string parent_name, child_name;
	cin >> parent_name;
	set_name(parent_name);
	curr_parent = this;
	cin >> parent_name >> child_name;
	while (true)
	{
		if (parent_name == child_name) return;
		if (parent_name != curr_parent->get_name())
		{
			if (parent_name != curr_parent->get_name())
			{
				curr_parent = curr_child;
			}
			else
				continue;
		}
		curr_child = new Secondary(curr_parent, child_name);
		cin >> parent_name >> child_name;
	}
}

Application::Application(Object* parent) : Object(parent) {}

int Application::exec()
{
	print();
	return 0;
}