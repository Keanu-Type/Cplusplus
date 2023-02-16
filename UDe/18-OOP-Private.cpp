#include <iostream>
#include <string>
//#INCLUDE with angle bracket  = including system header file
//#include "double quote" = they know that it is a local file from this folder
#include "account.h"
using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
        void talk(string text_to_say){
            cout<< name<<':"'<<text_to_say<<'"'<<endl;
        };
        bool is_dead();
};



int main(){
    Player frank;
    //frank.name="Frank";
    //cout<<frank.health<<endl; we get error cause we
    frank.talk("Hello!");
    //IMPLEMENTING MEMBER METHODS
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