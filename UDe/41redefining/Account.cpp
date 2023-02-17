#include <iostream>

#include "Account.h"
using namespace std;
    //calling delegating constructor
Account::Account() //NO ACTUAL USE. unless you declare Account variable{}; in main
    : Account{0.0}{
        cout<<"hello"<<endl;
    }
                //whatever amount you throw, you will assign it as double.
                //you will assign balance you throw as balance
Account::Account(double balance):balance(balance){

}
void Account::deposit(double amount){
    balance += amount;
}

void Account::Withdraw(double amount){
    balance -= amount;
}
//std::ostream &operator(std::ostream &os, const ClassName &)
std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"Balances: "<<account.balance;
    return os;
}

