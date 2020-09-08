#pragma once

#include "message.h"

class Subscriber
{
public:
    void on_new_message(const char *topic_name, const message *message);
};
