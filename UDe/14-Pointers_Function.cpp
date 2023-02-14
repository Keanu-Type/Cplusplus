#include <iostream>
#include <vector>
#include <string>
using namespace std;

void data(int *data){
    std::cout<<data<<std::endl; //ADDRESS of Value
    std::cout<<&data<<std::endl; //ADDRESS of Pointers
}
        //unchangeable with const
void display(const vector<string> *vect){
    for (auto &s : *vect)
    //this is &s = *vect
    //this is &s = stages[x]  //stages is in main.
    //so S is pointing to Vect, which is Pointing to Stages
        cout<<&s<<" ";
}

void numdisp(const vector<int> *vect){
    for (auto &s : *vect)
    //this is s = *vect
    // it has different address for some reason
    cout<<&s<<" ";
}

void multiply(int *int_ptr){
    *int_ptr *= 2;
}

//RETURN FUNCTION FOR POINTERS
//type *functionname(int *pointer, int *pointer){}
int *largest (int *int_ptr1, int *int_ptr2){
    if(*int_ptr1> *int_ptr2){
        return int_ptr1;
    }else{
        return int_ptr2;
    }
}


int *create_array(size_t size, int init_value = 0){
    int *new_storage {nullptr};

    new_storage = new int[size];
    for(size_t i {0}; i <size; ++i){
        *(new_storage + i) = init_value;
    }

    return new_storage;
}

int main(){
    // cout <<*pointer << endl;  //you are calling what you are pointing
    // cout <<pointer  << endl; //you are calling what is int the pointer
    // cout <<&value <<
    int value {10};
    int *ptr {&value}; //POINTER pointing to the Value's Address(&Value)
    std::cout<<&value<<std::endl;
    std::cout<<ptr<<std::endl; //ADDRESS of Value
    std::cout<<&ptr<<std::endl; //ADDRESS of Pointers
    cout<<"------"<<endl;
    data(ptr); //HOW TO PASS DATA
    data(&value); //Passing Data itself. result same

    
    //multiply existing value IN main, using void function.
    multiply(ptr);
    cout<<"value now is: "<<value<<endl; //value now is 20. because
    //we pass the pointer to void, which point to value in the main. so technically it was value itself being multiplied
    
    vector <string> stages {"Keanu","Juka","Tendou"};
    cout<<"Array address in Main:"<<endl;
    cout<<&stages[0]<<" ";
    cout<<&stages[1]<<" ";
    cout<<&stages[2]<<endl;
    cout<<"Array address in Function:"<<endl;
    display(&stages); //PASSING VECTOR/ARRAY DIRECTLY
    cout<<"\n------"<<endl;
    
    
    vector <int> scores {99,20,30};
    vector <int> *addnum {nullptr}; //PASSING VECTOR/ARRAY IN A POINTER VECTOR
    addnum = &scores; //PASSING THAT POINTER VECTOR
    cout<<"Array INTS address in Main:"<<endl;
    cout<<&addnum[0]<< " ";
    cout<<&addnum[1]<< " ";
    cout<<&addnum[2]<<endl;
    cout<<"Array INTS address in Function:"<<endl;
    numdisp(addnum);
    cout<<"\n------"<<endl;
    

    int a{10};
    int b{20};
    // RETURN FUNCTION 
    int *largest_ptr {nullptr};
    largest_ptr = largest(&a, &b);
    cout << *largest_ptr<<endl;
    
    //RETUNR FUNCTION ARRAY
    int *my_array;
    my_array = create_array(100,20);
    
    return 0;
}