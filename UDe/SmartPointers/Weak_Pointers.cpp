#include <iostream>
#include <string>
#include <memory>


using namespace std;

class B;//forward declaration. just declare it

class A{
    std::shared_ptr<B> b_ptr;
    public:
        void set_B(std::shared_ptr<B>&b){
            b_ptr = b;
        }
};

class B{
    std::shared_ptr<A> a_ptr;
    public:
        void set_A(std::shared_ptr<A> &a){
            a_ptr = a;
        }
    B(){cout<<"B_Constructor: "<<endl;}
    ~B();
};

int main(){


    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>(); 
    a-> set_B(b); // so a is now pointing a b
    b->set_A(a); // b is now pointing at a.

    
    //wea pointer make one of pointers non-owning(or weak)
    //       A                  B
    //ex: Shared_ptr<B>______> 
    //             <---------weak_ptr<A>


    return 0;
}