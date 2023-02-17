#include <iostream>
#include "Savings_Account.h" //we include the .h file instead

//own constructor
//ALL OF THIS IS OWN PROPERTY NOT RELATED DIRECTLY TO ACCOUNT
Savings_Account::Savings_Account()
    :int_rate{3.0}{


}
Savings_Account::~Savings_Account(){

}
    //own void
void Savings_Account::deposit(double amount){
    std::cout<<"Savings Account deposit: "<<amount<<std::endl;
}
    //we have our own void
void Savings_Account::withdraw(double amount){
    std::cout<<"Savings Account withdraw: "<<amount<<std::endl;
}
