#include <iostream>

#include "Account.h"

Account::Account()
    : balance{0.0}, name{"Account"}{

}
Account::~Account(){

}

void Account::deposit(double amount){
    std::cout<<"Account deposit: "<<amount<<std::endl;
}

void Account::withdraw(double amount){
    std::cout<<"Account withdraw: "<<amount<<std::endl;
}
