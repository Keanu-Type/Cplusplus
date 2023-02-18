#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    //--------------------boolean------------------------//
    cout<<"nobool alpha default: "<<(10==10) <<endl;//display 1
    cout<<"nobool alpha default: "<<(10==20) <<endl;//display 0

    cout<<boolalpha; //TRUE or FALSE format to entire code
    cout<<"boolalpha default: "<<(10==10) <<endl;   //true
    cout<<"boolalpha default: "<<(10==20) <<endl; //false

    cout<<boolalpha; //0 or 1 format to entire code back
    cout<<"nobool alpha default: "<<(10==10) <<endl;//display 1
    cout<<"nobool alpha default: "<<(10==20) <<endl;//display 0

    //reset which 0/1
    cout<<resetiosflags(ios::boolalpha); //even tho it should be true or false, the outputs now are 0 or 1 since because of resetiosflags
    cout<<"nobool alpha default: "<<(10==10) <<endl;//display 1
    cout<<"nobool alpha default: "<<(10==20) <<endl;//display 0
    //I/O Stream Manipulaiton = boolean


    //----------------INTEGERS-------------------------//
    cout<<"NUMBERS"<<endl;
    int num{255}; 
    cout<<std::dec<< num<<endl; //display the decimal version //255
    cout<<std::hex<< num<<endl; //display hexadecimal version //ff
    cout<<std::oct<< num<<endl; // display octodecimal      //37

    cout<<""<<endl;
    cout<<showbase<<endl; //it is virutally impossible if the output is base 8 or base 10. use showbase manipulator
    cout<<std::dec<< num<<endl; //display the decimal version
    cout<<std::hex<< num<<endl; //display hexadecimal version //0xff . prefix for hexdecimal
    cout<<std::oct<< num<<endl; // display octodecimal      // 037 note the 0 prefix fo octa
    
    
    cout<<""<<endl;
    cout<<std::showbase<<std::uppercase; //MAKE IT CAPTIAL it is virutally impossible if the output is base 8 or base 10. use showbase manipulator
    cout<<std::dec<< num<<endl; //display the decimal version
    cout<<std::hex<< num<<endl; //display hexadecimal version //0XFF . prefix for hexdecimal
    cout<<std::oct<< num<<endl; // display octodecimal      // 037 note the 0 prefix fo octa
    
    int pos {255};
    int neg {-255};

    cout<< pos <<endl; // 255
    cout<< neg <<endl; //-255

    cout<<std::showpos; //we can show the positive/negativeness
    cout<< pos <<endl; //+255
    cout<< neg <<endl; //-255

    cout<<"---------float/double-------"<<endl;
    double dec {18.987654321};
    cout<< dec<<endl;
    cout<<std::setprecision (9); //we can matinuplate the precision.
    cout<<dec<<endl;
    cout<<std::fixed; //fixed
    cout<<num<<endl;

    cout<<std::setprecision(3);
    cout<<std::scientific; //scientific
    cout<< num<<endl;
    
    double dec2 {12.16}; 
    cout<<dec2<<endl;       //show 12.16
    cout<<std::showpoint;
    cout<<dec2<<endl;  //it will show 12.1600
    //see c++ docs for more.
    return 0;
}