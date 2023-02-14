#include <iostream>
//GLOBAL VARIABLE
int global_age {20}; 
int main(){
    //LOCAL VARIABLE
    int age1; //uninitialize
    int age2=21; //c-like initialization
    int age3(21);//Constructor   (mostly use in Constructor like OOP)
    int age4{21};//c++ v11 intialization


    //INTIGER PRIMITIVE DDATA TYPE 

    signed short int numA;    //Atleast 16bits this is for any positive/negative/0 //declare small number
    signed int numB;           //16bits         //declare small number
    signed long int NumC;      //32bits 
    signed long long int numD; //64bits YOU CAN USE this to declare very large number


    unsigned short int numE;    //Atleast 16bits this unsigned ARE POSITIVE or 0 ONLY!!
    unsigned int numF;          //16bits
    unsigned long int NumH;     //32bits
    unsigned long long int numI; //64bits ex: use to display kilometer distance 000000000000


    //FLOAT
    float dec; //7decimal-8decimal
    double dec2; //15 decimal-18decimal
    long double;  //19decimal digits+

    bool switches; //8bits. true or false
}
