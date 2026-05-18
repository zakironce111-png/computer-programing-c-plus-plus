#include <iostream>   // For input-output
using namespace std;  // To use standard names

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Declare and initialize array

    // Loop to display array elements
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << " = " << numbers[i] << endl; // Print each value
    }

    return 0; // End of program
}