#include <iostream>
#include<string>
//CONSTRUCTOR - HAS SAME NAME AS CLASS
//useful for initialization. can be overloaded.
//invoked during object creation

//DESTRUCTOR 
//invoked automatically when an object is destroyed. CANNOT be overloaded
// has ~name() or ~. use to released memory close file etc.

class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //void set_name(std::string name_val){
        //    name = name_val;
       // }
        Player(){ //must have same name as Class
            std::cout<<"No arguements called"<<std::endl;
        }
        Player(std::string name){ //2nd example of constructor
            std::cout<< name<< " String name has been called"<<std::endl;
        }
        Player(std::string name, int health, int xp){ //3rd example
            std::cout<<name<<" Name, Health and Exp has been called in Private"<<std::endl;
        }
        ~Player(){
            std::cout<<"Destructor initialized"<<std::endl;
        }; //destructor
};