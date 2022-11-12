#include <iostream>
using namespace std;

int main(){
    char value = 65;
    cout<<"Value: "<<value <<endl;
    cout<<"ASCII Character: "<<static_cast<int>(value)<<endl; //use static_cast<int> to know its value in ASCII
    return 0;

}