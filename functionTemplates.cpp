#include <iostream>
using namespace std;

template <typename P> P maximum(P a, P b);



int main() {
    //Function templates are used to avoid having function overloads
    //They are a blueprint for functions
    //They are defined at run time
    //We can now use the maximum function for different data types rather than creating a maximum function for multilpe data types

    int num{78};
    int num_1{90};
    string word{"Abdulwakil"};
    string word_1{"Abacus"};
    double decimal{89.3};
    double decimal_1{2.33};

    cout << "maximum number is: " << maximum(num, num_1) << endl;
    cout << "maximum word is: " << maximum(word, word_1) << endl;
    cout << "maximum decimal is: " << maximum(decimal, decimal_1) << endl;

}

template <typename P> P maximum(P a, P b) {
    return (a>b) ? a : b;
}