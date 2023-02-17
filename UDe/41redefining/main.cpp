#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Account.h" //include all inheritance
#include "Savings_Account.h"
using namespace std;


int main(){
//
    Account nothing{};
cout<<"====base access from object object===="<<endl;
    
    Account base{1000.0}; //this will go to Account.h in Account h. it will go to line 12.
                          //line 14 will call line 12 of account.cpp.                       //you have now 1500 in Memory
    cout<<base<<endl;      //call line 7 in Account.h, call line 23 in Account.cpp   output the balance from memory.
    base.deposit(500);      //call line 13 in Account.h, call line 15 in Account.cpp. add balance. so balance now in Memory is 1500
    cout<<base<<endl;       //call line 7 in Account.h, call line 23 in Account.cpp. output the balance from memory.
    base.Withdraw(100);     //same thing as line 18 here.
    cout<<base<<endl;       //same as line 19 here
    base.Withdraw(500);     //same thing as line 20 here.
    cout<<base<<endl;       
    cout<<"---------------SAVING ACCOUNTS-------------"<<endl;
    //we have interest rate
    Savings_Account secacc{1200.0,5.0}; //call Savings.Account.h. call line 16 in Saving_Account.cpp.
    cout<<secacc<<endl;                 //call line 8 in Saving_Account.h, then it will call line 22.
    secacc.deposit(500);                //call line 17 in Saving_ACCOUNT.H, then call line 17 in .cpp
    cout<<secacc<<endl;                 //call line 8 in saving_acc.h then call line 22 in saving_acc.cpp
    secacc.Withdraw(500);               //call line line 14 in ACCOUNT.H. very different from before.......since we are reusing the account.cpp
    cout<<secacc<<endl;                 //call line 8 in saving_acc.h then call line 22 in saving_acc.cpp
    secacc.Withdraw(500);
    cout<<secacc<<endl;
   return 0;
}