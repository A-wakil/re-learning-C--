#include <iostream>
using namespace std;

int addition(int num_1, int num_2);
int addition_p(int* num_1, int* num_2);
int addition_r(int& num_1, int& num_2);

int main() {
    int num{34};
    int another_num{33};

    cout << "num + another_num: " << addition(num, another_num) << endl;

    cout << "num is still: " << num << " and another_num is still: " << another_num << endl; // we are passing by value here 
                                                                                            //so it makes a copy and does not edit the original variable
                                                                                            // even though we increased the numbers in the function
    cout << "using pointer, num + another_num: " << addition_p(&num, &another_num) << endl;
    cout << "num is now: " << num << " and another_num is now: " << another_num << endl; // we are passing by pointer here 
                                                                                            //so it edits the original variable
                                                                                            // when we increased the numbers in the function
    int& r_num{num};
    int& r_another_num{another_num};

    cout << "using references, num + another_num: " << addition_r(r_num, r_another_num) << endl;
    cout << "num is now: " << num << " and another_num is now: " << another_num << endl; // we are passing by reference here 
                                                                                            //so it edits the original variable
                                                                                            // when we increased the numbers in the function
    
    // I can also pass the references of the variables directly without creating r_num and r_another_num
    cout << "using references, num + another_num: " << addition_r(num, another_num) << endl;
    cout << "num is now: " << num << " and another_num is now: " << another_num << endl; 




    return 0;
}

int addition(int num_1, int num_2){
    ++num_1;
    ++num_2;
    return num_1 + num_2;
}

int addition_p(int* num_1, int* num_2){
    ++(*num_1);
    ++(*num_2);
    return *num_1 + *num_2;
}

int addition_r(int& num_1, int& num_2){
    ++num_1;
    ++num_2;
    return num_1 + num_2;
}