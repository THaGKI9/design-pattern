#include "subject.h"

Subject::~Subject()
{
    while (!this->m_observers.empty())
    {
        // (*this->m_observers.end())->update(this->m_name, static_cast<const char *>("Subject is ending!"));
        this->m_observers.pop_back();
    }
}

Subject::Subject(const char *name)
{
    this->m_name = name;
}

const char *Subject::name()
{
    return this->m_name;
}

void Subject::attach(Observer *o)
{
    this->m_observers.push_back(o);
}

void Subject::detach(Observer *o)
{
    o->update(this->m_name, "You have been detached");
    this->m_observers.remove(o);
}

void Subject::notify(const char *message)
{
    for (auto i = this->m_observers.begin(); i != this->m_observers.end(); i++)
    {
        (*i)->update(this->m_name, message);
    }
}
