#ifndef BUS_H_
#define BUS_H_

#include "Transport.h"

class Bus : public Transport{
private:
    std::string make, model, sitPlaces, allPlaces, finalPoint;
public:
    std::string getMake();
    std::string getModel();
    std::string getSitPlaces();
    std::string getAllPlaces();
    std::string getFinalPoint();

    void setMake(std::string);
    void setModel(std::string);
    void setSitPlaces(std::string);
    void setAllPlaces(std::string);
    void setFinalPoint(std::string);

    explicit Bus(std::string,std::string,std::string,std::string,std::string);
    explicit Bus(std::string);
    explicit Bus();
    Bus(const Bus& another);
    virtual ~Bus();

    std::ostream &operator<<(std::ostream& os) override;
    std::istream &operator>>(std::istream& is) override;
    
};

#endif