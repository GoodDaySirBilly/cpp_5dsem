#ifndef TRANSPORT_H_
#define TRANSPORT_H_

#include <iostream>

class Transport{
public:
    virtual void info(std::ostream &os) = 0;
};



#endif