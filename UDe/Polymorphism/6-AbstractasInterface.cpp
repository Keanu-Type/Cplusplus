#include <iostream>
#include <string>
#include <vector>

using namespace std;
class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obi);
    public:
        virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}

                //we have to put this to match with line 6, so that other dervied class will also connect here
class Account:public I_Printable{
    //OVERLOADS                  insertion operator, check output stream and check input
    friend std::ostream &operator << (std::ostream &os, const Account &acc);//this will go to line 19. this is connected ot line 19
    public:
        virtual void withdraw(double amount){
            std::cout<<"In Account:withdraw"<<std::endl;
        }
        virtual void print(std::ostream &os)const override{//this is just print but it will work differently
            os <<"Account Account";
        } //we will use this to connect to line 6 since we remove the line 32
        virtual ~Account(){}
    
};

//std::ostream &operator << (std::ostream &os, const Account &acc){os<<" Account stream ";return os;}
//we will rmove this now. line 6 printable will do the job

class Checking: public Account{                         //this will match to line 34
    friend std::ostream &operator << (std::ostream &os, const Checking &acc);
    public:
        virtual void withdraw(double amount){
            std::cout<<"In Checking:withdraw"<<std::endl;
        }
        
        virtual void print(std::ostream &os)const override{
            os <<"Account Checking";
        } //we will use this to connect to line 6 since we remove the line 48
        virtual ~Checking(){}
    
};                                              //look! Checking is here. connected/match to line 25
//std::ostream &operator << (std::ostream &os, const Checking &acc){os<<" display CHECKING: ";return os;}
//we will rmove this now. line 6 printable will do the job

class Trust: public Account{
    friend std::ostream &operator << (std::ostream &os, const Trust &acc);
    public:
        virtual void withdraw(double amount){
            std::cout<<"In Savings:Trust"<<std::endl;
        }
        virtual void print(std::ostream &os)const override{
            os <<"Account Trust ";
        } //we will use this to connect to line 6 since we remove the line 64

        virtual ~Trust(){}
    
};
//std::ostream &operator << (std::ostream &os, const Trust &acc){os<<" display Trust";return os;}
//we will rmove this now. line 6 printable will do the job


int main(){
    //with Line 6 implemented
    Account *a = new Account();
    cout<<*a<<endl;

    //without line 6 implemented(they still work even with lne 6 since static)
    Account s;
    std::cout<<s<<endl;
    return 0;
}