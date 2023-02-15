#include <iostream>

using namespace std;

int main(){

    string  Name      = "Keanu";  //String
    int     num       = 0;        //int
    char    character = 'A';      //Character
    float   decimalA  = 30.14;    //Decimal(short)
    double  decimalB  = 10.2101094210412013; //Decimal for Long value
    bool    state     = true;                //true or false
    bool    state2    = false;
    std::boolalpha; //changes true or false
    cout << "hello " << Name << " your age is " << num<< endl;
    cout  << state <<endl; //Bool Alpha change the value from true to false or vice versa. saves memory
    cout << state2 <<endl; //NOW TRUE
    return 0;
}