#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Account{
    public:
    //in this case, put Virtual term. its virtual now. it will dynamically bound. avoid confusion of when calling trust(), it is binding to Account() instead.
        virtual void withdraw(double amount){
            cout<<"In Account::withdraw"<<endl;
        }
        //must to have proper destructor
        virtual ~Account(){ //THIS IS A MUST
            cout<<"virtual destructor"<<endl;
        }
    private:
    
};

class Checking: public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Checking::withdraw"<<endl;
        }
        
        virtual ~Checking(){
            cout<<"virtual destructor"<<endl;
        }
    private:
    
};

class Savings: public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Savings::withdraw"<<endl;
        }
        
        virtual ~Savings(){
            cout<<"virtual destructor"<<endl;
        }
    private:
    
};

class Trust:public Account{
    public:
        void withdraw(double amount){
            cout<<"In Trust::withdraw"<<endl;
        }
        
        virtual ~Trust(){
            cout<<"virtual destructor"<<endl;
        }
    private:
    
};
//THIS IS THE HILIGHT. BASE CLASS REFERENCE. it gets refer to the correct
//FUNCTION HERE
//  Void Functionname(Class &variable_to_pass, type variable_value){
//              variable_to_pass.similar_function(variable_to_pass)           
//}

//note the  Class &Variable must be like, line 72, line 73, line 76-77.
void do_withdraw(Account &account, double amount){
    account.withdraw(amount); // since Account is virtual function, this is bound dynamically there
}

int main(){
    cout<<"POINTERS--------"<<endl;
    Account a;
    Account &ref = a;
    ref.withdraw(1000); //call withdraw of account
    
    Trust t;
    Account &ref2 = t;
    ref2.withdraw(2000); //call withdraw of trust

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1,10000);
    do_withdraw(a2,10000); //this will call line 60, but line 60 is smart enough to respectively call Savings and call the action there
    do_withdraw(a3,10000); //this will call line 60, but line 60 is smart enough to respectively call Checking and call the action there
    do_withdraw(a4,10000); //this will call line 60, but line 60 is smart enough to respectively call Trust and call the action there

    Account *p1 = new Account(); //normally we will only bind and output to Account(). ALL of them even tho they are referring to savings, trust etc.
    Account *p2 = new Savings();    //with VIRTUAL, we can fix this. now savings() is now calling savings().
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    p1 -> withdraw(1000);
    p2 -> withdraw(1000); ////POINTERS ARE HERE
    p3 -> withdraw(1000);
    p4 -> withdraw(1000);


    cout<<"with array"<<endl;
    Account *array[] = {p1,p2,p3,p4}; //we are not storing/creating file. we are just simply POINTING THEM.
    for (auto i=0;i<4;++i){
        array[i]-> withdraw(1000); //we are doing the same thing in line 21-24
    }

    std::cout<<"CLEAN UP======"<<std::endl;
    //
    delete p1;
    delete p2;
    delete p3;
    delete p4;//we are going to get warning if we dont have Virtual Destructor
                //deleting object of polymorphic class type Account which has non-virtual destructor might cause  undefined behavior
                //and cause memory leak.
                //remember:
                //constructor created
                //derived created
                //derived destroyed
                //constructor destroyed//this is the sequence when deleting/pointers
                //the problem is when we have virtual constructor but no virtual destructor, we have pointers pointed to account(line 61s) but 
                //coming here in line 83, we dont know which destructor to call
                //so we need Virtual Destructor.
    return 0;

}