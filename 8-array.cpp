#include <iostream>
using namespace std;

int main(){
    cout << "ARRAY WITH UNLIMITED VALUE" << endl;
    int luckyNumsA[] = {4, 8, 15, 16, 23, 42};
    cout << luckyNumsA[0]<<endl; //cout value from array 

    cout << "ARRAY WITH LIMIT VALUE" << endl;
    int luckyNumsB[20] = {4, 8, 15, 16, 23, 42};
    luckyNumsB[0] = 10;          // this will replace the 4 with 10. value is now 10, 8, 15 ,16, 23, 42 
    cout << luckyNumsB[0]<<endl; 
    cout << luckyNumsB[1]<<endl;


    int count = size(luckyNumsA);

    for (size_t i{0}; i<count; ++i){
        cout << "luckNumsA: " << luckyNumsA[i]<<endl;

    }
    //----------------------------------------------------------------------------
    //COUNTING SIZE
        cout<< "total size byte of LuckyNumsA: " <<sizeof(luckyNumsA) <<endl;
        cout<< "size byte of LuckNumsA[0]" << sizeof(luckyNumsA[0])<<endl;

        float c {sizeof(luckyNumsA)/sizeof(luckyNumsA[0])};

        for (size_t i {0}; i <c ; ++i){
            cout << "LuckNumsA[" << i << "]" << luckyNumsA <<endl;
        }
    //----------------------------------------------------------------------------
    //COUNTING SIZE SIMPLIFY
    for (auto i : luckyNumsA){
          cout << "LuckNumsA[" << i << "]" << luckyNumsA <<endl;
    }
    //----------------------------------------------------------------------------
    //LOOPING array
    int scores[10];
    for (size_t i{0}; i < 10 ; ++i){
        scores[i] = i *3;
    }
    cout << "Array Bounds" <<endl;
    int numbers[] {1,2,3,4,5,6,7,8,9,0};
    cout << "Number 12: " << numbers[12]<< endl;
    numbers[12] = 1000;
    cout << "Number 12: " << numbers[12]<< endl;

    return 0;
}