#include <iostream>
#include  "Account_Util.h"

using namespace std;

void display(const std::vector<Account> &accounts){
    cout<<"\nAccounts=============="<<endl;
    for(const auto &acc: accounts){
        std::cout<<acc<<endl;
    }
}


void deposit(std::vector<Account> &accounts, double amount){
    cout<<"\nDeposite Accounts=============="<<endl;
    for(auto &acc: accounts){
        if(acc.deposit(amount)){
            cout<<"amount: "<<amount<<" of "<<acc<<endl;
        }else{
            cout<<"failed to get acc of: "<<acc<<endl;
        }
    }
}


void withdraw(std::vector<Account> &accounts, double amount){
    cout<<"\nWithdraw Accounts=============="<<endl;
    for(auto &acc: accounts){
        if(acc.withdraw(amount)){
            cout<<"amount: "<<amount<<" of "<<acc<<endl;
        }else{
            cout<<"failed to get acc of: "<<acc<<endl;
        }
    }
}
//////THIS IS FOR SAVINGS

void display(const std::vector<Savings_Account> &accounts){
    cout<<"\n Saving Accounts=============="<<endl;
    for(const auto &acc: accounts){
        std::cout<<acc<<endl;
    }
}


void deposit(std::vector<Savings_Account> &accounts, double amount){
    cout<<"\nSaving Deposite Accounts=============="<<endl;
    for(auto &acc: accounts){
        if(acc.deposit(amount)){
            cout<<"amount: "<<amount<<" of "<<acc<<endl;
        }else{
            cout<<"failed to get acc of: "<<acc<<endl;
        }
    }
}


void withdraw(std::vector<Savings_Account> &accounts, double amount){
    cout<<"\nSaving Withdraw Accounts=============="<<endl;
    for(auto &acc: accounts){
        if(acc.withdraw(amount)){
            cout<<"amount: "<<amount<<" of "<<acc<<endl;
        }else{
            cout<<"failed to get acc of: "<<acc<<endl;
        }
    }
}