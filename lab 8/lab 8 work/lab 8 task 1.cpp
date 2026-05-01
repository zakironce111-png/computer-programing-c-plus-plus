#include <iostream>   // For input-output
using namespace std;

int main() {

    // Declare and initialize 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},   // Row 0
        {4, 5, 6},   // Row 1
        {7, 8, 9}    // Row 2
    };

    // Display matrix using nested loops
    cout << "Matrix Elements:" << endl;

    for(int i = 0; i < 3; i++) {          // Loop for rows
        for(int j = 0; j < 3; j++) {      // Loop for columns
            cout << matrix[i][j] << " ";  // Print element
        }
        cout << endl; // Move to next line after each row
    }

    return 0; // End program
}