// C++ Program to Declare Different Types of Variables, Show Values, Memory Size, and Addresses (Error-Free)

#include <iostream>  // Include input-output library
using namespace std; // Use standard namespace

int main()
{
    // Step 1: Declare variables of different types with initial values
    int a = 10;          // Integer variable
    char b = 'A';        // Character variable
    float c = 3.5;       // Float variable
    double d = 7.89;     // Double variable
    bool e = true;       // Boolean variable

    // Step 2: Display the values of the variables
    cout << "Values of variables:" << endl;
    cout << "Integer a = " << a << endl;       // Print value of int
    cout << "Character b = " << b << endl;     // Print value of char
    cout << "Float c = " << c << endl;         // Print value of float
    cout << "Double d = " << d << endl;        // Print value of double
    cout << "Boolean e = " << e << endl;       // Print value of bool (1 = true, 0 = false)

    // Step 3: Display memory sizes of variables
    cout << "\nMemory size of variables (in bytes):" << endl;
    cout << "Size of int a = " << sizeof(a) << " bytes" << endl;
    cout << "Size of char b = " << sizeof(b) << " bytes" << endl;
    cout << "Size of float c = " << sizeof(c) << " bytes" << endl;
    cout << "Size of double d = " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool e = " << sizeof(e) << " bytes" << endl;

    // Step 4: Display memory addresses (location) of variables
    cout << "\nMemory addresses of variables:" << endl;
    cout << "Address of a = " << &a << endl;             // int address
    cout << "Address of b = " << static_cast<void*>(&b) << endl; // char address (safe cast)
    cout << "Address of c = " << &c << endl;             // float address
    cout << "Address of d = " << &d << endl;             // double address
    cout << "Address of e = " << &e << endl;             // bool address

    return 0; // End of program
}