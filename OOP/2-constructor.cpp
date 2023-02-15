#include <iostream>


//CONSTRUCTOR = method involve each time an object of class is created. you can use this on repeated.
//RULES IN CONSTRUCTOR
// 1.does not have return method
// 2.must have same name as class/objectoriented name
// 3.must be public(not necessarily but in specific and custom activity)

class Employee{ //OBJECT ORIENTED
    public: 
        int Age;
        std:: string Name;
        std:: string UserName;
        
        void Introduce(){
            std::cout<<"Name: "<<Name<<std::endl;
            std::cout<<"UserName: "<<UserName<<std::endl;
            std::cout<<"Age: "<<Age<<std::endl;
        };

        //CUSTOM CONSTRUCTOR IS HERE if you put it in private: there will be error/redline below the Employee EmployeeA of int main()
        //this is because you are utilizing the Class Employeee ITSELF(line 10)
        Employee(std::string user, std::string nickname,int ages){
            Name = user; //the variable must be same on line 12 - 14
            UserName = nickname; 
            Age    = ages;
        }

    private:
        float userID;
        double UserCode;
};


int main(){
    //Employee EmployeeA;  this method no longer works since we make our OWN CONSTRUCTOR so we lost our default constructor.
    Employee EmployeeA = Employee("Keanu","Keanu-Type0", 23); //the Employee is referring to the CUSTOM CONSTRUCTOR ITSELF
    Employee EmployeeB = Employee("Julie","KaRid Queen", 22); //Unlike in lesson 1, i dont have to reitirate per every try
    
}