#include "Application.h"
#include "Secondary.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	Application obj;
	obj.build_Tree();
	return obj.exec();
}