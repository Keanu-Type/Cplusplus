#include <iostream>
using namespace std;

void say_age(int& age);

int main(){
    int age{23};
    cout << "age before call "<< age << " &age: "<<&age <<endl; //watch the address
    say_age( age );
    cout << "age after call "<< age << " &age: "<<&age <<endl;//same address

    return 0;//it is true that we are modifying the same variable
}

void say_age(int& age){
    ++age;
    cout << "HELLO you are "<<age<< " years old &age: " << &age << endl;
}
//