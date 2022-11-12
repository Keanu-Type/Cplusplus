#include <iostream>
using namespace std;

int main(){

    //TERNARY EXPRESSION = ALTERNATIVE EASY FOR IF statements

    bool fast = false; 
    int speed {fast ? 300 : 150};
    // this expresion is equivalent to "    if(fast == false){ 
                                        //     speed = 300; 
                                        //   }else{ 
                                        //     speed = 150;}"

    

    cout << "Speed is: " << speed <<endl;

    // Another Example
    int a {20};
    int b {10};
    int max;
    max = (a>b)? a : b; //VARIABLES SHHOULD BE COMPATIBLE. IF MAX IS INT, THEN INT. IF STRING, THEN STRING
    cout << "Max value is: "<<max <<endl;

    //or
    
     
    return 0;
}