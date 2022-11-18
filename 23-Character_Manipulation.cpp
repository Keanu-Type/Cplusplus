//CHARACTER MAnipulation
#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;
int main() {
    int X = 'C'; 
    
    //check if ALPHAUMERIC
    if(isalnum(X)){
        cout << "Alphanumeric"<<endl;
    }else{
        cout << "nOT ALPHAnumeric"<<endl;
        //EXAMPLE OF nOT APLHAnUMERIC: // < > ^ 
    }
    
    
    //CHECK IF ALPHABETIC
    if(std::isalpha(X)){
        cout << "ALPHABETIC" <<endl;
    }else{
        cout <<"nOT ALPHABETIC"<<endl;
    }
    
    
    //CHECKInG IF BLAnK
    char message[] {"Hello World! 12345 6 <> HE11A !!!"};
    cout<<message<<endl;
    for (int i{0}; i<sizeof(message);i += 1){
        if(isblank(message[i])){
            cout << " ";
        }else{
            cout << message[i];
        }
    }
    cout << "" <<endl;
    
    
    //CHECK IF UPPERCASE OR LOWERCASE
    for( auto character : message){ //easy way to declare each char in a variable inside a loop
        if(islower(character)){
            cout<<"s"; //Lower letter
        }else if(isupper(character)){
            cout<<"B"; //Big letter
        }else{
            cout<<"-"; // uknown like space, other charcater like <> ,./|\ etc
        }
    }
    cout<<""<<endl;
    //CHECK IF CHARACTER IS A DIGIT
    for(auto each_char : message){
        if(isdigit(each_char)){
            cout << each_char;
        }else{
            cout<< "-";
        };
    }
    cout<<""<<endl;
    //TURn UPPER/LOWERCASE TO LOWER/UPPERCASE
    char reverse_message[sizeof(message)];
    for (int i{0};i<sizeof(message);++i){
        if(isupper(message[i])){
            reverse_message[i] =tolower(message[i]);
        }else if(islower(message[i])){
            reverse_message[i] = toupper(message[i]);
        }else if(isdigit(message[i])){
            reverse_message[i] = '1' ;
        }else{
            reverse_message[i] = ' ';
        }
  
    }
    cout << reverse_message <<endl;
    
    return 0;
}