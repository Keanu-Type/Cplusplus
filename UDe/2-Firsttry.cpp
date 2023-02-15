#include <iostream>

int main(){
    int number;
    std::cout<<"Enter number"<<std::endl;
    std::cin>>number;
    
    if(number==30){
        std::cout<<"we have same number"<<std::endl;
        std::cout<< number << " is also my favourite number"<<std::endl;
    }else{
        std::cout<<"Not same number"<<std::endl;
    }
    
    return 0;
}