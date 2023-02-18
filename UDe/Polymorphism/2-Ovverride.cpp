#include <iostream>
#include <string>

using namespace std;


class Base{
    public:
        virtual void say_hello() const{
            std::cout<<"Hello base"<<endl;
        }
        virtual ~Base(){

        }
    private:
    
};

class Derived: public Base{
    public:
        virtual void say_hello(){
            cout<<"hello derived"<<endl;
        }
        virtual ~Derived(){};
};
class Derived_sec: public Base{
    public:
        virtual void say_hello()const override{
            cout<<"hello im here in derived now"<<endl;
        }
        virtual ~Derived_sec(){
            cout<<"destructor"<<endl;
        }
};
int main(){
    Base *p1 = new Base(); //pointer of base
    p1 -> say_hello(); //means -> means call

    Derived *p2 = new Derived(); //pointer of derived
    p2 -> say_hello(); //means -> means call
    
    //this is problem. since we did not override but redefined, this will bound dynamically not statisticall.
    //it will bind to Base say_hello() even tho we declare this as =new Derived()
    Base *p3 = new Derived(); //pointer of base.
    p3 -> say_hello(); //means -> means call
    
    
    //to solve it: PUT const override in the say_hello of that derived class
    Base *p4 = new Derived_sec(); //pointer of base
    p4 -> say_hello(); //means -> means call
    
    return 0;
}