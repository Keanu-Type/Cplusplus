#include <iostream>

using namespace std;

int main(){
    string Name = "Flammelapis";
    int    Age  = 17 ;
    cout <<"Hello Keanu" <<endl; //endl means endline. make new line
    cout <<"my name is ";       // no endline. the next cout willa ppear next to here
    cout << Name <<endl;

    string sentence = "My Name is Keaz P. Berches";
    cout << sentence.length() << endl; //length() how long the length of your sentence is
    cout << sentence[0] <<endl; //sentence[0] means you will access the first char of the variable
    
    string new_sentence = sentence;
    new_sentence[15] ='nu';   //"it will replace 'z ' with 'nu'. so instead of Keaz P. Berches it will be KeanuP. Berches "
    cout << new_sentence <<endl;
    cout << new_sentence.find("Berches",0); //find Berches in the sentence. the 0 means the count will start at 0th and it will cout what place "Berches" is
    return 0;

}