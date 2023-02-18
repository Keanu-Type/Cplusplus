#include <iostream>
#include <string>
#include <vector>
using namespace std;
    //C++ Template
    //Blueprint and functrion class template. allow pluggin.

//template <typename T> //we are basically classifying T as Type. so basically   
                      // T is now "Type". we dont need to put "Int" or"doub". it is smart enough to figure it out base on the
                        //output. regularly now. it is smart enough to know its Int

//int min(int a, int b)     //before
template <typename T> 
class Item{
    private:
        std::string name;
        T value; //or int value;
    public:
        Item(std::string name, T value): name{name}, value{value}
        {}
        std::string get_name() const{return name;}
        T get_value() const{return value;};//return value
};


template<typename T1, typename T2>
struct My_Pair{
    T1 first; //can be int or int first etc etc
    T2 second;
};

int main(){         
    Item<int>item1{"Frank", 100};//it willbe recognize as string and int typ.e it will go to line 14.
                                 //run line 19.
    std::cout<<item1.get_name()<<" "<<item1.get_value()<<std::endl;
                                
    Item<int>item1{"Frank", 100}; //same
    std::cout<<item1.get_name()<<" "<<item1.get_value()<<std::endl;


    Item<Item<std::string>> item3{"frank",{"c++","professor"}}; //name = frank;
                                                                //value = name - c++
                                                                //      = value professor.
    std::cout<<item3.get_name()<<' '
             <<item3.get_value().get_name()<<' '
             <<item3.get_value().get_value()<<std::endl;
        
    return 0;
}