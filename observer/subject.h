#pragma once

#include <list>
#include "observer.h"

class Subject
{
public:
    ~Subject();
    Subject(const char *name);
    void attach(Observer *o);
    void detach(Observer *o);
    void notify(const char *message);
    virtual const char *name();

protected:
    std::list<Observer *> m_observers;
    const char *m_name;
};
