#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Move{
    private:
        int *data;
    public:
        void set_data_value(int d){ 
            *data = d;
        }
        int get_data_value(){
            return *data;
        }
        Move(int d);
        Move(const Move &source);
        Move(Move &&source) noexcept;
        ~Move();
};

Move::Move(int d){ //allocate object to Heap
    data = new int;
    *data = d;  //pass data here
    cout<< "Constructor for: "<<d<<endl; //GO TO Line 35
}

Move::Move(Move &&source) noexcept
    :data(source.data){
        source.data = nullptr;
        cout<<"Move Constructor - moving resource: "<< *data<<endl;
    }
    


Move::Move(const Move &source)
    :Move{*source.data}{
        cout << "Copy Constructor for: "<<*data<<endl;
    }  // this will go back to line 24. then go back here again(so ther wil be 2 output)

Move::~Move(){
    if(data != nullptr){
        cout<< "Destructor Freeing Data for: "<<*data<<endl; //DESTIROY COPY OF 10
    }else{
        cout<< "Destructor Freeing Data for Nullptr."<<endl;
    }
    delete data;
}
int main(){
    vector <Move> vec; //CALL Line 21
    vec.push_back(Move(10));  //CALL LINE 40
    vec.push_back(Move(20)); //if you notice you will create sooo much copy it consme space. just like how it create 2 copy of 10 in output. so uncomment the move constructor
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
    vec.push_back(Move(80));
    return 0;
}