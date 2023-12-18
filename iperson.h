#ifndef IPERSON_H
#define IPERSON_H
#include <iostream>

using namespace std;

class IPerson
{
public:
    IPerson();
    virtual ~IPerson();
    virtual void implementMe()=0;
};

#endif // IPERSON_H
