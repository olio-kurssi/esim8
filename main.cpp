#include "student.h"
#include "teacher.h"

#include <iostream>

using namespace std;

int main()
{
    Student *objectStudent = new Student;

    objectStudent->setName("Teppo Opiskelija");
    objectStudent->setBirthYear(2001);
    objectStudent->setGroupName("tvt23spl");
    objectStudent->implementMe();
    cout<<"Opiskelijan tiedot"<<endl;
        cout<<objectStudent->getName()<<endl;
        cout<<objectStudent->getBirthYear()<<endl;
        cout<<objectStudent->getGroupName()<<endl;
        cout<<"*****************************\n";

    Teacher *objectTeacher = new Teacher;
    objectTeacher->setName("Liisa Opettaja");
    objectTeacher->setBirthYear(1978);
    objectTeacher->setDepartment("Tietotekniikka");
    objectTeacher->implementMe();
    cout<<"Opettajan tiedot"<<endl;
        cout<<objectTeacher->getName()<<endl;
        cout<<objectTeacher->getBirthYear()<<endl;
        cout<<objectTeacher->getDepartment()<<endl;
        cout<<"*****************************\n";

    delete objectStudent;
        objectStudent=nullptr;
    delete objectTeacher;
        objectTeacher=nullptr;
    return 0;
}
