#include "Object.h"
#include "Application.h"
#include "Secondary.h"
#include "Third.h"
#include "Fourth.h"
#include "Fifth.h"
#include "Sixth.h"

using namespace std;

Application::Application(Object* parent) : Object(parent) {}

void Application::build_Tree() // заменил на build_tree из app.cpp 
{
    string s1, s2;
    int class_type = 0, status;
    cin >> s1;
    this->set_name(s1);
    while (true)
    {
        cin >> s1;

        if (s1 == "endtree") break;

        cin >> s2 >> class_type;

        Object* b = this->get_by_name(s1);

        if (class_type == 2) b = new Secondary(b, s2);
        else if (class_type == 3) b = new Third(b, s2);
        else if (class_type == 4) b = new Fourth(b, s2);
        else if (class_type == 5) b = new Fifth(b, s2);
        else if (class_type == 6) b = new Sixth(b, s2);
    }
    while (true)
    {
        cin >> s1;

        if (s1 == "endtree") break;

        cin >> status;

        Object* b = this->get_by_name(s1);

        b->set_status(status);
    }
}

int Application::exec()
{
	print();
    cout << "\nThe tree of objects and their readiness\n";
	print_status_tree();
	return 0;
}
