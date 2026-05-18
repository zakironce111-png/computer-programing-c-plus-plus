#include <iostream>   // Header file for input and output

using namespace std;

int main() 
{
    // Declaring and initializing an integer variable
    int num = 25;

    // Declaring a pointer variable of integer type
    int *ptr;

    // Initializing pointer with the address of num
    ptr = &num;

    // Displaying the value of num
    cout << "Value of num: " << num << endl;

    // Displaying the address stored in ptr
    cout << "Address stored in ptr: " << ptr << endl;

    // Displaying the value pointed to by ptr using dereference operator
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;   // Program ends successfully
}