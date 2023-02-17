#include "Checking_Account.h"

Checking_Acount::Checking_Account(std::string name, double balance)
    :Account(name,balance){

    }

    bool Checking_Account::withdraw(double amount){
        amount +=per_check_fee;
        return Account::withdraw(amount);
    }

    std::ostream &operator<<std::ostream &os, const Checking_Account &account){
        os<<"check: "<<account.name<<" :"<<account.balance<<endl;
        return os;
    }