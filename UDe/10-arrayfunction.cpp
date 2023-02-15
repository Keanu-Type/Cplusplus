#include <iostream>
#include <vector>

using namespace std;
//void print_array(int numbers[]){ this is wrong. we did not give how many arrays we have
void print_array(int numbers [], size_t size){  //this is the CORRECT way
    for (size_t i{0}; i<size; ++i){
        cout<<numbers[i]<<endl;
    }
}; //NOTE THAT we can modifiy array with this.

            //PUT CONST here so we CANNOT modify unnecessary modification in array
void const_array(const int numbers[], size_t size){
    for (size_t i{0}; i<size; ++i){
        cout<<numbers[i]<<endl;
    }
}
            //PASS BY REFERNCE! put &. this directly modify the a and b variable even outside of int main
            //unlike without reference. you are basically generating ANOTHER variable which consume space. with reference
            //you are just pointing the original variable which technically doesnt consume space
            //very effective too to avoid too much space with arrays/vectors
void printing(int &a, int &b){
    a = 20;
    b = 30;
}
//              add const to avoid unncessary overwrite
void vectorprint(const std::vector<int> &v){
    //for auto num in v
    for (auto num : v){
        cout<< num<<endl;
    }

}

int main(){
    int my_numbers[]{1,2,3,4,5};
// function(array, element_value).
    print_array(my_numbers, 5); //you must throw the digit/number of elements in array
    const_array(my_numbers, 5);
   
   
    vector <int> arrays{9,10,11,12,13,14,15};
    int a{10};
    int b{20};
//------PASS BY REFERENCE-------------
    printing(a,b);
    vectorprint(arrays);

    return 0;
}