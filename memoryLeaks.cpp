#include <iostream>
using namespace std;

int main() {
    // Ways of memory leaks
    //1. 
    int *p_number{ new int{55}}; //Points to some address 1 on the heap as it is dynamic
    //Should delete and reset to nullptr here

    int number{23}; // lives at address 2 on the stack

    p_number = &number; // Now p_number points to address 2 and address 1 is lost.
                        // It cannot be used by the program and the system thinks it belongs to the program so it won't use it.

    //2. Multiple allocation
    int *p_number1{ new int{55}};

    //Use pointer here

    //Should delete and reset here

    p_number1 = new int{22}; // the memory with {55} is leaked

    delete p_number1; // This only releases the memory with {22} not {55}
    p_number1 = nullptr;

    //3. Nested scopes with dynamically allocated memory

    {
        int *p_number2{ new int{78}};
        //Should delete and reset here before we go out of the scope of the pointer
    }
    // memory with int{78} is leaked

    return 0;
}