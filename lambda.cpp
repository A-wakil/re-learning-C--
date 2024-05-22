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

    //Defining a calling the Lambda function
}