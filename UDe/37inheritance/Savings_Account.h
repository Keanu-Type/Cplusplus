#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h" //we need this for base inheritance
                    //we are referring to the base which is account, otherwise it wont inherit
class Savings_Account: public Account{
    public:
        double int_rate;
        //ALL OF THIS HAS ITS OWN VERSION. NOT DIRECTLY RELATED TO ACCOUNT
        Savings_Account();
        ~Savings_Account(); //destroy account
        //we have our own version of withdraw
        void deposit(double amount);
        void withdraw(double amount);
       

};

#endif