#include <iostream>

int main(){

    const int Lroom {35};
    const int Sroom {25};
    const float rate {0.06};
    int Troom;
    int count;
    float total;
    std::cout<<"Hello. enter Large room: ";
    std::cin>>count;
    Troom = count*Lroom;
    std::cout<<"Hello. enter Small room: ";
    std::cin>>count;
    Troom = Troom +(count*Sroom);
    std::cout<< "\nCost: ";
    std::cout<< Troom<<std::endl;
    std::cout<< "Tax: ";
    std::cout<< ((Troom) * rate)<<std::endl;
    std::cout<<"Pay Cost: " << ((Troom))+((Troom) *rate)<<std::endl;

    return 0;
}