#include <iostream>
using namespace std;

int main(){

    //The failing 'new' operator e.g int *p_number{ new int{33}}
    //The new operator may fail in some rare cases. Here is what to do:
    //1. Exception mechanisn
    //2. The nothrow setting

    // int *data{new int[1000000000000000]};

    // for (size_t i{0}; i < 10000000 ; ++i) {
    //     int *data = new int[100000000];
    // }

    //1. Exception mechanisn
    // for (size_t i{0}; i < 100 ; ++i) {
    //     try{
    //     int *data = new int[1000000000000000];
    //     } catch(exception& ex) {
    //         cout << "Something went wrong " << ex.what() << endl;
    //     }
    // }

    //2. The nothrow setting
     for (size_t i{0}; i < 100 ; ++i) {
        int *data = new(nothrow) int[1000000000000];

        if (data != nullptr){
            cout << "Data Allocated" << endl;
        }
    }

    cout << "Program ending well" << endl;
    return 0;
}