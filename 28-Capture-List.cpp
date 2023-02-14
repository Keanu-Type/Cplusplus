#include <iostream>
using namespace std;
int main(){

    double a{10};
    double b{20};
    int c{42};

    auto func =[c](){
        cout <<"INNER VAL: " << c <<endl;
    };

    for (size_t i{}; i<5; ++i){
        cout << "outer value: "<< c << endl; 
        func(); //the inner value remains the same
        ++c;    //the outer value is being added
    }
    //CAPTURE IN ALL CONTEXT
    //you will have access to everything
    int d{30};

    int f{20};
    auto func2 = [=](){ //having = means everything a from line 20 to line 23 will be accessed and changed
        cout << "value: " << d <<endl;
        cout<< "val: "<< f<<endl;
    };

    for(size_t i{}; i<5;++i){
        cout<<"outer val is: "<< d<<endl;
        func2();
        ++d;
        ++f;
        cout <<"f is: "<<f<<endl;;
    }
//CAPTURE ALL BY REFERENCE
    auto func3 = [&](){ //having = means everything a from line 20 to line 23 will be accessed and changed
        cout << "value ref: " << d <<endl;
        cout<< "val ref   : "<< f<<endl;
    };

    for(size_t i{}; i<5;++i){
        cout<<"outer ref val is: "<< d<<endl;
        func3(); //the reference or & also affect the outer val
        ++d;     
        ++f;
        cout <<"f is: "<<f<<endl;;
    }
    return 0;
}