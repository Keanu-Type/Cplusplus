#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a{10};
    int b{20};
    int score{92};
    int result{};

    //CONDITIONAL OPERATOR. ALTERINATIVE TO IF STATEMNT AND OTHER STATEMENT OPERATOR
            //(condition) ? true result : false result;
    result = (a>b) ? a : b; //this is similar to IF STATEMENT.
                            // if(a>b){ return a}else{return b}
    cout<< "result is: " <<result<<endl;
    result = (a<b) ? (b-a) : (a-b); //(if a>b){result=b-a;}else{a-b}
    cout<< "result is: " <<result<<endl;
    result = (b != 0) ? (a/b) : 0;
    cout<< "result is: " <<result<<endl;
    
    //FOR LOOP
    for (int i{1}; i<=100; ++i){
        cout<<i<<((i%10==0) ? "\n":" "); //it will print but when it is divisble by 10 with remainder, it will print next line like 10,20,30,40. otherwise continue printing w/o next line
    }

    vector <int> nums{10,20,30,40,50};

//this will cause warning. TO AVOID warning. replace for int with unsigned i{0}. 
//the reason is because we are comparing i(a signed) to < num.size(which is unsigned).
    for(int i{0}; i<nums.size(); ++i){
        cout<<nums.at(i)<<endl;
    }
//better:
    for(unsigned i{0}; i<nums.size(); ++i){
        cout<<nums.at(i)<<endl;
    }
    
//--------RANGE BASED LOOP----------
    int scores []{100,90,97};
    for (int score : scores) //similar to Python. for (if value is in array)
        cout<< score <<endl;

    //you can auto declare it like this too. you dont need to declare what variable the itireate is:
    for(auto score: scores)
        cout<<score<<endl;
    return 0;
}