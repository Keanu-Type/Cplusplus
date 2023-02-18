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
    private:
        static constexpr const char *def_name = "Unnamed Account";
        static constexpr double def_balance=0.0;
        static constexpr double def_int_rate=0.0;
    public:
        Savings_Account(std::string name=def_name, double balance=def_balance, double int_rate=def_int_rate);
       //we have interest rate only exist in savin
        
        virtual bool deposit(double amount) override;
        virtual bool withdraw(double amount) override;
        virtual void print(std::ostream &os) const override;
        virtual ~Savings_Account()=default;
         //we dnt have to WITHDRAW which is Account.h has deposite and withdraw which we
        //can brrow the method with to opearate savings account. we will use it.   
    
};

#endif