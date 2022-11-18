//C-STRInG
#include <iostream>
#include <cctype>
#include <cmath>
#include <cstring>
using namespace std;
int main() {
  const char messageA[] {"Sky is Blue like the other 300 days AGO..!"};
  const char* messageB[]{"Sky is Blue like the other 300 days AGO..!"};
  
  cout << "strlen(message) ignores non strigs letters: " << strlen(messageA) << endl;
  cout << "sizeof(message) counts ALL characters: " << sizeof(messageA)<<endl;
  cout << "sizeof(message with pointers) with bytes with const char* : "<< sizeof(messageB)<<endl;
    //STRCMP 0 returs egative value if lhs appears before rhs i lexicoraphical order. returs zero if lhs ad rhs compare equal ad Positive value if lhs appears after rhs i lexicographical order
    
    const char * string_data1 = {"Alabama"};
    const char * string_data2 = {"Blabama"};
    cout << "strcmp of Alabama then Blabama: "<< strcmp(string_data1, string_data2)<<endl;
    
    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    cout << "strcmp of Alabama then Alabamb: "<<  strcmp(string_data1, string_data2)<<endl;
    cout << "strcmp of Blabama then Alabama: "<< strcmp(string_data2, string_data1)<<endl;
    
    
    // STD Strchr is for find first occurrece
    
    const char *str {"Try not. Do, or do not. There is no try"};
    char target = 'T';
    const char *result = str;
    int iterations{};
    
    cout << strchr(result,'not')<<endl;
    while((result = strchr(result,target))!=nullptr){
        cout<< "Found '"<< target <<"' starting at '"<<result<<"'\n";
        //we have to icrement the variable result or else we will find the target at same location
        ++result;
        ++iterations;
    }
    cout <<"iterations: "<<iterations<<endl;
    
    //STD strrchr is for findig last occurece
    
    char input[] = "/Home/User/Hello.cpp";
    char* output = strrchr(input,'/'); //always think situatio like this as ARRAY
    cout << output<<endl;"this will include /";
    cout << output+1<<endl; "this will exclude /";
    return 0;
}