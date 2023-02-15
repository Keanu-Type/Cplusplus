#include <iostream>


int main(){
    int num1;
    int num2;
    int num3;
    int num4;
/*OUTPUT*/
    std::cout<<"Hello world"<<std::endl; //with newline
    std::cout<<"hello"; //No nextline
    std::cout<<"Hello\nWorld\nOut\nThere\n"; //NEXTLINE without using endl;

/*INPUT*/
    std::cout<<"Enter Number"<<std::endl;
    std::cin>>num1; //input
    std::cout<<"Enter Second Number:"<<std::endl;
    std::cin>>num2;
    std::cout<<"Number is: "<<num1<<" and "<<num2<<std::endl;

    std::cout<<"Enter 2 number at same time"<<std::endl;
    std::cin>>num3>>num4; //ENTERING 2 NUMBER AT SAME TIME = you can enter 2 number at same time and separated by space
    std::cout<<"Numbers are: "<<num3<<" and "<<num4<<std::endl;


    return 0;
}