#ifndef CAR_H_
#define CAR_H_

#include "Transport.h"

class Car : public Transport{
private:
    std::string make, model, engineSize, color, transmissionType;
public:
    std::string getMake();
    std::string getModel();
    std::string getEngineSize();
    std::string getColor();
    std::string getTransmissionType();

    void setMake(std::string);
    void setModel(std::string);
    void setEngineSize(std::string);
    void setColor(std::string);
    void setTransmissionType(std::string);

    explicit Car(std::string,std::string,std::string,std::string,std::string);
    explicit Car();
    Car(const Car& another);
    virtual ~Car();

    std::ostream &operator<<(std::ostream& os) override;
    std::istream &operator>>(std::istream& is) override;
    
};

#endif