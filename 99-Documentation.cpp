#include <iostream>
#include <cmath> //FOR LINE  32
using namespace std;

//CONTROL + F to find MEMORY-RELATED codes
int main(){
    int integer {100};
    string words {"KEAN- P. BERCHES"};
    char characters {60};                     //Characters
    bool boolean {true};                      //Bool
    float hexadecimal = 30.14;                //hexadecimal = short value
    float hexadecimal2 = 20;
    double decimal = 10.10101010101001010101; //double = long value
    long double longdecimal {1.2323432432221331F};
    int inputint;
    string inputstring;
    const char * planet {"EARTH KEANU"}; //LESS MEMORY and constant. cannot be chane
   
   //----------------DOCUMENTATIONS FOR STRINGS----------------//
    //COUT 
    cout <<"integer value: "<< integer <<endl;   
    cout <<"variable[x]: " << words[0]<<endl; // you can access the first char of the string
    cout << static_cast<int>(characters)<<endl;  //Finding Asci Value
    
    //.function() for String
    cout << words.length() <<endl; //.length() use for writing how long your sentence
    cout << words.find("BERCHES",0) <<endl; ///find Berches in the sentence. the 0 means the count will start at 0th and it will cout what place "Berches" is

    //Replacing string/char value inside text
    string replace_words = words;
    replace_words[4] = 'NU';
    cout << replace_words <<endl; //starting at 5th character, it will be replace by NU

   //=================== DOCUMENTATIONS FOR MATHS ======================== //
    cout << integer + integer << endl; //ADD 
    cout << integer - integer << endl; //MINUS
    cout << integer * integer << endl; //MULTIPLY
    cout << integer / integer << endl; //Divide
    cout << integer % 3 << endl;       //Divide(return remainder only)
    
    //Alternative  for integer = integer+1;
    cout << integer++ << endl;         //incremental
    cout << integer+4 << endl;         //incremental by 5 /
    cout << integer-4 << endl;         //reverse incremental by 4

    //Alternative Math Functions. alternative for manuals
    cout << "Power of Function: " << pow(2,5) << endl; //pow(x,y) is x^y
    cout << "Squareoot Function: " << sqrt(25) <<endl; //sqrt(x) for squareoot
    cout << "Round off Function: " << round(hexadecimal) <<endl; //round(x) round off number
    cout << "find max Function: "<< fmax(100,50)<<endl; //return highest
    cout << "find min Function: "<< fmin(100,50)<<endl; //return smalles
    cout << "size i Memory: "    << sizeof(integer)<<endl; //check variable's size in the MEMORY usage
    /*note comparison: MEMORY size of regular (Integer, String, Double) Variable and Long (Integer, String, Double) Variable*/
    cout << "Size of Regular Variable: " << sizeof(decimal) << endl; //SHORTER MEMORY SIZE
    cout << "Size of Long Variable   : " << sizeof(longdecimal) <<endl; //LONGER MEMORY SIZE
    
    return 0;
}