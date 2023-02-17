#include <iostream>
using namespace std;
//MAIN CLASS
class Base{
    private:
        int value;
    public:
        Base():value{0}{
            cout<<"-No Arguement-"<<endl;
        }
        Base(int x):value{x}{
            cout<<"-Int Base Constructor-"<<endl;
        }
        Base(const Base &other):value{other.value}{    cout<<"-Base Copy Constructor-"<<endl;}
        Base &operator=(const Base &rhs){
            cout <<"Base Operator ="<<endl;
            if (this == &rhs){
                return *this;
            }
            value = rhs.value;
            return *this;
        }

        ~Base(){
            cout<<"Base desructor"<<endl;
        }
};

//DERIVED CLASS OF BASE CLASS INHERITANCE
//Class Derived: public Base{
class Derived_from_Base: public Base{
    private:
        int timestwo;
    //inherited from Base, a will be public, b is protected, c is not accessible   
    public:                     
  
        Derived_from_Base():Base{}{
            cout<<"No Derived Args Constructor"<<endl;
        }
        Derived_from_Base(int x): Base{x}, timestwo{x*2}{ 
            cout<<"Derived no args"<<endl;
        };
        Derived_from_Base(const Derived_from_Base &other):Base(other), timestwo{other.timestwo}{
            cout<<"Derived Copy Constructor"<<endl;
        }
        Derived_from_Base &operator=(const Derived_from_Base &rhs){
            cout<<"Derived operator= "<<endl;
            if(this == &rhs){
                return *this;
            }
            Base::operator=(rhs);
            timestwo = rhs.timestwo;
            return *this;
        }
        ~Derived_from_Base(){cout<<"Derived Desructor"<<endl;}
};
//}

int main(){

    Base b{100}; //This will go to Line 40. in Line 40, it will execute the Base{x}, calling the Base class.
                //that is in line 11. it will execute line 12. then go back to line 40, execute the timestwo{x*2}. it will multiply
                //then cout line 41.

    //COPY CONSTRUCTOR/ THIS will copy line 58.
    Base b1{b}; //this will execute to line 43. then it execute the const Derived_from_Base &rhs. that rhs is in line 15. then go back t line

    b1=b;//this will go to line 46. this is Base = Base, not Int assigning. so it will go to line 46. it will execute line 47. since it is not equal, it will skip to line 51.
         //we are now at line 15. the double part is not part of the base. it will execute and assign rhs.value to value. going back to line 52.
         //and execute further
         
    return 0;
}