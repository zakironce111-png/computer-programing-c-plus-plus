// C++ Program to Perform All Operations Using Functions (addition,subtraction,multiplication and division)

#include <iostream>   // Library for input and output
using namespace std;  // Using standard namespace

// Function declarations
int addTwo(int x, int y);   // Function for addition
int subTwo(int x, int y);   // Function for subtraction
int mulTwo(int x, int y);   // Function for multiplication
int divTwo(int x, int y);   // Function for division

int main()
{
    int a, b;      // Variables to store numbers
    int sum, sub, mul, div;  // Variables to store results

    // Asking user to enter numbers
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Calling functions
    sum = addTwo(a, b);   // calling addition function
    sub = subTwo(a, b);   // calling subtraction function
    mul = mulTwo(a, b);   // calling multiplication function
    div = divTwo(a, b);   // calling division function

    // Displaying results (displaying result of all operation i.e sum ,subtarction,multiplication and divison of numbers)
    cout << "\nAddition: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;

    return 0;  // End of program
}

// Function definition for addition
int addTwo(int x, int y)
{
    return (x + y);
}

// Function definition for subtraction
int subTwo(int x, int y)
{
    return (x - y);
}

// Function definition for multiplication
int mulTwo(int x, int y)
{
    return (x * y);
}

// Function definition for division
int divTwo(int x, int y)
{
    return (x / y);
}