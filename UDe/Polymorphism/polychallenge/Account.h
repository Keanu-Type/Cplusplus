#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "Printable.h"
                //printable now
class Account:public Printable{

        friend std::ostream &operator<<(std::ostream &os, const Account &account);
    protected:
        double balance;
        std::string name;
    public:
        Account(std::string name = def_name, double balance = def_balance);

        //if we put Virtual and =0, it will become abstravct
        virtual bool deposit(double amount)=0;
        virtual bool withdraw(double amount)=0;

        //this is telling the complie to override
        virtual void print(std::ostream &os) const override;
        virtual ~Account()=default; //destructor. default destructor.
    private: 
        static constexpr char *def_name = "Unnamed Acc";
        static constexpr double def_balance = 0.0;

};

#endif