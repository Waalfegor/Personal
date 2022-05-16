#ifndef APPLICATION_H
#define APPLICATION_H

#include "Object.h"

#include "Secondary.h"
#include "Third.h"
#include "Fourth.h"
#include "Fifth.h"
#include "Sixth.h"

class Application : public Object
{

public:

	void build_Tree();
	Application(Object* parent = 0);
	int exec();

};
#endif
