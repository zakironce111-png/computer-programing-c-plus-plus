#include <iostream>   // Header file for input and output

using namespace std;

int main() 
{
    // Declaring and initializing an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Declaring a pointer variable
    int *ptr;

    // Initializing pointer to the first element of the array
    ptr = numbers;

    // Displaying array elements using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;

    // Accessing elements using pointer arithmetic
    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;

    return 0;   // Program ends successfully
}