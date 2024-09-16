#include "Car.h"
#include "Garage.h"
#include <fstream>

int main(){
    Garage garage;
    
    garage.add(new Car{"a1","b","c","d","e"});
    garage.add(new Car{"a2","b","c","d","e"});
    garage.add(new Car{"a3","b","c","d","e"});
    garage.operator<<(std::cout);
   

    return 0;
}

/*
    std::ifstream is;
    std::ofstream os;

    os.open("../expml.txt");
    Car car1{"aAA","bBB","cCC","dDD","eEE"};
    
    Car car2{"a","b","c","d","e"};
    car1.operator<<(os);

    os.close();

    is.open("../expml.txt");

    car2.operator>>(is);

    is.close();
*/