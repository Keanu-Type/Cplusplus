#include <iostream>
#include <cmath> //use math function()
using namespace std;

#include <limits.h> //use for finding limits in short/unsigned

int main(){
    int value {45};
    //you can add the value with this methods:
    value += 5; //instead of value = value + 5;
                //other methods:
                // value -=5 ; Minus 5
                // value *=5 ; multiply by 5
                // value /=3 ; divided by 3
                // value %=3 ; divded by 3 but output extra only
                
    cout << "Value is: "<< value<<endl;
    cout << "Addition: ";
    cout <<  40 + 10 << endl;
    
    cout << "Subtraction: " ;
    cout << 40 - 10 << endl;
    
    cout << "Modulus(division showing ONLY the remainder): ";
    cout << 10 % 3 << endl;
    
    cout <<"Multiplication: ";
    cout << 10*3 << endl;


    int wnum = 5;
    double dnum = 5.5;

    cout << wnum++ <<endl;  //add +1
    cout << wnum--  <<endl; //minus +1

    cout << 10/3 <<   endl; //will only return 3
    cout << 10.0/3.0 << endl; //will return 3.33333

    cout << "with <cmath>" << endl;
    cout << pow(2, 5) <<endl; //2 raise to power of 5. its 2^5
    cout << sqrt(25)  <<endl; //square root of 25. you can use decimal
    cout << round(4.3)<<endl; //round off
    cout << fmax(3, 10)<<endl; //return the largest
    cout << fmin(3, 10)<<endl; //return the smallest
    

    //REPRESENTING DIFFERENT NUMBER
    //Representing 15
    int number1 = 15; //Decimal
    int number2 = 17; //Octal
    int number3 = 0x0F; //Hexadecimal
    int number4 = 0b00001111; //Binary

    signed int number5 {100};//signed range [- 2^(n-1) to 2^(n-1)-1] *n is the number of bits for a type in a memory.
    //use signed int ONLY for negative and low range. Signed can be negative but has LOW positive range.


    //use of SHORT
    short numX {-32768}; //2 Bytes
    short int shortNumX {455} ;
    signed short signedshortNumX{122};
    signed short int signedintNumX {-456};
    unsigned short int unsignedintNumX {456};

    //use of LONG
    long numY {32768}; //2 Bytes
    long int shortNumY {455} ;
    signed long signedshortNumY{122};
    signed long int signedintNumY {-456};
    unsigned long int unsignedintNumY {456};

    cout<< "Value short variable: "<< numX <<" , and the size is: " <<sizeof(short)<<" bytes."<< endl;
    cout<< "Value short int: "<< shortNumX <<" , and the size is: " <<sizeof(short int)<<" bytes."<< endl;
    cout<< "Value: "<< signedshortNumX <<" , and the size is: " <<sizeof(signed short)<<" bytes."<< endl;
    cout<< "Value: "<< signedintNumX <<" , and the size is: " <<sizeof(signed short int)<<" bytes."<< endl;
    cout<< "Value: "<< unsignedintNumX <<" , and the size is: " <<sizeof(unsigned short int)<<" bytes."<< endl;
    return 0;
}