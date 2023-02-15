#include <iostream>

/* 
rule #1 EVERTHING inside of the class is Private BY default

Private = not accessible OUTSIDE of class
Public  =  accessible outside of class
Protected = somewhere between. this will be more discuss on inheritance

=====HOW TO MAKE BLUEPRINT OF OBJECT ORIENTED=======


//---regular way to make class---
Class OBJECT_NAME{
    std:: string string_variable;       --DECLARING STRING need std::
          int    int_variable;          --DECLARING INT doesnt need std::
};                                      //EVERYTHING is private even without Private inside

//--regular way to make class with private/public/protected
Class OBJECT_NAME{
    public:                             --You can replace this with private: or protected:
        std:: string Name;
        std:: string Company;
              int Age;
};
*/


class EMPLOYEE{
    std:: string Name;
    std:: string Company;
    int Age; 
};

class REALEMPLOYEE{
    public: //-----Public
        std:: string Name;
        std:: string Company;
              int    Age;
     
        void Introduceself(){//you can make function inside class;
            std:: cout<<"Name - "<<Name <<std::endl;
            std:: cout <<"Age - "<<Age<<std::endl;
            std:: cout <<"Company - "<<Company<<std::endl;
        }
    private: //-----Private
              float  ID_Number;
              double User_Number;

};

int main(){
    //UTILIZING EMPLOYEE CLASS
    EMPLOYEE employeeA; //- its like "int variable;" except int = EMPLOYEE, and variable = employeeA; 
//  employeeA.          //- if you type employeeA., no intellisense appear. Name and Company wont appear ecause everything is everything is private by default(take rule#1)

    //Utilizing REALEmployee 1st time
    REALEMPLOYEE employeeb;
    employeeb.Age;    //wecan now access Age, Company, Name if you type "employeeb. "
    employeeb.Age = 23;
    employeeb.Name = "Keanu";
    employeeb.Company = "Keanu-Type0";
    employeeb.Introduceself(); //call the function

    //Utilizing Employee again; we can reutilize
    REALEMPLOYEE employeec; 
    employeec.Name = "Julie";
    employeec.Company = "Queen BOARD System";
    employeec.Age  = 22;
    employeec.Introduceself();
    return 0;
}