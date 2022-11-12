#include <iostream>
#include <cmath>

using namespace std;
int numbers;
string namee;
double value;

//VOID FUNCTION STATEMENT
void sayHi(){ //simple void funcion
    cout << "hello keanu"<<endl;
}


//VOID FUNCTION STATEMENT
void sayName(string name, int number){ //void function with value
    cout<< " Hello Mr. "<< name << " your age is: "<< number <<endl;
}


//RETURN FUNCTION STATEMENT
//  
    double price(double item){  //double = return type, price() = function name. double item = parameter
        double total = pow(item, 3);
        return total; 
    }

//ALWYAS PUT FUNCTION ABOVE. DONT PUT IT BELOW THE MAIN
int main(){
    cout<< "insert name"<<endl;
    cin >> namee;
    cout<< "insert number"<<endl;
    cin >> numbers;
    cout << "enter double: ";
    cin >> value;
    sayHi(); //call simple void function
    sayName(namee, numbers); //function with value
    
    double result = price(value);
    cout << result <<endl;
    cout << result <<endl;
    return 0;
}