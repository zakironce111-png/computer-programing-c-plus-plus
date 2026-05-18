// C++ Program to Declare Different Types of Variables and Display Their Memory Size

#include <iostream>  // Include the input-output library to use cout and cin
using namespace std; // Use the standard namespace so we don't have to write std:: before cout and cin

int main()  // Main function: execution starts from here
{
    // Declaring different types of variables with initial values
    int a = 10;          // Integer variable 'a' storing whole number 10
    char b = 'A';        // Character variable 'b' storing single character 'A'
    float c = 3.5;       // Float variable 'c' storing decimal number 3.5
    double d = 7.89;     // Double variable 'd' storing larger decimal number 7.89
    bool e = true;       // Boolean variable 'e' storing logical value true (1)

    // Displaying the values of variables
    cout << "Values of variables:" << endl;  // Print heading
    cout << "Integer a = " << a << endl;     // Print value of integer variable 'a'
    cout << "Character b = " << b << endl;   // Print value of char variable 'b'
    cout << "Float c = " << c << endl;       // Print value of float variable 'c'
    cout << "Double d = " << d << endl;      // Print value of double variable 'd'
    cout << "Boolean e = " << e << endl;     // Print value of bool variable 'e' (1 = true, 0 = false)

    // Displaying memory sizes of variables
    cout << "\nMemory size of variables (in bytes):" << endl;  // Heading for sizes
    cout << "Size of int a = " << sizeof(a) << " bytes" << endl;       // Print memory used by int
    cout << "Size of char b = " << sizeof(b) << " bytes" << endl;      // Print memory used by char
    cout << "Size of float c = " << sizeof(c) << " bytes" << endl;     // Print memory used by float
    cout << "Size of double d = " << sizeof(d) << " bytes" << endl;    // Print memory used by double
    cout << "Size of bool e = " << sizeof(e) << " bytes" << endl;      // Print memory used by bool

    // Displaying memory addresses (location) of variables
    cout << "\nMemory addresses of variables:" << endl;  // Heading for addresses
    cout << "Address of a = " << &a << endl;             // Print address of int variable 'a'
    cout << "Address of b = " << (void*)&b << endl;      // Print address of char variable 'b' (cast to void* to show as address)
    cout << "Address of c = " << &c << endl;             // Print address of float variable 'c'
    cout << "Address of d = " << &d << endl;             // Print address of double variable 'd'