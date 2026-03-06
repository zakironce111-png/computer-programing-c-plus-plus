// C++ Program to Declare and Display a Floating-Point Variable pi

#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14;  // Declaring a float variable and assigning value 3.14

    // Displaying the value of pi
    cout << "Value of pi = " << pi << endl;

    // Displaying the memory size of pi
    cout << "Memory size of pi = " << sizeof(pi) << " bytes" << endl;

    // Displaying the memory address of pi
    cout << "Memory address of pi = " << &pi << endl;

    return 0; // End of program
}