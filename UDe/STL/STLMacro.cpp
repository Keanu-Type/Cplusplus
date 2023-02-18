#include <iostream>
#include <string>
using namespace std;
    //C++ Template
    //Blueprint and functrion class template. allow pluggin.

//template <typename T> //we are basically classifying T as Type. so basically   
                      // T is now "Type". we dont need to put "Int" or"doub". it is smart enough to figure it out base on the
                        //output. regularly now. it is smart enough to know its Int

//int min(int a, int b)     //before
template <typename T> 
T mint(T a, T b){            //after
    return (a<b) ? a : b;   //return (the less than) (if) a:b (or if a>b). it will return the lowest
}


struct Person{
    std::string name;
    int age;

    bool operator<(const Person &rhs)const{
        return this ->age <rhs.age;
    }
};

//lets use template again
template<typename T1, typename T2>
void func(T1 a, T2 b){
    cout<<a<<" "<<endl;
}

std::ostream &operator<<(std::ostream &os, const Person &p){
    os <<p.name;
    return os;
};

template <typename X>
void my_swap(X &a, X &b){
    T temp = a;
    a=b;
    b=temp; //this will switch them
};


int main(){
    std::cout<<mint<int>(2,3)<<std::endl;  // we are basically passing this <int> to ensure that the variable of that class is "int"
    cout<<mint(2,3)<<endl;                 // sometimes they are smart enough to figure out that it is "int"
    cout<<mint('A','B')<<endl;             //same
    cout<<mint(12.5,9.2)<<endl;             //same
    cout<<mint( 5+2*2, 7+40)<<endl;         //same
    //THIS IS HOW MACRO WORKS
    
    
    Person P1 {"Keanu", 30};
    Person P2 {"Juka", 20};
    Person p3 = min(P1,P2);
    cout<<p3.name<<" is younger"<<endl;

    func<int,int>(10,20);
    func(10,20);
    func<char,double>('A','12.4');
    
    
    //Switch
    int x{100};
    int y{200};
    my_swap(x,y);
    cout<<"x is now: "<<x<<" & y is now: "<<y<<endl;
    return 0;
}