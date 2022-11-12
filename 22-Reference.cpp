#include <iostream>

using namespace std;

int main(){
    //  REFERENCING --- in refrencing you can refrence an original data from a different variable with having the same address and same data type. 
    //the difference between int& data2 = data1 vs int data2 = data1 is that the Address are not retain. 
    
    //see the line 24 and 25 result to line 28 and 29
    
    //allais 
    int int_data{33};
    //Reference
    int& ref_int_data{int_data};
    //pass
    int pass_data {int_data};

    cout <<  "-----original data-------"<<endl;
    cout << "Data: " << int_data << endl;
    cout << "Address Data: " << &int_data << endl;

    cout << "------Reference data------"<<endl;
    cout << "Data: " << ref_int_data << endl;
    cout << "Address Data: " << &ref_int_data <<endl; 

    cout << "-----simple pass data-----"<<endl;
    cout << "Data: "<< pass_data << endl;
    cout << "Address Data: "<< &pass_data << endl; // see the diference between address data of reference data vs simple pass data

    cout << " "<<endl;
    ref_int_data+=5;
    cout << "Lets add + 5 to Reference int data variable. "<<endl;

    cout <<  "-----original data(with + 5)-------"<<endl;
    cout << "Data: " << int_data << endl;
    cout << "Address Data: " << &int_data << endl;

    cout << "------Reference data(with + 5)------"<<endl;
    cout << "Data: " << ref_int_data << endl;
    cout << "Address Data: " << &ref_int_data <<endl; 
    //WHEN you try to add data in reference variable. it will affect the original/referenced number.
    //unlike if you add data on simple pass variable, it will only affect that variable not original.
    // so if you:

    // ref_int_data += 5; the int_data is now 38 and the ref_in_data is now 38
    // pass_data  += 5;   the int_data is still 33 but the pass_data is now 38
    

    //---------------USING OF CONSTANT(const) ---------
    const int& const_ref_int_data {int_data}; //const means unchangable. 
    //NOTE: Const in doesnt mean the int_data is const. only this data itself.

  //const const_ref_int_data = 99; //ERROR because this variable is const cannot be changed

    cout << "--------const ref int data -----"<<endl;
    cout << "const in data:  "<< const_ref_int_data << endl;
    cout << "const ref data: "<<&const_ref_int_data << endl;

    //POIINTER VS REFERENCE
    //References dont use deferencing for reading and writing
    //        can't be changed to reference something else
    //        must be initialized at declaration
    //Pointers must go through defrence operator to read/write 
    //        can be changed to point somewhere else
    //        can be declared unitialized but contains garbage addresses

    int data{10};
    int& reference_data{data}; // directly using the variable for reference
    int* point_data{&data}; //you still need to use reference(&) for pointers

    cout << "-----Reference vs Pointer-----" <<endl;
    cout << "Point Data: "    << point_data << endl;
    cout << "Point Adrs: "    << *point_data << endl;
    cout << "Reference Data: "<< reference_data << endl;
    cout << "Reference Adrs: "<< &reference_data << endl;



    

    return 0;
}