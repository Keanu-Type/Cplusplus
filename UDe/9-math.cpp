#include <iostream>
#include <cmath>
#include <cstdlib> //required for rand()
#include <ctime> //required for time()

using namespace std;

int main(){

    double num {};

    cout<<"enter double: ";
    cout<< "cubed root: "<< cbrt(num)<<endl;
    cout<<"sin: "<<sin(num)<<endl;
    cout<<"cos: "<<cos(num)<<endl;
    cout<<"ceil: "<<ceil(num)<<endl;
    cout<<"floor: "<<floor(num)<<endl;
    cout<<"round: "<<round(num)<<endl;

    int random_number{};
    size_t count {10}; //RANDOM NUMBER TO GENERATE
    int min{1};
    int max{10};

    cout <<"random max: "<<RAND_MAX<<endl; //generate
    srand(time(nullptr)); //srand() generate random number 
                            //it generate random number base on time(nullptr)
//size_t is an unsigned integer type of at least 16 bit
    for (size_t i{1}; i<=count; ++i){
        random_number = rand() % max + min;
        cout<<random_number<<endl;
    }
    return 0;
}