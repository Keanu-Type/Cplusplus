#include <iostream>
using namespace std;
class Base{
    public:
        void say_hello()const{
            std::cout<<"hello base"<<endl;
        }
};

class Derived: public Base{
    public:
        void say_hello() const{
            cout<<"derrived"<<endl;

        };

};

void greetings(const Base &obj){

    cout<<'greetings';
    obj.say_hello();
}

int main(){
    Base b;
    b.say_hello(); //w are calling the Base. compiler knows it will call base class

    Derived d;
    d.say_hello();//we are calling derived. compiler knows it will call derived class

    //ISSUES
    //greetings(b); possible since it is this function is calling the Base class. we can pass Base declared function to a void that calls Base too
    //greetings(d); it wont call Derived/line 10. because the line 19, there is Base &obj. so it is binded to Base class.
    //              so it will call Base instead of Derived. it will output hello base instead
    Base *ptr = new Derived();
    ptr ->say_hello(); //the ptr see Derived binded to Base so instead of finding the say_hello from Derived Class, it will call the Base Class instead
    
    //BUT
    return 0;
}