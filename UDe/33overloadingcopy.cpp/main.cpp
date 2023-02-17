#include <iostream>
#include "Mystring.h"
#include <vector>
using namespace std;
int main(){
    Mystring a {"hello"};//overloaded constructtor //MAIN HILIGHT  .. this is pointing to Hello in heap
    Mystring b;//copy constructor
    b = a;  
    b = "test";

    Mystring empty; //no args constructor
    Mystring larry("larry");//overloaded constructtor //MAIN HILIGHT
    Mystring stooges{larry};//copy constructor

    empty = stooges;

    empty.display();
    larry.display();
    stooges.display();
    empty.display();


    return 0;
}