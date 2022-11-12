#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    float num1  {1.45646435642432432323246757f};
    double num2 {1.127910319702432432432432432412470};
    long double num3 {1.129084122131324343243243324423123213213L};

    cout << "size of float: "       << sizeof(num1) << " or "<< sizeof(float)<<endl;
    cout << "size of double: "      << sizeof(num2) << " or "<< sizeof(double)<<endl;
    cout << "size of long double: " << sizeof(num3) << " or "<< sizeof(long double)<<endl;
    
    return 0;
}