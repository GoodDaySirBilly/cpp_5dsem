#ifndef TRANSPORT_H_
#define TRANSPORT_H_

#include <iostream>

class Transport{
public:
    virtual std::ostream& operator<<(std::ostream &os) = 0;
    virtual std::istream& operator>>(std::istream &is) = 0;
    Transport() = default;
    virtual ~Transport() = default;
};



#endif