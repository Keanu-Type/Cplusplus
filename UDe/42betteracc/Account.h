#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<iostream>
#include <string>
class Account{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
  
    private:
        static constexpr const char *def_name="Unnamed Account";
        static constexpr double def_balance = 0.0;
    protected:
        std::string name; //
        double balance; //for line 15
    public:
        Account(std::string name = def_name, double balance = def_balance);
        //if registered account is empty name, use private data
        //Account(double balance);
        bool deposit(double amount);
        bool withdraw(double amount);
        double get_balance() const;

};
#endif