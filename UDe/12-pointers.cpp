#include <iostream>
#include <vector>
using namespace std;
int main(){
    //POINTERS.
    //storing address in pointers.
    //pass by reference with pointers
    //cnst and pointers
    //using pointers pitfall.
    //uninitianalized pointers contain garbage data and can "point anywhere".
    //if you dont initialize a pointer to point to a variable, then you should initialize "nullptr" to make it null.
    //Pointer can change
    //can be null and uninitianilze

//NOTES!-----------------------------------
int data {20}; //regular variable

cout<<"data itself: " << data<<endl;  //regular data
cout<<"address data itself: "<<&data<<endl; //showing address data
cout<<"---------"<<endl;
int *ptrdata {nullptr}; //you are passing
ptrdata = &data;        //you are asigning ptrdata with &data. so basically ptrdata is pointing to data. so it has same address pointing and same value
cout<<"address data itself: "<<&data<<endl;
cout<<"ptr data itself: "<<ptrdata<<endl;    //you are outputting the pointer, where the pointer points to the data itself. so it has similar address as &data

cout<<"data itself: " << data<<endl;  //regular data
cout<<"address of ptr data: "<<*ptrdata<<endl;  //if you use *ptrdata. you are outputting the SAME value
cout<<"value   of ptr data: "<<&ptrdata<<endl;  //if you use &ptrdata. you are outputting the SAME Address
cout<<"---------"<<endl;
// int &data = address of your variable
// int *data2 = data // you are basically accessing/pointing the data variable
// int  *data = &data // you are basically passing the data of the variable

    //SMART POINTERS. MOSTLY USE IN OOP AND ADVANCE
    
    
    //DECLARING POINTERS 
    // Variable_type * Pointer_name;   int *number;
    //                                 double *decimal;
    //             string *name        char *letter;
    //Variable_Type *pointer_name {data};
    //                              int *number {20};
    //                              char *letter {'z'};
    
    
    //----ACCESSING POINTER ADDRESS----
    // Unary operator. variables are stored in unique addresses
    
    int nums{10};
    cout<< "Value of num: "<<nums<<endl;
    cout<< "size of num: " <<sizeof(nums)<<endl;
    cout<< "Address of num in memory: "<<&nums<<endl;
    cout<<"--------"<<endl;
    //with POINTER variable
    int *p; //this has garbage data. since no data
    cout<< "Value of p: "<<p<<endl; 
    cout<< "size of p: " <<sizeof(p)<<endl;
    cout<< "Address of p in memory: "<<&p<<endl;
    p=nullptr;
    cout<<"---------"<<endl;
    cout<< "Value of p: "<<p<<endl;
    cout<< "size of p: " <<sizeof(p)<<endl;
    cout<< "Address of p in memory: "<<&p<<endl;
    
    int *p1 {nullptr}; //you can use 0. because 0 technically still has value. so use NULL to completely "0" your variable
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr}; //THEY HAVE THE SAME VALUE of Byte even different type.

    //there is a big difference between the size of the pointer variable and size of what it points to.
    int score{10};
    double high_temp {100.7};

    cout<<"--------"<<endl;
    //INITIANILIZNG POINTER WITH VARIABLES
    //we are initializing *score_ptr as pointer
    int *score_ptr {nullptr};
    int score_pt = score;
    score_ptr = &score; //OK. make sure to use &variable when assigning address of that variable to a pointer variable
//  score_ptr = &high_temp; /ERROR. different type.
    cout<<"address of score: "<<&score<<endl; 
    cout<<"address of *score_ptr: "<<score_ptr<<endl;  //note: the address of score and scorept are the same because score_ptr points on score. it is NOT copy. just THE same
    cout<<"address of score_pt:"<< &score_pt<<endl;   //not same address because we declare a new variable a copy of a variable.
    
    //-----DEREFERENCING/CHANGING A POINTER

    int num {100};
    int *num_ptr{&num};
    cout<<"--------"<<endl;
    cout<<"num_ptr: " << *num_ptr << endl; //if you cout a *num_ptr, it will point the num's value not address
    cout<<"numptr address: "<< num_ptr<<endl;
    cout<<"num: "<< num<<endl;
    cout<<"num address: "<< &num<<endl;
    
    *num_ptr = 200;
    cout<<"num_ptr: " << *num_ptr << endl;//if you reassign the pointer. there will be changes on THE original value too.
    cout<<"numptr address: "<< num_ptr<<endl; //it will only reassign the value of pointer and variable. address are still the same
    cout<<"num: "<< num<<endl;
    cout<<"num address: "<< &num<<endl;

    cout<<"--------"<<endl;
    vector <string> stooges{"Larry", "Moe", "Curly"};
    vector <string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    for (auto individual:*vector_ptr)
        cout<<individual<<" ";

    //DELETING POINTER/MEMORY
    //to allocate space. very important. byte

    delete num_ptr;
    delete vector_ptr;
    delete score_ptr;
    delete p; //only put: Delete Pointer_Variable;
    return 0;
}