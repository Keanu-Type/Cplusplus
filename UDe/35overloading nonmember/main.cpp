#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
    //
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout<< "Enter Name: ";
    cin >> curly;

    cout<< "Three stages: "<<larry<<", "<<moe<<", and: "<<curly<<endl;
    cout<<"\n Enter three names";
    cin>> larry>>moe>>curly;

    cout<< "Three stages: "<<larry<<", "<<moe<<", and: "<<curly<<endl;
    
    return 0;
}