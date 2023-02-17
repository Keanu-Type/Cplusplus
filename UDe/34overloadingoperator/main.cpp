#include <iostream>
#include "Mystring.h"
#include <vector>
#include <string>
using namespace std;
int main(){

    Mystring larry{"larry"};//overloaded constructtor //MAIN HILIGHT
    Mystring moe{"moe"};//overloaded constructtor //MAIN HILIGHT

    Mystring star=larry;//copy constructor
    larry.display();
    moe.display();
    
    cout<<(larry == moe)<<endl; //false
    cout<<(larry == star)<<endl; //false
    
    larry.display();
    Mystring larry2 = -larry; 
    larry2.display();

    Mystring stooges = larry + "Moe";

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + "Larry"+" "+"Curly";
    two_stooges.display();
    
    return 0;
}