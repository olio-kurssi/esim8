#include "student.h"

Student::Student()
{

}

string Student::getGroupName() const
{
    return groupName;
}

void Student::setGroupName(const string &newGroupName)
{
    groupName = newGroupName;
}

void Student::implementMe()
{
    cout<<"Student luokan on toteutettava metodi implementMe\n";
}
