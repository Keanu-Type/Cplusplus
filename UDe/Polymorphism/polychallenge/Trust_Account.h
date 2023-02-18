#ifndef _ACCOUNT_ACCOUNT_H_
#define _ACCOUNT_ACCOUNT_H_
#include "Savings_Account.h" //we need this for base inheritance
                    //we are referring to the base which is account, otherwise it wont inherit
class Trust_Account: public Savings_Account{
    //we dnt have to put anything SINCe our parent, which is Account.h has deposite and withdraw which we
    //can brrow the method with to opearate Trust account. we will use it.   
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
    //we just need this.
    //we have interest rate exist only in saving accounts
    protected:
        double num_withdrawals;
    private:
        static constexpr const char *def_name = "Unnamed TRUST Account";
        static constexpr double def_balance=0.0;
        static constexpr double def_int_rate=0.0;
        static constexpr double bonus_amount=50.0;
        static constexpr double bonus_threshold=5000.0;
        static constexpr int max_withdrawal=3;
        static constexpr double max_withdrawal_percent=0.2;
    public:
        Trust_Account(std::string name=def_name, double balance=def_balance, double int_rate=def_int_rate);
       //we have interest rate only exist in savin
        
        virtual bool deposit(double amount) override;
        virtual bool withdraw(double amount) override;
        virtual void print(std::ostream &os) const override;
        virtual ~Trust_Account()=default;
         //we dnt have to WITHDRAW which is Account.h has deposite and withdraw which we
        //can brrow the method with to opearate Trust account. we will use it.   
    
};

#endif