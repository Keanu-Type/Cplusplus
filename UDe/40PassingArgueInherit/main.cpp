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
                        //with Base{x}, it is now specifically calling line 11, solving the problem before
        Derived_from_Base():Base{},timestwo{0}{ //call private int
            cout<<"derived no args"<<endl;  
        }              
                     //with Base{x}, it is now specifically calling line 11, solving the problem before
        Derived_from_Base(int x): Base{x}, timestwo{x*2}{ //call private int
            cout<<"Derived no args"<<endl;
        };
        ~Derived_from_Base(){cout<<"Derived Desructor"<<endl;}
    private:
        int timestwo;
};

int main(){
//
    cout<<"====base access from object object===="<<endl;

    
    cout<<"========= derived object======"<<endl;
    Derived_from_Base d;        
    Derived_from_Base e {1000};  //it will go to line 32. since there is base{x}, we are invoking line14, there by it will appear/call in terminal. 
                                //after that, it will go back to line 33. and then go to line 35, destructor, then it will go to line 18, desructor for base.
    return 0;
    //Class

}