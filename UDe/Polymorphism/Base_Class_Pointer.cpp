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

int main(){
    cout<<"POINTERS--------"<<endl;
    //without VIRTUAL, even tho it is savings(), checking, trust. they are still CALLING Account() because
    //they are binded to it. so we are getting wrong output.

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
    cout<<"vector"<<endl;
    vector <Account> vect {p1,p2,p3,p4};
    for (auto acc_ptr:vect){
        acc_ptr-> withdraw(1000);
    }
    return 0;
}