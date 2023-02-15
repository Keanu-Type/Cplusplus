#include <iostream>
#include <vector>
#include <string>
using namespace std;

        //already considered Array here as a Pointer, to the array in main
void print( int *array, size_t size){
    for(size_t i{0}; i < size; ++i){
        //we are basically finding the address of this variable, and this variable is a pointer so it virtually has NO real variable, so the address will show here is the actual pointer
        cout<<&array[i]<< " ";
    }
    cout<<endl;
}

int *apply_all(int *arrayA, size_t sizeA, int *arrayB, size_t sizeB){
        int itirate{0};
        int*new_array{};    //this will become the Pointer for the data
        new_array = new int[sizeA * sizeB]; //this will initialize the SIZE of this array
        for(size_t j{0}; j<sizeB; ++j){
            for(size_t i{0}; i<sizeA; ++i){
                new_array[itirate] = arrayA[i] * arrayB[j]; //if you multiplied arrayA and arrayB of intmain(), somewhere in your memory, those output are stored SOMWHERE. however we cannot access
                                                            //the address since we only stored it in a "pointer" array. that data still exist somewhere.
                                                            //if we Return the array, and the array who will catch the returned array from this function, is not pointer. it will basically
                                                            //"Copy" data. making 2 result at the same time. we are not literally seeing THE ACTUAL data in the intMain
                                                            // that was formulated in this Function. it was just a "Copy" generated from the Return or int Copy=function()
                cout<< &new_array[itirate]<<" ";
                cout<< new_array[itirate] <<endl;
                ++itirate;
            }
        }
        return new_array;
}

int main(){
    const size_t arraysizeA{5};
    const size_t arraysizeB{3};
    int arrayA[] {1,2,3,4,5};
    int arrayB[] {10,20,30};

    cout << "ArrayA: ";
    print(arrayA, arraysizeA);

    cout << "ArrayB: ";
    print(arrayB, arraysizeB);
    int itirate{0};
    int *mainarray{};

    cout<<"------------- Original Data formed from the Void Function"<<endl;
    int *result = apply_all(arrayA,arraysizeA,arrayB,arraysizeB);
    cout<<"------------- Here, we are trying to access THOSE data formed from the Void Function, you can see they have similar address"<<endl;
    mainarray = new int[arraysizeA*arraysizeB];
    for(size_t j{0}; j<arraysizeB; ++j){
            for(size_t i{0}; i<arraysizeA; ++i){
                cout<<&result[itirate]<<" ";
                cout<<result[itirate]<<endl;
                ++itirate;
            }
    }

    delete [] result;
    return 0;
}