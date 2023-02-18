#include <iostream>
#include <string>
#include <fstream> //for reading file.
using namespace std;


int main(){
    
    std::ifstream in_file;
    in_file.open("myfile.txt");
    int num;
    double total;
    //std::ifstream in_file{"myfile.txt"}; //use for readding file to open.
    std::string line{}; //this where we will store each line we stored in text file.
    
    
    //THOS IN UPPERCASE COMMENT IS FOR READ 1 CHAR AT A TIME USING GET METHOD
    //char c;
    if(!in_file){
        std::cerr<<"file not exist"<<std::endl;
        return 1;
    }
    //while (in_file.get(c)){ //CHARACTER
    //    cout<< c;
    //}
    //while (!in_file.eof()){ //eof is a method when it true when we reach the file.
        
        //std::getline(in_file, line); //Method 1 getline use to read file. per line. identify them as text
        in_file >> line >>num >>total; //Method 2 Pass read value to each variable
        std::cout<<line<<std::endl;
        std::cout<<num<<endl;
        cout<< total <<endl;

        cout<<line<<endl; //output the file here.
        
    
    //}
    in_file.close();
    return 0;
}