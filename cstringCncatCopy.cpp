#include <iostream>
using namespace std;

int main(){
    // Concatenation with strcat

    char dest[30]{"Hello "};
    char src[30]{"World!"};
    cout << strcat(dest, src) << endl;
    cout << dest << endl;

    cout << strcat(dest, ". Good bye friends!") << endl;


    // We can select the number of characters to be added from the source with strncat(dest, src, n)

    // copying with strcpy
    cout << strcpy(dest, src) << endl; // dest should be longer that src, I think
    cout << "dest: " << dest << endl;

    // We can select the number of characters to be copied from the source with strncpy(dest, src, n). 
    // It will start replacing the dest from beginning. eg strncpy("Jasion", "bike", 2) return "bision"

    char dest1[20]{"Jasion"}; // {"Jasion"} is same as {'J', 'a', 's', 'i', 'o', 'n', '\0'}
    char src1[20]{"bike"};

    cout << strncpy(dest1, src1, 2) << endl; // returns bisoin!!




    return 0;
}