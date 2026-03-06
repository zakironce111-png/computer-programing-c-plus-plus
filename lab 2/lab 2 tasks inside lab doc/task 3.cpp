// C++ Program to Convert Temperature from Celsius to Fahrenheit

#include <iostream>   // Include input-output library to use cout and cin
using namespace std;  // Use standard namespace, so we don't need to write std::cout

int main()  // Main function: execution starts here
{
    float celsius, fahrenheit;  // Declare two floating-point variables
    // 'celsius' will store temperature input by the user
    // 'fahrenheit' will store the converted temperature

    // Ask the user to enter temperature in Celsius
    cout << "Enter temperature in Celsius: ";  
    cin >> celsius;  // Read user input and store it in 'celsius'

    // Apply conversion formula from Celsius to Fahrenheit
    // Formula: Fahrenheit = (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result to the user
    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    // 'cout' prints the original Celsius value and the converted Fahrenheit value
    // 'endl' moves the cursor to a new line after printing

    return 0; // End of program, return 0 indicates successful execution
}