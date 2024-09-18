#ifndef MAIN_H_
#define MAIN_H_

#ifdef WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif
#include "Garage.h"
#include <fstream>

enum garageCommands{
    PRINT_GARAGE = 1,
    CLEAR_GARAGE,
    SHOW_GARAGE_ELEMENT,
    ADD_ELEMENT_TO_GARAGE,
    WRITE_TO_FILE,
    READ_FROM_FILE,
    END
};

enum existingElementShow{
    CHANGE_1 = 1,
    CHANGE_2,
    CHANGE_3,
    CHANGE_4,
    CHANGE_5,
    DELETE_IT,
    ADD_COPY,
    BACK
};

enum addNewElement{
    ARG_1 = 1,
    ARG_2,
    ARG_3,
    ARG_4,
    ARG_5
};

enum autoType{
    CAR = 1,
    BIKE,
    BUS
};

using namespace std;


#endif