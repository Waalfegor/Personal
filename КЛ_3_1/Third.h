#ifndef THIRD_H
#define THIRD_H
#include "Object.h"
#include "Application.h"
class Third : public Object {
public:
    Third(Object* parent, string name);
};
#endif