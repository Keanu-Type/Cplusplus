#include <iostream>
using namespace std;

int main(){
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