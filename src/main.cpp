#include "main.h"

int main(){
    ifstream is;
    ofstream os;
    string fileName = "../data.txt";
    Garage garage;
    
    system(CLEAR);
    int inp;
    do{
        cout<<"1. Print garage\n";
        cout<<"2. Clear garage\n";
        cout<<"3. Work with auto by index\n";
        cout<<"4. Add new auto\n";
        cout<<"5. Write to file\n";
        cout<<"6. Read from file\n";
        cout<<"7. End\n";

        cin>>inp;
        system(CLEAR);

        switch(inp){
            case PRINT_GARAGE:
                cout<<"Number of elements in garage: "<<garage.length()<<"\n";
                garage.operator<<(cout);
            break;
            case CLEAR_GARAGE:
                garage.clear();
                cout<<"Garage has been cleared.\n";
            break;
            case SHOW_GARAGE_ELEMENT:
                cout<<"Enter index of element: ";
                {
                    int inpd;
                    int inpda;
                    Car* element;
                    cin>>inpd;
                    try{
                        element = static_cast<Car*>(garage[inpd]);
                    }catch (const out_of_range exc){
                        cout<<"Incorrect index!\n";
                        break;
                    };
                    do{
                        element->operator<<(cout);
                        cout<<"1. Change 1st pos\n";
                        cout<<"2. Change 2st pos\n";
                        cout<<"3. Change 3st pos\n";
                        cout<<"4. Change 4st pos\n";
                        cout<<"5. Change 5st pos\n";
                        cout<<"6. Delete\n";
                        cout<<"7. Add copy to garage\n";
                        cout<<"8. Back\n";

                        
                        string buf;
                        cin>>inpda;
                        system(CLEAR);

                        switch(inpda){
                            case CHANGE_1:
                                cout<<"Enter new information: ";
                                cin>>buf;
                                element->setMake(buf);
                            break;
                            case CHANGE_2:
                                cout<<"Enter new information: ";
                                cin>>buf;
                                element->setModel(buf);
                            break;
                            case CHANGE_3:
                                cout<<"Enter new information: ";
                                cin>>buf;
                                element->setEngineSize(buf);
                            break;
                            case CHANGE_4:
                                cout<<"Enter new information: ";
                                cin>>buf;
                                element->setColor(buf);
                            break;
                            case CHANGE_5:
                                cout<<"Enter new information: ";
                                cin>>buf;
                                element->setTransmissionType(buf);
                            break;
                            case DELETE_IT:
                                garage.remove(inpd);
                                cout<<"Elenent deleted.\n";
                                inpda = BACK;
                            break;
                            case ADD_COPY:
                                garage.add(new Car{*static_cast<Car*>(garage[inpd])});
                                cout<<"Copy added.\n";
                            break;
                            case BACK:
                            break;
                            default:
                                cout<<"Enter existing command!\n";
                            break;
                        };
                    }while(inpda != BACK);
                }
            break;
            case ADD_ELEMENT_TO_GARAGE:
                {   
                    Transport* newElement;
                    int inpd;
                    string buf1,buf2,buf3,buf4,buf5;
                    

                    cout<<"There are 3 types:\n";
                    cout<<"1. Car\n";
                    cout<<"2. Bike\n";
                    cout<<"3. Bus\n";
                    cout<<"Enter type of element: ";

                    cin>>inpd;


                    switch (inpd)
                    {
                    case CAR:
                        cout<<"Enter Make: \n";
                        cin>>buf1;
                        cout<<"Enter Model: \n";
                        cin>>buf2;
                        cout<<"Enter Engine Size: \n";
                        cin>>buf3;
                        cout<<"Enter Color: \n";
                        cin>>buf4;
                        cout<<"Enter transmission Type: \n";
                        cin>>buf5;
                        newElement = new Car{buf1,buf2,buf3,buf4,buf5};
                        garage.add(newElement);
                    break;
                    case BIKE:
                        cout<<"Enter Make: \n";
                        cin>>buf1;
                        cout<<"Enter Model: \n";
                        cin>>buf2;
                        cout<<"Enter Engine Size: \n";
                        cin>>buf3;
                        cout<<"Enter Power: \n";
                        cin>>buf4;
                        cout<<"Enter Terrain Type: \n";
                        cin>>buf5;
                        newElement = new Bike{buf1,buf2,buf3,buf4,buf5};
                        garage.add(newElement);
                    break;
                    case BUS:
                        cout<<"Enter Make: \n";
                        cin>>buf1;
                        cout<<"Enter Model: \n";
                        cin>>buf2;
                        cout<<"Enter Sit places: \n";
                        cin>>buf3;
                        cout<<"Enter All places: \n";
                        cin>>buf4;
                        cout<<"Enter Final point: \n";
                        cin>>buf5;
                        newElement = new Bus{buf1,buf2,buf3,buf4,buf5};
                        garage.add(newElement);
                    break;        
                    default:
                        cout<<"Enter existing command!\n";
                    break;
                    }
                    
                }
                cout<<"Element added.\n";

            break;
            case WRITE_TO_FILE:
            {
                os.open(fileName);
                garage.operator<<(os);
                os.close();
                cout<<"Garage is written to "<<fileName<<endl;
            }
            break;
            case READ_FROM_FILE:
            {
                is.open(fileName);
                garage.operator>>(is);
                is.close();
                cout<<"Garage has been created by reading from file "<<fileName<<endl;
            }
            break;
            case END:
            break;
            default:
                cout<<"Enter existing command!\n";
            break;
        }
    }while(inp != END);


    return 0;
}
