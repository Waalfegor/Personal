#ifndef SECONDARY_H
#define SECONDARY_H
#include "Object.h"
#include "Application.h"
class Secondary : public Object {
public:
    Secondary(Object* parent, string name);
};
#endif