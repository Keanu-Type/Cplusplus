#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    //REFERENCE - ALIAS of Variable
    //cannot be null. MUST be initialized at same time declaring
    //cannot be made to refer different variable

    int num(100);
    int &ref{num};//REFERENCING; Pointer is int *ref{num};

    cout <<num <<endl;
    cout <<ref <<endl; //technically i am outputting num. not ref. ref is referencing num

    ref = 20000; 
    cout<<num<<endl; 
    cout<<ref<<endl; //the ref value changed EVEN tho i change Num only. you can also change value even if you change only the Ref


    vector<string> stooges{"keanu","juka","Julie"};

    for (auto str : stooges)
        str="Funny";

    for(auto str : stooges)
        cout<< str <<endl;  //no changes. since i am not directly referencing the value in the vector.

    for(auto &str:stooges)
        str="Funny"; //since i references stooges, i am basically directly altering the data in vector
    for(auto str : stooges)
        cout<< str <<endl;  //no changes. since i am not directly referencing the value in the vector.
    return 0;


}