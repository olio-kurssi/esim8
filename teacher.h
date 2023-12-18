#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>

using namespace std;
#include "iperson.h"
#include "person.h"



class Teacher : public Person, public IPerson
{
public:
    Teacher();
    string getDepartment() const;
    void setDepartment(const string &newDepartment);
    void implementMe();

private:
    string department;
};

#endif // TEACHER_H
