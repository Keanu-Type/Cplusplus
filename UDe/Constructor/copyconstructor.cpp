#include <iostream>
#include <string>

using namespace std;
class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        std::string get_name(){
            return name;
        }
        int get_health(){
            return health;
        }
        int get_xp(){
            return xp;
        }
        Player(std:: string name_val="None", int health_val = 0, int xp_val =0);
        //COPY THE CONSTRUCTOR
        Player(const Player &source); //THIS WILL COPY THE CONSTRUCTOR ABOVE
                                    //Note: use & so it WONT copy the Pointers too. best practice
        //DESTRUCTOR
        ~Player(){};
};


Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val}, xp{xp_val}{
        cout<<"Three args constructor for "<< name<<endl;
}

Player::Player(const Player &source)
    :name(source.name), health(source.health), xp(source.xp){
       }

void display(Player p){
    cout <<"Copy Constructor - Made "<<p.get_name()<<", "<<p.get_health()<<", "<<p.get_xp()<<endl;;
}

int main(){
   
    //Player enemy;
    //display(enemy);
    Player hero{"Hero", 100, 20};
    Player new_object{hero};
    display(hero);    
    return 0;
}