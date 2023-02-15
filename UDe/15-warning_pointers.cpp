#include <iostream>


int main(){
    int *int_ptr; //THIS IS WRONG. it can point to ANWYHERE. memory leak. must use {nullptr}
    *int_ptr = 100; //dont declare value after declaring a pointer anywhere. directly declare it.

    //LEAK MEMORY
    //use "delete *ptr;" to release memory.
}