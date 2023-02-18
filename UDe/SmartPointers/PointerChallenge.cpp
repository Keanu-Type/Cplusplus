#include <iostream>
#include <vector>
#include <memory>
using namespace std;
class Test{
    private:
        int data;
    public:
        Test(): data{0}{
            cout<<"Test Constructor: "<<data<<endl;
        }
        
        Test(int data): data{data}{
            cout<<"Test Constructor: "<<data<<endl;
        }
        
        int get_data() const{
            return data;
        }
        ~Test(){
            cout<<"Test Destructor: "<<data<<endl;
        }
};

    unique_ptr<std::vector<std::shared_ptr<Test>> >make(){
        return std::make_unique<std::vector<std::shared_ptr<Test>>>();
    }
    void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
        int temp;
        for (int i=1; i<=num;++i){
            std::cout<<"Enter Data Point: ";
            vec.push_back(std::make_shared<Test>(temp));
        }
    }
    void display(const std::vector<std::shared_ptr<Test>> &vec){
        cout<<"display data"<<endl;
        for (const auto &ptr:vec){
            cout<< ptr ->get_data()<<endl;
        }
    };

int main(){
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr; //
    //vec ptr = unique pointer, an object, which is pinting to a vectro. 
    vec_ptr = make();
    std::cout<<"How Many Data Points do you want to enter";
    int num;
    std::cin>>num;
    fill(*vec_ptr,num);
    display(*vec_ptr);
    return 0;    

}