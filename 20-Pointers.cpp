#include <iostream>

using namespace std;

int main(){
    //Declaring Pointers and use Pointers
    // Pointers is use to store addresses in Variable.
    // Pointers stored addresses to other variable.

    // put * in the declaration to tell the code that this variable is not just
    // a regular variable. use to store addresses of variable.
    //BECAREFUL
    int * pointed_number {};     //can only store an address of variable of type int
    double * pointed_double {}; // *    *    *     *  *      *     *     of type doubless

    //Explicitly initialize to nullptr
    int * pointed_numberA{nullptr};
    int * pointed_fractional_numberA {nullptr};

    // EXAMPLES

    int int_var {43};
    int *p_var { &int_var}; // the & means finding the address of int_var;
    cout << "Int_Var: " << int_var << endl;
    cout << "Address in Memory: " << p_var << endl;

    //Change address
    int new_var {65};
    new_var = 126;
    cout << "sizeof() int var and newvar: "<< sizeof(int_var) << " and " << sizeof(new_var) << endl;

    p_var = &new_var;
    cout << "NEW VAR ADDRESS: "<< p_var << endl;

    // DEFERENCING A POINTER 
    int * p_int {nullptr};
    int int_data {56};
    p_int = &int_data;
    cout << "value p_int " << p_int << endl; // REFERENCING POINTER. READING A VALUE OF POINTER

    //--------CHAR POINTER-----
    char *point_char {nullptr};
    char char_var {'A'};

    point_char = &char_var;

    cout << "value stored in point_Char: "<< point_char <<endl;
    
    char char_var2{'C'};
    point_char = &char_var2;

    //CHAR POINTERS WITH MESSAGE (g++ crash it)
    //char *p_message{"HELLO WORLD"};
    //char *h_message{"H"};
    //cout << "CHAR POINTERS"<<endl;
    //cout << *p_message << endl;
    //cout << *h_message << endl;

    //-----MULTIPLE POINTERS POINTING TO SAME ADDRESS-----
    int *p_number3 {new int{83}};
    int *p_number4 {p_number3}; //note that number4 rely ong number 3

    cout << "Pnumber 3 is " << p_number3 << " - " << *p_number3 << " Location/Address" << endl;
    cout << "Pnumber 4 is " << p_number4 << " - " << *p_number4 << " Location/Address" << endl;

    delete p_number3;

    cout << "Pnumber 4 now after deleting is " << p_number4 << " - " << *p_number4 << endl;
    //will cause error
    //to resolve this: INITIALIZE YOUR POINTERS AFTER DELCARATION
    // Example:

    int *p_number5{};
    int *p_number6{new int{56}};
    
    if (p_number6!= nullptr){
        cout << "pnumber 6 is " << *p_number6 << endl;
    }

    //DIFFERENT SOLUTIONS//
    //RESET POINTERS AFTER DELETING. make it CLEAR that it doesnt point anywhere
    int *p_number7{new int{82}};
    delete p_number7;
    p_number7 = nullptr;

    if(p_number7!= nullptr){
        cout <<"*pnumber 7 is "<< *p_number7 << endl;
    }
    // make sure the owner pointer is veryclear(for multiple pointers).

    int *p_number8{new int{382}};
    int *p_number9{p_number8};
    cout << "p_number8 address is " << p_number8 << endl;
    if(!(p_number8 == nullptr)){
        cout <<"*pnumber 9 address is "<< *p_number9 << endl;
    }
    delete p_number8;
    p_number8 = nullptr;

    if(!(p_number8 == nullptr)){
        cout <<"*pnumber 9 is "<< *p_number9 << endl;
    }else{
        cerr<<"warning trying to use an  invalid pointer" << endl;
    }

    //------------------ MEMORY LEAK ---------------------------
    // useful for reducing space allocated memory

    cout << "---------- MEMORY LEAK---------------" << endl;
    int *p_number{new int{67}}; // Lives in Address 1
    int  q_number {55};         // Lives in Address 2

    p_number = &q_number; //we are pointing q_number's address to p_number's address. so now
                          // it is being use but address1 is still use by the program. address1 still
                          //exist somewhere. but our program lost the access. memory as been leak

    //using Delete p_number won't resolve it.

     return 0;
}