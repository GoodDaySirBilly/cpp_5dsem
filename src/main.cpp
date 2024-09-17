#include "main.h"

int main(){
    Garage garage{3};
    
    garage.add(new Car{"1"});
    garage.add(new Car{"2"});
    garage.add(new Car{"3"});
    garage.add(new Car{"4"});
    garage.operator<<(std::cout);

    std::cout<<"removing------------------\n";

    garage.remove(0);

    std::cout<<"removing------------------\n";


    garage.add(new Car{"5"});
    garage.add(new Car{"6"});
    garage.add(new Car{"7"});
    
    garage.add(new Car{"8"});
    garage[3]->operator<<(std::cout);
    return 0;
}
/*
    pattern of changing values
    Car* s = static_cast<Car*>(garage[0]);
    s->setColor("red");

*/


/*
    pattern of filing

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