#include "Bike.h"

std::string Bike::getMake(){
    return make;
}

std::string Bike::getModel(){
    return model;
}

std::string Bike::getEngineSize(){
    return engineSize;
}

std::string Bike::getPower(){
    return power;
}

std::string Bike::getTerrainType(){
    return terrainType;
}

void Bike::setMake(std::string make){
    this->make = make;
}

void Bike::setModel(std::string model){
    this->model = model;
}

void Bike::setEngineSize(std::string engineSize){
    this->engineSize = engineSize;
}

void Bike::setPower(std::string Power){
    this->power = Power;
}

void Bike::setTerrainType(std::string terrainType){
    this->terrainType = terrainType;
}

Bike::Bike(std::string make,std::string model,
        std::string engineSize,std::string Power,
        std::string terrainType){
    this->make = make;
    this->model = model;
    this->engineSize = engineSize;
    this->power = Power;
    this->terrainType = terrainType;
    std::cout<<"Created Bike by full constructor:\n";
    this->operator<<(std::cout);
    
}

Bike::Bike(std::string word){
    make=model=engineSize=power=terrainType=word;
    std::cout<<"Crated Bike by one-word constructor:\n";
    this->operator<<(std::cout);
}

Bike::Bike(){   
    this->make = "None";
    this->model = "None";
    this->engineSize = "None";
    this->power = "None";
    this->terrainType = "None";
    std::cout<<"Created Bike by empty constructor:\n";
    this->operator<<(std::cout);
}

Bike::Bike(const Bike &another){
    this->make = another.make;
    this->model = another.model;
    this->engineSize = another.engineSize;
    this->power = another.power;
    this->terrainType = another.terrainType;
    std::cout<<"Created Bike by coping constructor:\n";
    this->operator<<(std::cout);
}

Bike::~Bike(){
    std::cout<<"Deleted Bike by destructor:\n";
    this->operator<<(std::cout);
}

std::ostream &Bike::operator<<(std::ostream &os){
    os<<"Bike                "<<"\n";
    os<<"Make:              "<<make<<"\n";
    os<<"Model:             "<<model<<"\n";
    os<<"Engine_size:       "<<engineSize<<"\n";
    os<<"Power:             "<<power<<"\n";
    os<<"Transmission_type: "<<terrainType<<"\n";
    return os;
}

std::istream &Bike::operator>>(std::istream &is){
    std::string s1,s2,s3,s4,s5,buf;
    is>>buf>>s1;
    is>>buf>>s2;
    is>>buf>>s3;
    is>>buf>>s4;
    is>>buf>>s5;
    setMake(s1);
    setModel(s2);
    setEngineSize(s3);
    setPower(s4);
    setTerrainType(s5);
    return is;
}
