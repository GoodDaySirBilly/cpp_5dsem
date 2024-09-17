#include "Bus.h"

std::string Bus::getMake(){
    return make;
}

std::string Bus::getModel(){
    return model;
}

std::string Bus::getSitPlaces(){
    return sit_places;
}

std::string Bus::getAllPlaces(){
    return all_places;
}

std::string Bus::getFinalPoint(){
    return final_point;
}

void Bus::setMake(std::string make){
    this->make = make;
}

void Bus::setModel(std::string model){
    this->model = model;
}

void Bus::setSitPlaces(std::string sit_places){
    this->sit_places = sit_places;
}

void Bus::setAllPlaces(std::string all_places){
    this->all_places = all_places;
}

void Bus::setFinalPoint(std::string final_point){
    this->final_point = final_point;
}

Bus::Bus(std::string make,std::string model,
        std::string sit_places,std::string all_places,
        std::string final_point){
    this->make = make;
    this->model = model;
    this->sit_places = sit_places;
    this->all_places = all_places;
    this->final_point = final_point;
    std::cout<<"Created Bus by full constructor:\n";
    this->operator<<(std::cout);
    
}

Bus::Bus(std::string word){
    make=model=sit_places=all_places=final_point=word;
    std::cout<<"Crated Bus by one-word constructor:\n";
    this->operator<<(std::cout);
}

Bus::Bus(){   
    this->make = "None";
    this->model = "None";
    this->sit_places = "None";
    this->all_places = "None";
    this->final_point = "None";
    std::cout<<"Created Bus by empty constructor:\n";
    this->operator<<(std::cout);
}

Bus::Bus(const Bus &another){
    this->make = another.make;
    this->model = another.model;
    this->sit_places = another.sit_places;
    this->all_places = another.all_places;
    this->final_point = another.final_point;
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
    os<<"Engine_size:       "<<sit_places<<"\n";
    os<<"All_places:        "<<all_places<<"\n";
    os<<"Transmission_type: "<<final_point<<"\n";
    return os;
}

std::istream &Bus::operator>>(std::istream &is){
    std::string auto_type,s1,s2,s3,s4,s5,buf;
    is>>auto_type;
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
