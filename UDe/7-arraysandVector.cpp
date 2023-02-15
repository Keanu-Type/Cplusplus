#include <iostream>
#include <vector>

using namespace std;

int main(){
    /* ARRAYS
        -fixed size                                 -stored contigously in memory
        -elements(items inside) are ALL same TYPE   -no checkinf if out of bound
        
    */
   double temp[] {9.2,3.7,10.2,6.6}; //how to declare temps

   temp[0] = 100.8; //this will REPLACE 9.2

    /*--MULTI-DIMENSIONAL ARRAYS--
    has row and columns

    int Array[rows][columns];<------structure
    int Array[5][5];    example     

    Example 2:
    
    int Movie_Rating[3][4]
        {0,4,3,5},
        {2,3,3,5},
        {1,4,4,5}
    ;
    */
   
   /*------VECTORS-----------
    Contain standard c++ template library. it can grow/shrink in size at execution time. bits
    probvide simialr schematic and syntax as arrays. very efficient. has sort, reverse find and more
    must use #include vectors
   
    *Dynamic size, Elements must be same type(int, etc)
    *store contiguously in memory
    *individual element can be access by index posiition
    *empty element initialized to zero
   */
    vector <char> vowels(5);       //it means you have 5 elements
    vector <int> test_scores(10);  //when you declare vector. if there is blank element, they are set to 0.
    
    vector <char> vowel{'a','e','i','o','u'}; //declaring chars
    vector <double> hi_temp (365, 80.0);       //double
    vector <int> scores {100,20,30,40,50};  //int

    
    std::cout<< "index 0: "<< scores.at(0)<<std::endl; //access 0 element
    std::cout<< "index 1: "<< scores.at(1)<<std::endl; //access 1 element
    
//  Storing Value: vector.at(index) = data; 
    scores.at(0) = 90; //reassign element 0 as data 90

// Growing/Adding Vector:  vector.push_back(120); /ADD 120 to vector. will automatically allocate space at last.
    scores.push_back(200);
    std::cout<<"index last: "<<scores.at(5)<<std::endl;
    std::cout<<"Size: "<<scores.size()<<std::endl;
    
    //-----MULTIDIMENSIONAL VECTOR------------
    vector <vector<int>> ratings 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    std::cout<<"vector vector index 0: "<<ratings.at(1).at(2)<<std::endl;
    
    //output 10

    ratings.push_back({13,14,15,16});//adding SET of array
    std::cout<<"Vector new index: " <<ratings.at(3).at(2)<<std::endl;
    return 0;
}