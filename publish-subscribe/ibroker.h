#pragma once

enum BrokerErrorCode
{
    OK,

    TOPIC_ALREADY_EXISTS,
    TOPIC_NOT_EXISTS,

    CALLBACK_ALREADY_REGISTERED,
    CALLBACK_NOT_FOUND,
};

class IBroker
{

public:
    ~IBroker() = default;
    virtual BrokerErrorCode create_topic(const char *topic_name) = 0;
    virtual BrokerErrorCode delete_topic(const char *topic_name) = 0;
    virtual BrokerErrorCode publish(const char *topic_name, const message *msg) = 0;
    virtual BrokerErrorCode subscribe(const char *topic_name, void *callback) = 0;
    virtual BrokerErrorCode desubscribe(const char *topic_name, void *callback) = 0;
};
