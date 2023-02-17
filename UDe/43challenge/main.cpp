#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Account.h" //include all inheritance
#include "Savings_Account.h"
#include "Account_Util.h"
using namespace std;


int main(){
//
    Account nothing{};
cout<<"====base access from object object===="<<endl;
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 20000});
    accounts.push_back(Account{"Curly", 50000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    vector<Savings_Account> Savings_accounts;
    Savings_accounts.push_back(Savings_Account{});
    Savings_accounts.push_back(Savings_Account{"Keanu"});
    Savings_accounts.push_back(Savings_Account{"Juka", 20000});
    Savings_accounts.push_back(Savings_Account{"Julie", 50000,5.0});

    display(Savings_accounts);
    deposit(Savings_accounts, 1000);
    withdraw(Savings_accounts, 2000);

  return 0;
}