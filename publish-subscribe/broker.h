#pragma once

#include "ibroker.h"
#include "message.h"

class Broker : public IBroker
{
public:
    Broker() = default;
    ~Broker() = default;
    virtual BrokerErrorCode create_topic(const char *topic_name) = 0;
    virtual BrokerErrorCode delete_topic(const char *topic_name) = 0;
    virtual BrokerErrorCode publish(const char *topic_name, const message *message) = 0;
    virtual BrokerErrorCode subscribe(const char *topic_name, void *callback) = 0;
    virtual BrokerErrorCode desubscribe(const char *topic_name, void *callback) = 0;
};
