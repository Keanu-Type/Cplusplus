#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> //to work the line 22-24 setw()
using namespace std;

int main(){
    std::ifstream in_file;
    std::string line;

    int num;
    double total;


    in_file.open("myfile2.txt");
    if(!in_file){
        std::cerr<<"problem in file"<<std::endl;
        return 1;
    }
    while(!in_file.eof()){
        in_file>>line>>num>>total;
        std::cout<<std::setw(10)<<std::left<<line
                <<std::setw(10)<<num 
                <<std::setw(10)<<total 

                <<std::endl;
    }
    in_file.close();
    return 0;
}