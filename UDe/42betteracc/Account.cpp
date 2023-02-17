#include <iostream>

#include "Account.h"
using namespace std;
    //calling delegating constructor
Account::Account(std:: string name, double balance) //NO ACTUAL USE. unless you declare Account variable{}; in main
    : name{name}, balance{balance}{
    }
                //whatever amount you throw, you will assign it as double.
                //you will assign balance you throw as balance
bool Account::deposit(double amount){
    if (amount<0){
        return false;
    }else{
        balance+=amount;
        return true;
    }
}

bool Account::withdraw(double amount){
    if ((balance-amount)<=0){
        return false;
    }else{
        balance-=amount;
        return true;
    }
}

double Account::get_balance() const{
    return balance;
}
//std::ostream &operator(std::ostream &os, const ClassName &)
std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"Balances: "<<account.balance;
    return os;
}

