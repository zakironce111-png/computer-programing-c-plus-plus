// C++ Program to Declare and Display a Floating-Point Variable pi

#include <iostream>   // Include input-output library to use cout and cin
using namespace std;  // Use the standard namespace, so we don't need to write std::cout

int main()  // Main function: execution starts here
{
    float pi = 3.14;  // Declare a floating-point variable named 'pi' and assign it the value 3.14

    // Display the value of the variable 'pi'
    cout << "Value of pi = " << pi << endl;  
    // Explanation: 'cout' prints the text and the value of pi
    // 'endl' adds a newline after printing

    // Display the memory size of 'pi'
    cout << "Memory size of pi = " << sizeof(pi) << " bytes" << endl;  
    // Explanation: 'sizeof' operator returns the number of bytes used to store the variable
    // For float, it usually returns 4 bytes (depends on compiler/system)

    // Display the memory address of 'pi'
    cout << "Memory address of pi = " << &pi << endl;  
    // Explanation: '&pi' gives the memory location of the variable 'pi'
    // This is useful to see where the variable is stored in RAM

    return 0; // End of program, returning 0 indicates successful execution
}