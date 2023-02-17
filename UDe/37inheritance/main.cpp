#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Account.h" //include all inheritance
#include "Savings_Account.h"
using namespace std;


int main(){
//
    //INHERTIANCE provide method for creating new classes
    //allow for reuse of existing class
    //focus on common attribute
    
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