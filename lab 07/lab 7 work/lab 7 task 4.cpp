#include <iostream>   // For input-output
using namespace std;

int main() {
    int numbers[5]; // Array to store 5 numbers
    int sum = 0;    // Variable to store sum

    // Input numbers from user
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i]; // Take input
    }

    // Calculate sum
    for(int i = 0; i < 5; i++) {
        sum += numbers[i]; // Add each number to sum
    }

    // Display sum
    cout << "Sum = " << sum << endl;

    return 0; // End program
}