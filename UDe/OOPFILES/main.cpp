#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account frank_account;
    frank_account.set_balance(10000.00);
    double bal = frank_account.get_balance();
    if(frank_account.deposit(20000)){
        cout<<"deposite ok"<<endl;
    }else{
        cout<<"not allowed"<<endl;
    }

    if(frank_account.withdraw(5000)){
        cout<<"withdraw ok"<<endl;
    }else{
        cout<<"not allowed"<<endl;
    }

    if(frank_account.deposit(15555000)){
        cout<<" ok"<<endl;
    }else{
        cout<<"not enough"<<endl;
    }
    return 0;
}