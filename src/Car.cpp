#include "Car.h"

std::string Car::getMake(){
    return make;
}

std::string Car::getModel(){
    return model;
}

std::string Car::getEngineSize(){
    return engineSize;
}

std::string Car::getColor(){
    return color;
}

std::string Car::getTransmissionType(){
    return transmissionType;
}

void Car::setMake(std::string make){
    this->make = make;
}

void Car::setModel(std::string model){
    this->model = model;
}

void Car::setEngineSize(std::string engineSize){
    this->engineSize = engineSize;
}

void Car::setColor(std::string color){
    this->color = color;
}

void Car::setTransmissionType(std::string transmissionType){
    this->transmissionType = transmissionType;
}

Car::Car(std::string make,std::string model,
        std::string engineSize,std::string color,
        std::string transmissionType){
    this->make = make;
    this->model = model;
    this->engineSize = engineSize;
    this->color = color;
    this->transmissionType = transmissionType;
    std::cout<<"Created car by full constructor:\n";
    this->operator<<(std::cout);
    
}

Car::Car(){   
    this->make = "None";
    this->model = "None";
    this->engineSize = "None";
    this->color = "None";
    this->transmissionType = "None";
    std::cout<<"Created car by empty constructor:\n";
    this->operator<<(std::cout);
}

Car::Car(const Car &another){
    this->make = another.make;
    this->model = another.model;
    this->engineSize = another.engineSize;
    this->color = another.color;
    this->transmissionType = another.transmissionType;
    std::cout<<"Created car by coping constructor:\n";
    this->operator<<(std::cout);
}

Car::~Car(){
    std::cout<<"Deleted car by destructor:\n";
    this->operator<<(std::cout);
}

std::ostream &Car::operator<<(std::ostream &os){
    os<<"Make:              "<<make<<"\n";
    os<<"Model:             "<<model<<"\n";
    os<<"Engine_size:       "<<engineSize<<"\n";
    os<<"Color:             "<<color<<"\n";
    os<<"Transmission_type: "<<transmissionType<<"\n";
    return os;
}

std::istream &Car::operator>>(std::istream &is){
    std::string auto_type,s1,s2,s3,s4,s5,buf;
    is>>auto_type;
    is>>buf>>s1;
    is>>buf>>s2;
    is>>buf>>s3;
    is>>buf>>s4;
    is>>buf>>s5;
    setMake(s1);
    setModel(s2);
    setEngineSize(s3);
    setColor(s4);
    setTransmissionType(s5);
    return is;
}

void Car::info(std::ostream &os){
    this->operator<<(os);
}