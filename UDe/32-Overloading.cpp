#include <iostream>
#include "Mystring.h"
using namespace std;
int main(){
    Mystring empty; //no args constructor
    Mystring larry("larry");//overloaded constructtor //MAIN HILIGHT
    Mystring stooges{larry};//copy constructor

    empty.display();
    larry.display();
    stooges.display();

    return 0;
}