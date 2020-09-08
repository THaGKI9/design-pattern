#include <iostream>

#include "subject.h"
#include "subscriber.h"

int main()
{
    Subject subject_reminder("Reminder");
    Subscriber person1("Person 1");
    Subscriber person2("Person 2");

    subject_reminder.attach(&person1);
    subject_reminder.attach(&person2);

    subject_reminder.notify("hahaha");

    return 0;
}
