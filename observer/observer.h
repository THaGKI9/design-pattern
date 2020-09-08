#pragma once

class Observer
{
public:
    ~Observer() = default;
    Observer() = default;
    virtual void update(const char *subject_name, const char *message);

protected:
};
