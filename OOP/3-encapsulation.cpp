#include <iostream>

/*ENCAPSULATION - bundling or lineuping the data. group by class. this prevent anyone/anything outside of class
                  from accessing data to interact or modify it directly.
*/


class Employee{ //OBJECT ORIENTED CLASS
    private:   //From Public to Private
        int Age;
        std:: string Name;
        std:: string UserName;

    //---CUSTOM_ ENCAPSULATION----
    public:
        void setterName(std::string encap_name){  //SETTER
            Name = encap_name; //the encap_name will set Name(who is in private) to return the value even tho it is in private
            //the Name variable here should be similar as the variable on Private string Name
        }
        std::string getterName(){                 //GETTER
            return Name; //return the encap name
        }

       void setterAge(int encap_age){  //SETTER
            Age = encap_age; 
        }
        int getterAge(){                 //GETTER
            return Age; //return the encap name
        }

       void setterUserName(std::string encap_username){  //SETTER
            UserName = encap_username; 
        }
        std::string getterUserName(){                 //GETTER
            return UserName; //return the encap name
        }


        void Introduce(){
            std::cout<<"Name: "<<Name<<std::endl;
            std::cout<<"UserName: "<<UserName<<std::endl;
            std::cout<<"Age: "<<Age<<std::endl;
        }; 

       //CUSTOM CONSTRUCTOR
       Employee(std::string user, std::string nickname,int ages){
            Name = user; //the variable must be same on line 12 - 14
            UserName = nickname; 
            Age    = ages;
        }
};

int main(){
    Employee EmployeeA = Employee("Keanu","Keanu-Type0", 23); //Set this first
    Employee EmployeeB = Employee("Julie","KaRid Queen", 22);
    EmployeeA.Introduce();               
    EmployeeB.Introduce();
    EmployeeA.setterAge(20);//you will replace Age 23 to 20
    std::cout<<EmployeeA.getterName()<<" IS " << EmployeeA.getterAge()<<" Years Old"<<std::endl; 
    return 0;
}