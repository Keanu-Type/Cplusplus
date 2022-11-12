#include <iostream>

using namespace std;

int main(){
    

    //getting specific string using getline
    string sentence;
    cout << "Enter String: "<< endl;
    getline(cin, sentence);
    cout << "Hello " << sentence <<endl; //this is for sentence
 
    //enter value number using cin
    int age;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
    return 0;
}