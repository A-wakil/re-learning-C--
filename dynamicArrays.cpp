#include <iostream>
using namespace std;

int main(){

    size_t size{10};

    //Different ways you can declare an array
    //dynamically and how they are initialized

    double *p_salaries { new double[size]}; //salaries will contain all garbage values

    int *p_students { new(nothrow) int[size]{}}; //All values initialized to 0

    int *p_scores { new(nothrow) int[size]{1, 2, 3, 5, 6}}; // first five will be 1, 2, 3, 5, 6
                                                    // rest will be 0s.

    if(p_scores){
        cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << endl;
        cout << "Successfully allocated memory for scores";

        // print out elements in the array
        for(size_t i{}; i < size; ++i){
            cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << endl;
        }
    }


    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_scores;
    p_scores = nullptr;
    
    delete[] p_students;
    p_students = nullptr;
    return 0;
}