#include <iostream>
using namespace std;


int main(){
    int* p_integer{nullptr}; // same as int *pointer{nullptr};
    double* p_double{nullptr}; // same as first line;


    // sizeof is used to get the size of something e.g sizeof(int) or sizeof(double)
    // cout<< sizeof(int*) << endl;
    // cout<< sizeof(double*) << endl;

    int *pointer_int{}, other_int_var{}; //this type of decalration is not advised because other_int_var may be seen as a pointer. Other_int_var is not a pointer though.

    //Initializing pointer and addressing them data

    int an_int{34};
    int *pointer_i{&an_int};

    cout << "Int var : " << an_int << endl;
    cout << "pointer_i (Address in memory) : " << pointer_i << endl;

    // we can also re-assign the location a pointer is pointin to.
    int another_int{44};
    pointer_i = &another_int;

    //Dereferencing a pointer, reading the content of a location from the pointer
    cout << "Value : " << *pointer_i << endl; // this is done by adding a * before the name of the pointer

    // Initialize with string literal
    // Pointers can do something special
    const char *p_message{ "Hello World!" }; //this initializes an array of characters and sets pointer p_message to point to the first character

    cout << "The message is : " << p_message << endl;
    cout << "The value stored at p_message is : " << *p_message << endl;
    char new_char{'B'};


    // This should throw an error because the value of the string literal is constant
    p_message = &new_char;
    cout << "The message is : " << p_message << endl;
    cout << "The value stored at p_message is : " << *p_message << endl;


    //To edit the value, use a normal array:
    char messages[] {"Hello world!"};
    messages[0] = 'T';
    cout << "messages : " << messages << endl;


    return 0;
}