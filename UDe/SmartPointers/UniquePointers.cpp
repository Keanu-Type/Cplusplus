#include <iostream>
#include <string>
#include <memory> //must have for Smart Pointers
#include <vector>
//#include "Account.h" //include all inheritance
//#include "Savings_Account.h"
//#include "Checking_Account.h"
//#include "Trust_Account.h"
//#include "Account_Util.h"
using namespace std;

class Test{ //
    private:
        int data;
    public:
        Test():data{0}{ //no args construct
            cout<<"Test Constructor: "<<data<<endl;
        }
        Test(int data):data{data}{//args construct
            cout<<"Test Constructor "<<data<<endl;
        }
        int get_data()const{//getting data
            return data;
        }
        ~Test(){std::cout<<"test destructor: "<<data<<endl;}
};

int main(){
    //Unique Pointers - simple and very efficient. Can be moved. cannot be assigned or copied.
    //normal
    Test t{1000};
    //with Pointers;
    cout<<"------"<<endl;
    Test *n = new Test{1000};
    //with unique pointers
    cout<<"unique pointers"<<endl;
    std::unique_ptr<Test> uniq{new Test{1000}};
    //make unique pointer           //the UNIQUE TEST
    std::unique_ptr<Test> make = std::make_unique<Test>(1000);

    //another unique pointer
    std::unique_ptr<Test> t3; //not pointing to anyone declaraton
    //t3 = make. we cannot reassign pointe
    t3 = std::move(make); //this is how we reassign. we MOVE the OWNERSHIp(address, data) of Make variable, to t3.
                            //this is WAY better than just t3 = make, because it is not copying, literally passing one data to other.
    if(!make){
        cout<<"make is  nullptr"<<std::endl;
    }

    return 0;
}