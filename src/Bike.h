#ifndef BIKE_H_
#define BIKE_H_

#include "Transport.h"

class Bike : public Transport{
private:
    std::string make, model, engineSize, power, terrainType;
public:
    std::string getMake();
    std::string getModel();
    std::string getEngineSize();
    std::string getPower();
    std::string getTerrainType();

    void setMake(std::string);
    void setModel(std::string);
    void setEngineSize(std::string);
    void setPower(std::string);
    void setTerrainType(std::string);

    explicit Bike(std::string,std::string,std::string,std::string,std::string);
    explicit Bike(std::string);
    explicit Bike();
    Bike(const Bike& another);
    virtual ~Bike();

    std::ostream &operator<<(std::ostream& os) override;
    std::istream &operator>>(std::istream& is) override;
    
};

#endif