#ifndef GARAGE_H_
#define GARAGE_H_

#include "Transport.h"

class Garage{
    
private:
    Transport** arr;
    unsigned size, real_size;
public:
    explicit Garage();
    explicit Garage(unsigned);
    Garage(const Garage&);
    virtual ~Garage();

    
    void add(Transport*);
    void remove(unsigned);
    bool isEmpty() const;
    int length();
    void clear();

    Transport* operator[](unsigned index);
    std::ostream& operator<<(std::ostream&);

};

#endif