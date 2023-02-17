#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h" //we need this for base inheritance
                    //we are referring to the base which is account, otherwise it wont inherit
class Savings_Account: public Account{
    //we dnt have to put anything SINCe our parent, which is Account.h has deposite and withdraw which we
    //can brrow the method with to opearate savings account. we will use it.   
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
    //we just need this.
    //we have interest rate exist only in saving accounts
    protected:
        double int_rate;
    public:
        Savings_Account();
       //we have interest rate only exist in savings
        Savings_Account(double balance, double int_rate);
        void deposit(double amount);
         //we dnt have to WITHDRAW which is Account.h has deposite and withdraw which we
        //can brrow the method with to opearate savings account. we will use it.   
    
};

#endif