#include <iostream>

int main(){
    //use to allocate arrays on the heap. can also use std:nothrow version
    //Different ways you can declare an array
    //dynamically and how they are initialized
    size_t size{10};
    double *p_salaries {new double[size]}; // salaries array will containt garbages value. i will allocate enough space
    int *p_students {new(std::nothrow) int[size]{}}; // all values are initialized to 0
    double *p_scores {new(std::nothrow) double[size]{1,2,3,4,5}}; //allocating memory for an array of size double vars.
                                                                  // first 5 will be intialize with 1,2,3,4,5 and the rest is 0.
                                                                  
              // nothrow = used in placement new expressions to request that the new operator return a null 
              //           pointer instead of throwing bad_alloc if the memory allocation request cannot be fulfilled.

    //RELEASING MEMORY;
    delete[] p_scores;
    p_scores = nullptr; 
    
    
    
    // Use a null pointer value to indicate that an object does not point to an object now.
    
    return 0;
}