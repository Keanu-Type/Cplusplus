T#include <iostream>
#include "Savings_Account.h" //we include the .h file instead
using namespace std;


Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    :Account{name, balance},int_rate{int_rate}{
        cout<<"saving acc"<<endl;
    }

//NO ARGS CONSTRUCTOR-expect nothing

bool Savings_Account::deposit(double amount){
    amount = amount +(amount *int_rate/100);
    Account::deposit(amount);
    std::cout<<"Savings Account deposit: "<<amount<<std::endl;
    return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount){
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account){
    os<<"savings account balance: "<<account.balance<< "|| interest rate: "<<account.int_rate;
    return os;
}

