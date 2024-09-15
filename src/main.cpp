#include "Car.h"
#include <fstream>

int main(){
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
    return 0;
}