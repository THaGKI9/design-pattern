#pragma once

#include <broker.h>
#include "message.h"

class Publisher
{
public:
    void register_broker(IBroker *broker, const char *topic_name);
    void publish_message(const message *msg);
};
