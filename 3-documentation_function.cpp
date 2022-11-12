#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string sentence = "My Name is Keaz P. Berches";
    string new_sentence = sentence;

    //.functions()
    cout << sentence.length() << endl;              //length() how long the length of your sentence is
    cout << new_sentence.find("Berches",0) << endl; //find Berches in the sentence. the 0 means the count will start at 0th and it will cout what place "Berches" is
    
    //playing with variables[x]
    cout << sentence[0] <<endl; //sentence[0] means you will access the first char of the variable
    
    new_sentence[15] = 'nu';   //"it will replace 'z ' with 'nu'. so instead of Keaz P. Berches it will be KeanuP. Berches "
    cout << new_sentence <<endl;

    //Cmath functions
    float numA = 20;
    float numB = 9.2;

    cout<< "Power function: "      << pow(2,5) <<endl; //2^5
    cout<< "Squareroot function: " << sqrt(25) <<endl; //square root of 25. you can use decimal
    cout<< "Round off function: "  << round(4.3) <<endl; //round off
    cout<< "Find Max function: "   << fmax(3, 10) <<endl; //return the largest
    cout<< "Find Min function: "   << fmin(3, 10) <<endl; //return the smallest
    
    //Checking size in the memory
    cout<< "size in memory is: "<< sizeof(numA)<< endl;
    return 0;
}