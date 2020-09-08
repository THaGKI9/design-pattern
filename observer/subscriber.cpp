#include <iostream>
#include <string>
#include "subscriber.h"

Subscriber::~Subscriber()
{
}

Subscriber::Subscriber(std::string name)
{
    this->m_name = name;
}

void Subscriber::update(const char *subject_name, const char *message)
{
    std::cout << "[Subscriber:" << this->m_name << "] "
              << "Get notification from [Subject:" << subject_name << "] with message `"
              << static_cast<const char *>(message)
              << "`"
              << std::endl;
}
