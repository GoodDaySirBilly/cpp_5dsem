#include "Bus.h"

std::string Bus::getMake(){
    return make;
}

std::string Bus::getModel(){
    return model;
}

std::string Bus::getSitPlaces(){
    return sitPlaces;
}

std::string Bus::getAllPlaces(){
    return allPlaces;
}

std::string Bus::getFinalPoint(){
    return finalPoint;
}

void Bus::setMake(std::string make){
    this->make = make;
}

void Bus::setModel(std::string model){
    this->model = model;
}

void Bus::setSitPlaces(std::string sitPlaces){
    this->sitPlaces = sitPlaces;
}

void Bus::setAllPlaces(std::string allPlaces){
    this->allPlaces = allPlaces;
}

void Bus::setFinalPoint(std::string finalPoint){
    this->finalPoint = finalPoint;
}

Bus::Bus(std::string make,std::string model,
        std::string sitPlaces,std::string allPlaces,
        std::string finalPoint){
    this->make = make;
    this->model = model;
    this->sitPlaces = sitPlaces;
    this->allPlaces = allPlaces;
    this->finalPoint = finalPoint;
    std::cout<<"Created Bus by full constructor:\n";
    this->operator<<(std::cout);
    
}

Bus::Bus(std::string word){
    make=model=sitPlaces=allPlaces=finalPoint=word;
    std::cout<<"Crated Bus by one-word constructor:\n";
    this->operator<<(std::cout);
}

Bus::Bus(){   
    this->make = "None";
    this->model = "None";
    this->sitPlaces = "None";
    this->allPlaces = "None";
    this->finalPoint = "None";
    std::cout<<"Created Bus by empty constructor:\n";
    this->operator<<(std::cout);
}

Bus::Bus(const Bus &another){
    this->make = another.make;
    this->model = another.model;
    this->sitPlaces = another.sitPlaces;
    this->allPlaces = another.allPlaces;
    this->finalPoint = another.finalPoint;
    std::cout<<"Created Bus by coping constructor:\n";
    this->operator<<(std::cout);
}

Bus::~Bus(){
    std::cout<<"Deleted Bus by destructor:\n";
    this->operator<<(std::cout);
}

std::ostream &Bus::operator<<(std::ostream &os){
    os<<"Bus                "<<"\n";
    os<<"Make:              "<<make<<"\n";
    os<<"Model:             "<<model<<"\n";
    os<<"Sit_places:        "<<sitPlaces<<"\n";
    os<<"All_places:        "<<allPlaces<<"\n";
    os<<"Final_point:       "<<finalPoint<<"\n";
    return os;
}

std::istream &Bus::operator>>(std::istream &is){
    std::string s1,s2,s3,s4,s5,buf;
    is>>buf>>s1;
    is>>buf>>s2;
    is>>buf>>s3;
    is>>buf>>s4;
    is>>buf>>s5;
    setMake(s1);
    setModel(s2);
    setSitPlaces(s3);
    setAllPlaces(s4);
    setFinalPoint(s5);
    return is;
}
