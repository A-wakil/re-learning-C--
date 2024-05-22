#include <iostream>
using namespace std;

int main(){
    int int_data{33};
    double double_data{33.4};

    //References
    int& ref_int_data{int_data};
    double& ref_double_data{double_data};


    //Print stuff out
    cout << "int_data : " << int_data << endl; 
    cout << "&int_data : " << &int_data << endl;
    cout << "double_data : " << double_data << endl;
    cout << "&double_data : " << &double_data << endl;

    cout << "ref_int_data : " << ref_int_data << endl; 
    cout << "&ref_int_data : " << &ref_int_data << endl;
    cout << "ref_double_data : " << ref_double_data << endl;
    cout << "&ref_double_data : " << &ref_double_data << endl;

    // The references and original values are the same basically. It is not a duplicate. Changes made in one appears in the other.
    // They also share the same address in memory.



    return 0;
}