#include "Garage.h"

Garage::Garage(unsigned number)
{
    if(number == 0) throw std::invalid_argument("Recieved 0 argument!");
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
    unsigned i;
    for(i=0;i<size;i++) delete arr[i];

    arr = new Transport*[another.real_size];
    size = another.size;
    real_size = another.real_size;

    for(i=0;i<size;i++) arr[i] = another.arr[i];
}

Garage::~Garage()
{
    if(!isEmpty()) for(unsigned i=0;i<size;i++) delete arr[i];
    if( real_size != 0) delete[] arr;
}

void Garage::add(Transport *a)
{   
    if(size<real_size){
        arr[size] = a;
        size++;
    }else{
        Transport** cpy_arr = new Transport*[size>0?size:10];
        for(int i = 0; i<size;i++) cpy_arr[i] = arr[i];
        delete[] arr;
        arr = new Transport*[real_size>0?real_size*2:10];
        real_size>0?real_size=real_size*2:real_size=10;
        for(int i = 0; i<size;i++) arr[i] = cpy_arr[i];
        delete[] cpy_arr;
        
        arr[size] = a;
        size++;
    }

}

void Garage::remove(unsigned index){
    if(index>=size) throw std::out_of_range("Index out of range!");

    delete arr[index];

    Transport** cpy_arr= new Transport*[size];
    for(int i = index+1; i<size;i++) cpy_arr[i-1] = arr[i];

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
    if(isEmpty()) return;
    for(int i = 0; i< size;i++) delete arr[i];
    delete[] arr;
    size = 0;
    real_size = 10;
    arr = new Transport*[10];
}

Transport *Garage::operator[](unsigned index)
{
    if(index>=size) throw std::out_of_range("Index out of range!");
    else return arr[index];
}

std::ostream &Garage::operator<<(std::ostream& os)
{   
    os<<size<<"\n";
    if(isEmpty()) os<<"Garage_is_empty!\n";
    for(int i = 0; i<size;i++) arr[i]->operator<<(os);
    return os;
}

std::istream &Garage::operator>>(std::istream& is)
{   
    int inp;
    std::string type;
    is>>inp;
    for(int i=0;i<inp;i++){
        is>>type;
        if(type == "Car"){
            Transport* element = new Car;
            element->operator>>(is);
            add(element);
        } else if(type == "Bike"){
            Transport* element = new Bike;
            element->operator>>(is);
            add(element);
        } else{
            Transport* element = new Bus;
            element->operator>>(is);
            add(element);
        }
    }
    return is;
}