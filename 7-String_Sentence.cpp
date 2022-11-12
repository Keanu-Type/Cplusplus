#include <iostream>
using namespace std; 

int main(){
    string Color, Noun, Celebrity;
    cout <<  "enter color: ";
    getline(cin, Color);
    cout << "enter noun: ";
    getline(cin, Noun);
    cout << "enter celebrity: ";
    getline(cin, Celebrity);

    cout << " " << endl;
    cout << "Roses are " << Color << endl;
    cout << Noun << " are blue" << endl;
    cout << "I love "<< Celebrity << endl;
    return 0;

}