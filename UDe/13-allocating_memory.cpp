#include <iostream>
using namespace std;


int main(){

    int *array_ptr {nullptr};
    int size{};
    cout <<"enter size in array: "<<endl;
    cin>> size;

    array_ptr = new int[size];

    delete [] array_ptr; //deleting a pointer array

    int scores[]{100,95,89};
    int *score_ptr{scores};

    cout<<&score_ptr[0]<<endl;
    cout<<&score_ptr[1]<<endl; 
    cout<<&score_ptr[2]<<endl; 

//incrementing/decrementing array pointer
    cout<<score_ptr++<<endl;//you dont need to put &
    cout<<score_ptr++<<endl;
    cout<<score_ptr++<<endl; //NULL. because it there is no next variable, there by no next data and no next address
    

    return 0;
}