#include <iostream>
using namespace std;

int main(){

    int number{22};
    int *p_number{&number};
    cout << *p_number << endl;
    cout << p_number << endl;
    cout << &number << endl; //To get the address of the integer

    int number1{33};
    int *p_number1;
    p_number1 = &number1;
    cout << *p_number1 << endl;
    cout << p_number1 << endl;

    //BAD THINGS
    //Writing into an uninitialized pointer
    int *pointer; //Contains junk address, could be anything
    cout << "This will run but the next line may break the code!" << endl;;
    *pointer = 55; // Writing into an unitialized pointer, BAD!
    cout << "This may not run because the code will break above" << endl;

    //Initializing pointer to null
    //int *null_p{}; //same as below
    // int *null_p{nullptr};
    // *null_p = 44; //this is bad, we should not write to a null pointer;
    // cout << "This line should run" << endl;
    // cout << *null_p << endl;
    // cout << "This line may not run because the previous line may break the program";

    //Dynamic heap memory
    int *p_number4{nullptr};
    p_number4 = new int;  //Dynamically allocate space for a single int on the heap.
                          //This space belongs to our program now and the system can't use it until we return it.
    
    *p_number4 = 77;  //Writing into dynamically allocated space
    cout << "p_number4 : " << *p_number4 << endl;

    //Return to the OS
    delete p_number4;
    p_number4 = nullptr;
    // These may work but is bad practice. After freeing a memory, return its pointer to null pointer.
    // cout << "Writing in bad memory" << endl;
    // *p_number4 = 45;
    // cout << "Done Writing" << endl;
    // cout << *p_number4 << endl;
    // cout << p_number4 << endl;

    //Dynamically initialize pointers at definititon

    int *p_number5{ new int }; //memory location contains junk data
    int *p_number6{ new int (22) }; // use direct initializaton
    int *p_number7{ new int {34} }; // use uniform initialization

    cout << "p_number5: " << p_number5 << endl;
    cout << "*p_number5: " << *p_number5 << endl; // Junk value
    cout << "p_number6: " << p_number6 << endl;
    cout << "*p_number6: " << *p_number6 << endl;
    cout << "p_number7: " << p_number7 << endl;
    cout << "*p_number7: " << *p_number7 << endl;

    delete p_number5;
    p_number5 = nullptr;
    delete p_number6;
    p_number6 = nullptr;
    delete p_number7;
    p_number7 = nullptr;

    //Even though pointers are deleted, they are still available for the program, they just do not have a space in memory
    //They can be reused
    p_number5 = new int(88); // a way of allocating memory on the heap dynamically
    cout << "p_number5" << p_number5 << endl;
    cout << "*p_number5" << *p_number5 << endl;

    p_number6 = new int; // another way of allocating memory on the heap dynamically
    *p_number6 = 90;
    cout << "p_number6" << p_number6 << endl;
    cout << "*p_number6" << *p_number6 << endl;

    // Now let's delete the pointers from memory on more time
    delete p_number5;
    delete p_number6;
    p_number5 = nullptr;
    p_number6 = nullptr;



    return 0;
}