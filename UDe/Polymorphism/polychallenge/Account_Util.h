#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
    //we will use vectors
    //this are regular function. not class

//display, this play vector.
void display(const std::vector<Account> &accounts);
//give me all deposite, and i will deposite with double amount
void deposit(std::vector<Account> &accounts, double amount);
//give me all deposite, and i will withdraw with double amount
void withdraw(std::vector<Account> &accounts, double amount);


//same with above.
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);
#endif