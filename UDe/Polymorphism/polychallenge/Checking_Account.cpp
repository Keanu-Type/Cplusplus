#include "Checking_Account.h"

Checking_Acount::Checking_Account(std::string name, double balance)
    :Account(name,balance){

    }

    bool Checking_Account::withdraw(double amount){
        amount +=per_check_fee;
        return Account::withdraw(amount);
    }
    virtual void print(std::ostream &os) const{
         os<<"check: "<<name<<" :"<<account.balance<<endl;
    }
    virtual bool Checking_Account::deposit(double amount){
        return Account:deposit(amount);
    }
