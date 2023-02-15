#include <iostream>

/*ABSTRACTION - hiding complex things behind pocedure that makes those things looks simple

*/



int main(){
    Employee EmployeeA = Employee("Keanu","Keanu-Type0", 23); //Set this first
    Employee EmployeeB = Employee("Julie","KaRid Queen", 22);
    EmployeeA.Introduce();               
    EmployeeB.Introduce();
    EmployeeA.setterAge(20);//you will replace Age 23 to 20
    std::cout<<EmployeeA.getterName()<<" IS " << EmployeeA.getterAge()<<" Years Old"<<std::endl; 
    return 0;
}