#include <iostream>
using namespace std;


int main(){

    bool isMale = true;
    bool isTall = true;





//SIMPLE IF STATMENT
    if(isMale==true){
        cout<<" You are a Male"<<endl;

    }else if(isMale==true){
        cout<<"you are a girl"<<endl;
    }else{
        cout<<"unidentify"<<endl;
    }

//SIMPLE IF STATEMENT WITH MULTIPLE CONDITION
// Documentation.cpp file for operators
    if(isMale==true && !isTall){
        cout<<"True both"<<endl;
    }else{
        cout << "One is false"<<endl;
    }


    return 0;
}