#ifndef OBSERVER_H
#define OBSERVER_H

#include "Patient.h"

class Observer
{
public:
    virtual void send(Patient* p) = 0;
};

#endif