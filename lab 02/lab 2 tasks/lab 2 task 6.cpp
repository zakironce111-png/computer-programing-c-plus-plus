// Include input and output library
#include <iostream>

// Allows using standard names like cout and cin
using namespace std;

// Main function where program execution starts
int main() 
{
    // Declare an integer variable to store the number
    int number;

    // Ask the user to enter an integer
    cout << "Enter an integer: ";

    // Take input from the user
    cin >> number;

    // Check if the number is positive or zero
    if (number >= 0) 
    {
        // Print message if the number is positive
        cout << "You entered a positive integer: " << number << endl;
    }
    else
    {
        // Print message if the number is negative
        cout << "You entered a negative integer: " << number << endl;
    }

    // End the program and return value 0
    return 0;
}