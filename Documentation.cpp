#include <iostream>
using namespace std;


int main(){
    string condition = "true";
    string situation = "true";
    //LOGICAL OPERATORS

    // AND logical operator
    (condition == "true") && (condition == "true");
    //OR logical operator
    (condition == "true") || (condition == "false");

    //RELATIONAL OPERATOR
    //equal to
    (condition == "true");
    //Not equal to
    (condition != "true");
    //Less than  or <= for greater than and 
    (condition < "true");
    //greater than* or >= for greater than or equal to
    (condition > "true");


    //STD Explanation:
   // std::cout; //print text
   // std::cin; //take input
   // std::cerr; //print error
   // std::clog; //print log messages

    cout << "CHECKING SIZE OF THE MEMORY" <<endl;
    //CHECKING THE SIZE OF MEMORY
    int number1 = 15;
    cout << sizeof(number1) <<endl;
    int number2 (15);
    cout << sizeof(number2) <<endl;
    int number3 {15};
    cout << sizeof(number1) <<endl;


//-------- IMPORTANT FOR CRAMMING BYTE SIZE
    short int var1 {10};
    short int var2 {20};
    char var3 {40};
    char var4 {50};
    auto result1 = var1+var2;
    auto result2 = var3+var4;
    cout << "size of var1, var2, var3, var4: " << sizeof(var1) << " , " << sizeof(var2) << " , " <<
    sizeof(var3) << " , " << sizeof(var4) << endl;

    cout << "size after auto and combining var 1 and var 2 size: " << sizeof(result1) <<endl;
    cout << "size after auto and combining var 3 and var 4 size: " << sizeof(result2) <<endl;

    return 0;
}