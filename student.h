#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

#include "iperson.h"
#include "person.h"



class Student : public Person, public IPerson
{
public:
    Student();
    string getGroupName() const;
    void setGroupName(const string &newGroupName);
    void implementMe();

private:
    string groupName;
};

#endif // STUDENT_H
