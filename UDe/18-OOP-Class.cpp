#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player{
    //attributes
public:
    std::string name;
    int health;
    int xp;

    //methods
    void talk(std:: string text_to_say){
        cout<<name <<" is talking... "<< text_to_say<<endl;
    }
    bool is_dead;
};

class Account{
public:
    std:: string name;
    double balance;

    bool withdraw(double bal){
        balance += bal; //balance = balance+bal;
        cout<<"Balance: "<<balance<<endl;
    };
    bool deposit(double bal){
        balance -= bal; //balance = balance - bal;
        cout<<"Balance: "<<balance<<endl;
    };
};

int main(){
    Player frank;    
    Player hero;

    
    //we can also creat object
    //Player *enemy{nullptr}; 
    //enemy = new Player;
    //delete enemy;//delete to avoid memor leak
    
    //we can also pass them as array array;
    Player players[]{frank, hero};
    
    //we can also pass them as vector: vector<CLASS_NAME> vector_name{item, item};
    vector<Player> player_vec{frank};
    player_vec.push_back(hero);


    //---ACCESSING CLASS MEMBER--
    frank.name = "Frank"; //--initializing      
    frank.health = 100;
    frank.xp = 12;          

    frank.talk("hello!");  //----accessing
    cout<< frank.name <<endl;
    cout<< frank.health<<endl;

    //accessing class member using pointer
    Player *enemy = new Player(); //enemy is NOT an player object. it is a Pointer to player object
    (*enemy).name = "Mob"; //Dereferencing
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will attack you!");
    delete enemy; //to free memory
    
    
    Account jim;
    Account mayu;
    //Account accounts[] {jim, mayu}; //we can initialize it in vector to
    //std:: vector<Account> accounts{};

    //---ACCESSING CLASS MEMBER--
    jim.balance = 500000;
    //jim.withdraw(10000);
    jim.deposit(10000);
    return 0;
}