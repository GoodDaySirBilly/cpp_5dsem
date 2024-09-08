#ifndef GARAGE_H_
#define GARAGE_H_

#include "Transport.h"

class Garage{
    
private:
    Transport** arr;
    int size, real_size;
public:
    explicit Garage();
    explicit Garage(int);
    Garage(const Garage&);
    ~Garage();

    void print();
    void add(Transport*);
    void remove(int);
    int pop(int index = 0);
    bool isEmpty() const;
    int length();
    void clear();
    





};

#endif