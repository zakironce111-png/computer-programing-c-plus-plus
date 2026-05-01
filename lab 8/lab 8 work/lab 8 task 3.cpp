#include <iostream>   // For input-output
using namespace std;

int main() {

    // Declare and initialize 4x4 matrix with random values
    int arr[4][4] = {
        {12, 5, 8, 20},
        {7, 25, 3, 14},
        {9, 11, 30, 6},
        {4, 18, 2, 10}
    };

    int max = arr[0][0]; // Assume first element is maximum

    // Find maximum value using nested loops
    for(int i = 0; i < 4; i++) {        // Loop through rows
        for(int j = 0; j < 4; j++) {    // Loop through columns
            if(arr[i][j] > max) {       // Check if current element is greater
                max = arr[i][j];        // Update max value
            }
        }
    }

    // Display maximum value
    cout << "Maximum value in array = " << max << endl;

    return 0; // End program
}