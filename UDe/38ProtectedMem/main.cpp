#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Account.h" //include all inheritance
#include "Savings_Account.h"
using namespace std;

class Base{
    public:
        int a{0};
        void display(){
            std::cout<<a<<", "<<b<<", "<<c<<endl;
            }
    protected:
        int b{0};
    private:
        int c{0};
};

class Derived: public Base{
    //inherited from Base, a will be public, b is protected, c is not accessible   
    public:
        void access_base_members(){
            a = 100; //OK we havea ccess
            b = 200; //we have access
            //c = 300; //not accessible
        }
};

int main(){
//
    cout<<"====base access from object object===="<<endl;
    Base base;
    base.a = 100;
    //base.b = 200; //b is not since protected
    //base.c =300; //c wont be ok cause private
    cout<<"=========bas from derived object======"<<endl;
    Derived d;
    d.a = 100; // from accessible, it is ok
    //d.b = 200; //
    //d.c =300; //

    return 0;
    //Class
    Account accounting{};   //base class
                            //call the Class

    accounting.deposit(200000.0); //call base deposit
    accounting.withdraw(1000.0); //call base deposit
    cout<<"----------------------------"<<endl;
    //POINTERS OF ACCOUNTS
    Account *p_acc{nullptr}; 
    p_acc = new Account();
    p_acc -> deposit(1000);
    p_acc -> withdraw(500);
    delete p_acc;
    cout<<"----------------------------"<<endl;


        //SUBCLASS/INHERITANCE
    Savings_Account save_acc{};   //base class
    save_acc.deposit(200000.0); //call base deposit
    save_acc.withdraw(1000.0); //call base deposit
    cout<<"----------------------------"<<endl;
    //POINTER OF ACCOUNTS
    Savings_Account *p_save_acc{nullptr}; 
    p_save_acc = new Savings_Account();
    p_save_acc -> deposit(1000);
    p_save_acc -> withdraw(500);
    delete p_save_acc;
   return 0;
}