#pragma once

#include <string>
#include "observer.h"

class Subscriber : public Observer
{
public:
    ~Subscriber();
    Subscriber(std::string name);

protected:
    void update(const char *subject_name, const char *message);

private:
    std::string m_name;
};
