#include "Garage.h"

Garage::Garage(int number)
{
    
    arr = new Transport*[number];
    size = 0;
    real_size = number;
}

Garage::Garage()
{
    arr = new Transport*[10];
    size = 0;
    real_size = 10;
}
Garage::Garage(const Garage& another) 
{
    for( int i = 0; i< size;i++) delete arr[i];
    arr = new Transport*[another.real_size];
    size = another.size;
    real_size = another.real_size;
    for( int i = 0; i< size;i++) arr[i] = another.arr[i];
}

Garage::~Garage()
{
    if(isEmpty()){

    }else{
    for( int i = 0; i< size;i++) delete arr[i];
    delete[] arr;
    }
}

void Garage::add(Transport *a)
{   
    if(size<=real_size){
        arr[size] = a;
        size++;
    }else{
        Transport** cpy_arr = new Transport*[size];
        for(int i = 0; i<size;i++) cpy_arr[i] = arr[i];
        delete[] arr;
        arr = new Transport*[real_size*2];
        real_size*=2;
        for(int i = 0; i<size;i++) arr[i] = cpy_arr[i];
        delete[] cpy_arr;
        
        arr[size] = a;
        size++;
    }

}

void Garage::remove(int index)
{
    delete arr[index];
    Transport** cpy_arr= new Transport*[size];
    for(int i = index+1; i<size;i++) cpy_arr[i] = arr[i];
    size--;
    for(int i = index;i<size;i++) arr[i] = cpy_arr[i];
    delete[] cpy_arr;

}

bool Garage::isEmpty() const{
    return size == 0;
}

int Garage::length(){
    return size;
}

void Garage::clear(){
    for( int i = 0; i< size;i++) delete arr[i];
    delete[] arr;
}

Transport *Garage::operator[](unsigned index)
{
    if(index>=size) throw "SUKA POSHEL NAHUI BLYAT";
    else return arr[index];
}

std::ostream &Garage::operator<<(std::ostream& os)
{
    for(int i = 0; i<size;i++) arr[i]->operator<<(os);
    return os;
}

