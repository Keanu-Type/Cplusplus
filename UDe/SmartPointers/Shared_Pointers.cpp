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



void func(std::shared_ptr<Test> p){
    std::cout<<"Use Count: "<<p.use_count()<<std::endl;
}

int main(){
    //Shared Pointers - similar to Unique Pointer. but sharable to assign. we can have multiple pointers
    //use_count- number of shared_ptr object managing the heap object   

    cout<<"shared pointers"<<endl;
    std::shared_ptr<int> shar{new int{1000}};
    std::cout<<"use count: "<<shar.use_count()<<endl;

    //sharing
    std::shared_ptr<int> shar2{shar};
    std::cout<<"use count2: "<<shar2.use_count()<<endl;
    //sharing 2
    std::shared_ptr<int> shar3{shar2};
    std::cout<<"use count: "<<shar3.use_count()<<endl;
    
    //reset
    shar.reset();
    //they will now have different count. p1 is now nullptr, and share2 own share 1 and share3 own 2
    std::cout<<"use count: "<<shar2.use_count()<<endl;
    std::cout<<"use count: "<<shar3.use_count()<<endl;

    cout<<"--------"<<endl;
    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
    func(ptr);
    {
    std::shared_ptr<Test> ptr1=ptr; //they are now pointing to PTR
    std::cout<<"use count: "<<ptr1.use_count()<<endl;
        {
            std::shared_ptr<Test> ptr2=ptr;//they are now pointing to PTR
            std::cout<<"use count: "<<ptr.use_count()<<endl;        
            ptr.reset(); //it will now go out o scope
        }
        std::cout<<"use count: "<<ptr.use_count()<<endl; //it is now at 0 pointer
    }
    std::cout<<"use count: "<<ptr.use_count()<<endl; //still at 0 since we reset
    
    
    return 0;
}