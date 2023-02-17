#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Account.h" //include all inheritance
#include "Savings_Account.h"
using namespace std;

class Base{
    public:
        Base():value{0}{
            cout<<"Base no args constructor"<<endl;
        };
        Base(int x): value{x}{
            cout<<"Base (int) overloaded constructor"<<endl;
        };
        ~Base(){
            cout<<"Base destructor"<<endl;
            };
    private:
        int value;
};

class Derived_from_Base: public Base{
    //inherited from Base, a will be public, b is protected, c is not accessible   
    public:
        Derived_from_Base():timestwo{0}{ //call private int
            cout<<"derived no args"<<endl;
        }
        Derived_from_Base(int x):timestwo{x*2}{ //call private int
            cout<<"Derived no args"<<endl;
        };
        ~Derived_from_Base(){cout<<"Derived"<<endl;}
    private:
        int timestwo;
};

int main(){
//
    cout<<"====base access from object object===="<<endl;
    Base object;
    Base objet{100};
    
    cout<<"========= derived object======"<<endl;
    
    Derived_from_Base d; //it will go to line 11 first, it will set the value to 0 since value{0}
                         //BUT since we uncomment line 27, it will run to line 20 instead. it will not go to Base. 
                         //but the Base line. 14 BUT it will run to line 11. we did not necessarily go to line 11. the Derived class itself
                        //called for it.
    Derived_from_Base e {1000}; //it will go to line 30. just like line 46, but it wont call the line 15 since we are not explicitly calling it thru line 30. see next how. so it will 
            //only initialize line 11
    return 0;
    //Class

}