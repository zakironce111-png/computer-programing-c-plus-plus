#include <iostream>   // Header file for input and output
#include <string>     // Header file for using string data type

using namespace std;

int main() 
{
    // Declaring and initializing first name
    string firstName = "Zakirullah";

    // Declaring and initializing last name
    string lastName = "Khan";

    // Concatenating first name and last name with a space in between
    string fullName = firstName + " " + lastName;

    // Displaying the full name
    cout << "Full Name: " << fullName << endl;

    return 0;   // Indicates successful program execution
}