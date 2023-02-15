#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

//GLOBAL VARIABLE
int global_age {20}; 
int main(){
    //LOCAL VARIABLE
    int age1; //uninitialize
    int age2=21; //c-like initialization
    int age3(21);//Constructor   (mostly use in Constructor like OOP)
    int age4{21};//c++ v11 intialization

    string Name="Keanu";//using namespace std is required

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
    long double dec3;  //19decimal digits+

    bool switches; //8bits. true or false
    
    //sizeof() - determines the size of variable in the Memory. bits
    //sizeof(age3);
    
    std::cout<< sizeof(char)<<std::endl;
    std::cout<< sizeof(int)<<std::endl;
    std::cout<< sizeof(unsigned short int)<<std::endl;
    std::cout<< sizeof(short)<<std::endl;
    std::cout<< sizeof(long)<<std::endl;
    std::cout<< sizeof(long long)<<std::endl;
    std::cout<< sizeof(float)<<std::endl;
    std::cout<< sizeof(double)<<std::endl;
    std::cout<< sizeof(long double)<<std::endl;
    
    
    /* the climits and cfloats include file contain size and precision information about your implenentation of c++.
        use #include <climits> and #includecfloat
        ex:
        INT_MAX       LONG_MIN      FLT_MIN
        INT_MIN       LONG_MAX      FLT_MAX
    */
   std::cout<<"Maximum values of variables:"<<std::endl;
   std::cout<<"char: "<<CHAR_MAX<<std::endl;
   std::cout<<"int: "<<INT_MAX<<std::endl;
   std::cout<<"short: "<<SHRT_MAX<<std::endl;
   std::cout<<"long: "<<LONG_MAX<<std::endl;
   std::cout<<"long long: "<<LLONG_MAX<<std::endl;
   
    
   std::cout<<"Minimum values of variables:"<<std::endl;
   std::cout<<"char: "<<CHAR_MIN<<std::endl;
   std::cout<<"int: "<<INT_MIN<<std::endl;
   std::cout<<"short: "<<SHRT_MIN<<std::endl;
   std::cout<<"long: "<<LONG_MIN<<std::endl;
   std::cout<<"long long: "<<LLONG_MIN<<std::endl;
   std::cout<<"NOTE THAT THE SIZES HERE IS THEIR SIZE IN MEMORY. it doesnt mean that is the literal value you can declare"<<std::endl;
   
   dec2 = 16.4;
   switches=true;
   dec = 16.4;
   std::cout<<"Size of Variable: "<<sizeof(age2)<<std::endl;
   std::cout<<"Size of String('Keanu'): "<<sizeof(Name)<<std::endl;
   std::cout<<"Size of double(16.4): "<<sizeof(dec2)<<std::endl;
   std::cout<<"Size of bool: "<<sizeof(switches)<<std::endl;
   std::cout<<"Size of float(16.4): "<<sizeof(dec)<<std::endl;
   return 0;
}
