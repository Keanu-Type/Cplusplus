/*
PARTS OF LAMBDA FUNCTION
[Capture List](Parameters) ->return type{
    function body
}
EXAMPLE OF A LAMBDA FUNCTION
[](){
    cout<<"HELLO WORLD"<<endl;
}();

ANOTHER EXAMPLE
 [](double a, double b){
     cout << "a+b: "<< (a+b)<<endl;    
  }(12.1,5.7); ----this is a+b

SPECIFY RETURN TYPE EXPLICITLY (RETURN DOUBLE)
auto result = [](double a, double b)->double{
    return (a+b);
}(12.1, 5.7);

*/

/**/
#include <iostream>
using namespace std;
//

int main(){


//FIRST TRY OF LAMBDA

    auto Name_Function = [](){
        cout << "HELLO WORLD!"<<endl;
    };

    Name_Function(); //CALL THE FUNCTION    


//SECOND TRY OF LAMBDA FUNCTION(CALLING IT WITHOUT NAME)
    [](){ //This will be call automatically 
        cout<< "Hello World!"<<endl;

    }();
//LAMBDA TAKING PARAMETERS
    [](double a , double b){
        cout << (a+b)<<endl;
    }(10.0,5.0);
//LAMBDA WITH NAME AND TAKING PARAMETER
    auto sum = [](double a , double b){
        cout << (a+b)<<endl;
    };
    sum(10,5);
    sum(30,20);
//LAMBDA WITH RETURN
    auto returning = [](double a , double b){
        return(a+b);
    };
    cout<< returning(8,8) <<endl;
    cout<< returning(9,9) <<endl;

//LAMBDA WITH RETURN TYPE EXPLICITLY
    auto explicitly = [](double a, double b) -> int{
        return (a+b);
    };
    double a{6.9};
    double b{9.8};
    auto resul3 = explicitly(a,b); //WITH EXPLICIT RETURN
    auto resul4 = returning(a,b); //NO EXPLICIT RETURN

    cout <<  resul3 << endl;
    cout <<  resul4 << endl;

    return 0;
}