#include <iostream>
using namespace std;


string getDay(int num){
    string dayName;

    //CASE SWITCH STATEMENT
    switch(num){
    case 0:
     dayName = "Sunday";
     break;
    case 1:
     dayName = "Monday";
     break;
    case 2:
     dayName = "Tuesday";
     break;
    case 3:
     dayName = "Wednesday";
     break;
    case 4:
     dayName = "Thursday";
     break;
    case 5:
     dayName = "Friday";
    break;
    case 6:
     dayName = "Saturday";
     break;
    default:
     dayName = "wrong num";
     break;
    }


    return dayName;

}
int main(){

    cout<< getDay(0);
    return 0;
}