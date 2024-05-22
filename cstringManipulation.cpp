#include <iostream>
using namespace std;

int main() {
    // Using a row array(regular way, I think)
    char message1[] {"This is a string. The only one I have. Though, it should work. Teaching is fun"};

    char *message2 {"This is a string. The only one I have. Though, it should work. Teaching is fun"};

    cout << "message1: " << message1 << endl;
    cout << "message2: " << message2 << endl;

    //strlen works for both regular and pointer arrays
    cout << "strlen(message1): " << strlen(message1) << endl;

    cout << "strlen(message2): " << strlen(message2) << endl;

    // Sizeof includes the null charachter for the regular array
    cout << "sizeof(message1): " << sizeof(message1) << endl;

    // but is does not give the length of string for the pointer array (It gives the memory size of pointer instead)
    cout << "sizeof(message2): " << sizeof(message2) << endl;

    //strcmp (Used to compare two strings)
    // strcmp(lhs, rhs): return +ive if rhs < lhs in lexicographical and -ive if rhs > lhs in lexicographical and 0 if they are same

    const char *string_data1{"Arizona"}; // We can change where these guy points
    const char *string_data2{"Varizona"}; // We can also change where these guy points
    char string_data3[] {"Texas"}; // We CANNOT change where these guy points
    char string_data4[] {"Alabama"};

    string_data1 = "Kigali";
    string_data2 = "Alabama";

    //These will give errors
    // string_data3 = "Mali"; 
    // string_data4 = "Burundi";


    cout << "strcmp(\"string_data1\", \"string_data2\"): " << strcmp(string_data1, string_data2) << endl;
    cout << "strcmp(\"string_data2\", \"string_data1\"): " << strcmp(string_data2, string_data1) << endl;
    cout << "strcmp(\"string_data4\", \"string_data2\"): " << strcmp(string_data2, string_data4) << endl;

    //strncpm is used to compare a number of characters in a string:
    // strnmp(lhs, rhs, n) compares first n characters of both strings. as long as n is <= shorter string

    //searching for the first occurence of a character with strchr: strchr(string, target)

    const char *str{"This is a string. The only one I have. Though, it should work. Teaching is fun"};

    char target{'T'};
    const char *result = str;
    int iterations{}; //can also be a size_t type

    while(strchr(result, target) != nullptr){
        result = strchr(result, target);
        cout << "Found " << target << " starting at " << result << endl;
        result++;
        iterations++; 
        cout << iterations << " iteration" << endl;

    }


    // Finding the last occurence of a character within a string
    // strrchr(str, target)

    const char *directory{"home/usr/home.cpp"};

    char target2 = '/';

    const char *result2 = strrchr(directory, target2);

    cout << "The file is: " << ++result2 << endl;


    return 0;
}