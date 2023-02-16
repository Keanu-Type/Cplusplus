#include <iostream>
#include <string>
using namespace std;
//Deep copy = we dont simply copy the pointer. we copy the data pointed to the pointer


class Deep{
    private:
        int *data;
    public:
        void set_data_value(int d){
            *data = d;
        }
        int get_data_value(){
            return *data;
        }

        Deep(int d);
        Deep(const Deep &source);
        ~Deep();
};


Deep::Deep(int d){ //
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source) //COPY CONSTTRUCTOR
    :Deep{*source.data}{
    cout <<"Copy constructor - deep copy"<<endl;
}

Deep::~Deep(){
    delete data;
}

void display_deep(Deep s){ //COPPY CONSTRUCTOR
    cout<< s.get_data_value()<<endl;
}
int main(){
    Deep obj1 {100};
    display_deep(obj1); //call line 38
    obj1.set_data_value(1000);
    Deep objt2 {10000};
    objt2.set_data_value(100000);


    return 0;
}