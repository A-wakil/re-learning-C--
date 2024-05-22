#include <iostream>
using namespace std;

int main() {
    int num{3};
    int num_1{45};
    int num_2{21};

    //Defining a Lambda function without calling it. This doesn't do any thing 
    [](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
    };

    //Defining and calling the Lambda function immediately. This will run the function only once
    [](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
    }(num, num_1, num_2);

    //Storing the function in a variable so it can be called multiple times

    auto my_func = [](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
    };

    cout << "Calling twice from the variable: " << endl;
    my_func(num, num_1, num_2);
    my_func(num, num_1, num_2);

    //Capture list of the Lambda function "[]":
    //This allows the function to use variables that are normally out of its scope i.e variable that we are not passing in as arguments

    int out_of_scope{30};
    int out_of_scope_1{303};
    int out_of_scope_2{350};
    int out_of_scope_3{310};

    //This will give an error
    [](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
        cout << "out_of_scope: " << out_of_scope << endl;
    }(num, num_1, num_2);

     //This will not give an error because we are including it in out capture List
    [out_of_scope](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
        cout << "out_of_scope: " << out_of_scope << endl;
    }(num, num_1, num_2);

    //When we capture like above, we capture by value and not by reference which means that we pass a copy of the original variable
    // changes in the variable in function does not affect the change outside
    [out_of_scope](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
        cout << "out_of_scope: " << out_of_scope << endl;
        out_of_scope = 200; //does not work
    }(num, num_1, num_2);

    //To pass by reference, include a & symbol before the variable in the capture list:
    [&out_of_scope](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
        cout << "out_of_scope: " << out_of_scope << endl;
        out_of_scope = 200; //This works because we pass by reference
    }(num, num_1, num_2);

    // To capture all variable by value, add just a '=' sign in the capture list:
     [=](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
        cout << "out_of_scope: " << out_of_scope << endl;
        cout << "out_of_scope_1: " << out_of_scope_1 << endl;
        cout << "out_of_scope_2: " << out_of_scope_2 << endl;
        cout << "out_of_scope_3: " << out_of_scope_3 << endl;
    }(num, num_1, num_2);

    // To capture all variable by reference, add just a '&' sign in the capture list:
     [&](int num, int num_1, int num_2) -> void {
        cout << "num, num_1, and num_2 are: " << num << ", " << num_1 << ",and  "<< num_2 << " respectivey." << endl;
        cout << "out_of_scope: " << out_of_scope << endl;
        cout << "out_of_scope_1: " << out_of_scope_1 << endl;
        cout << "out_of_scope_2: " << out_of_scope_2 << endl;
        cout << "out_of_scope_3: " << out_of_scope_3 << endl;
    }(num, num_1, num_2);




}