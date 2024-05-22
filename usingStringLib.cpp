#include <iostream>
#include <string>
using namespace std;

int main(){
    string phrase_1{};
    string phrase_2{"Abdulwakil made adhan."};
    string my_name{phrase_2, 0, 10}; // var{str, start_index, number_of_characters}. (my_name(phrase_2, 10)) This did not work but should do the name thing
    string made{phrase_2, 11, 4};
    
    // string multiple_name(6, 'v');
    
    cout << phrase_1 << endl;
    cout << phrase_2 << endl;
    cout << my_name << endl;
    cout << made << endl;
    // cout << multiple_name << endl;



    return 0;
}