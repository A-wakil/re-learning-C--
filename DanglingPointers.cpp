#include <iostream>
using namespace std;
 
int main(){
    // Dangling pointers are pointers that do not point to a valid adress in memory (there are three types in this file)
    // 1. Uninitialized pointer
    // 2. Deleted pointer
    // 3. Multiple pointer pointing to the same address

    // 1. Uninitialized pointer
    int *p_number;

    cout << "Case 1, Uninitialized pointer: " << endl;
    cout << "p_number: " << p_number << endl;
    cout << "*p_number: " << *p_number << endl;

    // p_number = nullptr; // I should do this!!

    // Solution: Initialize pointer
    int *p_number1{};
    // int *p_number1{nullptr};

    cout << "I can now print of handle the case where the pointer is null" << endl;
    if (p_number1 != nullptr) {
        cout << "*p_number1" << *p_number1 << endl;
    }

    delete p_number1;

    // 2. Deleted pointer    
    cout << "p_number1" << p_number << endl; // I am trying to print a deleted address in memory, it may crash my program
    cout << "*p_number1" << *p_number << endl;

    // Solution: set the p_number to nullptr so it can be checked programmatically
    p_number1 = nullptr;
    if (p_number1 != nullptr) {
        cout << "p_number1" << p_number1 << endl;
        cout << "*p_number1" << *p_number1 << endl;
    };


    // 3. Multiple pointer pointing to the same address
    int *p_number2 { new int{45}};
    int *p_number3 { p_number2};

    cout << "p_number2" << p_number2 << endl;
    cout << "p_number3" << p_number3 << endl;

    //Deleting p_number2
    delete p_number2;
    p_number2 = nullptr;

    cout << "p_number2" << p_number2 << endl;
    cout << "p_number3(after deleting p_number2)" << p_number3 << endl; //Crash/garbage or whatever

    // Solution
    //pick the originally initialized location as master pointer
    // check to see if master pointer is nullptr before operation on it with other pointers.

    if (p_number2 != nullptr) {
        cout << "p_number2" << p_number2 << endl;
        cout << "p_number3(after deleting p_number2)" << p_number3 << endl;
    } else{
        cout << "Invalid memory access!!" << endl;
    }

    //The failing 'new' operator e.g int *p_number{ new int{33}}
    //The new operator may fail in some rare cases. Here is what to do:
    //1. Exception mechanisn
    //2. The nothrow setting


    return 0;
}